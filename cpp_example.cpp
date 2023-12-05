#include <iostream>
#include <memory>
#include <fstream>
#include <iostream>

/*
 * Class
 *      - Inside define
 *      - Outside define
 * Inline
 * Constructor
 * Destructor
 * Polymorphism
 * Encapsulation
 * Abstraction
*/

class Basic {
    public:
        Basic();
        Basic(int _a, int _b);
        ~Basic();

        inline void add() { std::cout << (a + b) << std::endl; }

    public:
        int a, b;
};

/*
 * Scope resolution
 * Data member initialization
*/

Basic::Basic()
    : a(10), b(10)
{
    std::cout << "Constructor called." << std::endl;
}

Basic::Basic(int _a, int _b)
    : a(_a), b(_b)
{
    std::cout << "Constructor called with parameter." << std::endl;
}

Basic::~Basic()
{
    std::cout << "Destructor called." << std::endl;
}

/*
 * Abstract Class
 * Virtual Function
 * Must be overriden
 * Default function
*/
class Abstract {
    public:
        virtual void first_function() = 0;
        virtual void second_function();
        virtual void third_function();
};

void Abstract::second_function() {
    std::cout << "Abstract default function, second." << std::endl;
}

void Abstract::third_function() {
    std::cout << "Abstract default function, third." << std::endl;
}

/*
 * Inheritance
*/
class Parent : public Abstract {
    public:
        void first_function() override;
        inline void second_function() override { std::cout << "overriding second_function"; }
};

void Parent::first_function() {
    std::cout << "Parent function" << std::endl;
}

/*
 * Mutiple Inheritance
*/
class Postman {
    public:
        inline void Hand() { std::cout << "I do have hand." << std::endl; }
};

class Son : public Parent, public Postman {
    public:
        inline void CallParent() {
            Postman::Hand();
        }
};


/*
 * File Management
 * `ifstream`
 * `ofstream`
 * `fstream`
 * write append read
*/

class FileOperation {
    public:
        FileOperation(const std::string& filepath);
        void readf();
        void writef(const std::string& content);
        void appendf(const std::string& content);
        void rwa(const std::string& content);

    public:
        std::string filepath;
};

FileOperation::FileOperation(const std::string& filepath) : filepath(filepath) {}

void FileOperation::readf()
{
    std::ifstream file(filepath);

    if ( file.is_open() ) {
        std::string line;
        while ( getline(file, line) )
            std::cout << line << std::endl;

        file.close();
    }
    else std::cout << "Failed open file from, " << filepath << std::endl;
}

void FileOperation::writef(const std::string& content)
{
    std::ofstream file(filepath);

    if ( file.is_open() ) {
        file << content;
        file.close();
    }
    else std::cout << "Failed open file from, " << filepath << std::endl;
}

void FileOperation::appendf(const std::string& content)
{
    std::fstream file(filepath, std::ios::app);

    if ( file.is_open() ) {
        file << content;
        file.close();
    }
    else std::cout << "Failed open file from, " << filepath << std::endl;
}

void FileOperation::rwa(const std::string& content)
{
    std::fstream file(filepath, std::ios::in | std::ios::out | std::ios::app);

    if ( file.is_open() ) {
        file << content;

        std::string line;
        while ( getline(file, line) )
            std::cout << line << std::endl;

        file.close();
    }
    else std::cout << "Failed open file from, " << filepath << std::endl;
}

int main()
{
    // Object creation: malloc, calloc, new, automatic and smart pointer.
    // Calling first `Basic` constructor.
    Basic *basic_malloc = (Basic*)malloc(sizeof(Basic));
    Basic *basic_calloc = (Basic*)calloc(1, sizeof(Basic));
    Basic *basic_new = new Basic();
    Basic basic_auto;
    std::shared_ptr<Basic> basic_shared = std::make_shared<Basic>();
    std::unique_ptr<Basic> basic_unique = std::make_unique<Basic>();

    // Calling second `Basic` constructor.
    Basic basic_auto_second_constructor(10, 20);

    // Calling function
    basic_malloc->add();
    basic_calloc->add();
    basic_new->add();
    basic_auto.add();
    basic_auto_second_constructor.add();
    basic_shared->add();
    basic_unique->add();

    // Object deletion
    free(basic_malloc);
    free(basic_calloc);
    delete basic_new;


    // Abstract Class
    // calling its function
    Parent abs_class;
    abs_class.first_function();
    abs_class.second_function();
    abs_class.Abstract::second_function();
    abs_class.third_function();

    // FileOperation
    FileOperation *fileOP = new FileOperation("example.txt");
    fileOP->writef("Hello, World!");
    fileOP->readf();
    fileOP->appendf("Next Word.");
    fileOP->rwa("Again ?");

    delete fileOP;

    return 0;
}

/* ======== OUTPUT ========
Constructor called.
Constructor called.
Constructor called.
Constructor called.
Constructor called with parameter.
0
0
20
20
30
20
20
Destructor called.
Parent function
overriding second_functionAbstract default function, second.
Abstract default function, third.
Hello, World!
Destructor called.
Destructor called.
Destructor called.
Destructor called.
*/
