public class Test {
    public static void main(String args[]) {
        Product prod_a = new Product();
        Product prod_b = new Product();
        Product prod_c = new Product();
        Product prod_d = new Product();

        System.out.println(Product.count_number_of_product);
        System.out.println(prod_a.count_number_of_product);
        System.out.println(prod_b.count_number_of_product);
        System.out.println(prod_c.count_number_of_product);
        System.out.println(prod_d.count_number_of_product);
    }
}

class Product {
    public static int count_number_of_product;

    Product() {
        // increment the number of product
        count_number_of_product++;
        System.out.println("Product has been created.");
    }
}
