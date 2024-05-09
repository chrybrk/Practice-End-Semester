# Classical Waterfall Model

## Introduction
- The waterfall model is useful in situations where the project requirements are well-defined and the project goals are clear.
- It is often used for large-scale projects with long timelines.
- Where there is little room for error and the project stakeholders need to have a high level of confidence in the outcome.

## Features of Waterfall Model

1. Sequential Approach: Step-By-Step
2. Document-Driven: No communication between client and devlopers, just the given instructions being followed.
3. Quality Control: Testing and validating
4. Rigorous Planning: Everything has to be pre-defined, timelines, project scope, planning process.

## Phases of Waterfall Model

```
    Requirements
        -> Design
            -> Development
                -> Testing
                    -> Deployment
                        -> Maintenance
```
## Iterative Waterfall Model

```
    Requirements  <-----------------|
        -> Design  <----------------|
            -> Development  <-------|
                -> Testing  <-------|
                    -> Deployment <-|
                        -> Maintenance

    We can go back from Maintenance point.
```

## V-Model (Verification and Validation)

```
    Requirement Analysis    <------------------->           Acceptance Testing
        System Design           <------------>          System Testing
            Architecture Design   <-------->        Integration Testing
                Module Design       <---->      Unit Testing
                                    Coding
```

## Rapid Application Development (RAD)

Rapid Application Development (RAD) is a software development methodology that prioritizes rapid prototyping and iterative development over traditional sequential development processes. The primary goal of RAD is to deliver software quickly while maintaining high quality.

### Key Characteristics of RAD:

1. **Iterative Development**: RAD emphasizes rapid iterations and feedback loops. Developers quickly create prototypes based on user requirements and refine them through continuous feedback.
2. **User Involvement**: **Users are actively involved throughout the development process.** Their feedback drives the evolution of the software, ensuring that it meets their needs.
3. **Component-Based Construction**: RAD promotes the use of reusable software components. These components, often pre-existing or third-party, are integrated to accelerate development and improve consistency.
4. **Prototyping**: RAD relies heavily on prototyping to validate requirements and design decisions early in the development cycle. Prototypes help stakeholders visualize the end product and provide valuable feedback for refinement.
5. **Time-Bound Phases**: RAD projects are organized into time-bound phases, often called "sprints" or "iterations." Each phase focuses on delivering a specific set of features within a predetermined timeframe.
6. **Parallel Development**: In RAD, multiple components of the system are developed in parallel by different teams or individuals. This parallelism helps reduce development time and accelerates the delivery of the final product.
7. **Emphasis on Flexibility and Adaptability**: RAD prioritizes flexibility and adaptability to changing requirements. Developers are encouraged to embrace change and incorporate feedback throughout the development process.

Overall, RAD offers a dynamic and flexible approach to software development, making it particularly well-suited for projects with rapidly changing requirements or tight deadlines.

## Why Use Agile Model in Software Development?

The Agile model is employed in software development for several compelling reasons, primarily to address the limitations of traditional waterfall methodologies and to better align with the dynamic nature of modern software projects. Here are some key reasons why organizations choose to adopt Agile:

1. **Flexibility and Adaptability**: Agile methodologies allow teams to respond quickly to changing requirements, priorities, and market conditions. By breaking projects into small, manageable iterations, Agile enables teams to adjust course easily, incorporate feedback, and deliver value incrementally.
2. **Faster Time to Market**: Agile emphasizes delivering working software in short iterations, typically every 1-4 weeks. This frequent delivery cadence allows organizations to get products to market faster, enabling them to capture opportunities and respond to customer needs more rapidly.
3. **Customer Collaboration and Satisfaction**: Agile places a strong emphasis on engaging customers and stakeholders throughout the development process. Regular feedback and collaboration ensure that the final product meets customer expectations and delivers real value. This customer-centric approach often results in higher satisfaction and better outcomes.
4. **Improved Quality**: Agile methodologies promote continuous testing, integration, and validation throughout the development lifecycle. By focusing on delivering small, high-quality increments of functionality, Agile teams can detect and address issues early, resulting in a more reliable and robust final product.
5. **Empowered Teams**: Agile fosters self-organizing, cross-functional teams with a high degree of autonomy and accountability. Team members collaborate closely, share responsibilities, and collectively make decisions, leading to higher morale, creativity, and productivity.
6. **Transparency and Visibility**: Agile practices such as daily stand-up meetings, sprint reviews, and retrospectives promote transparency and visibility into the project's progress, challenges, and successes. This transparency enables stakeholders to make informed decisions, manage risks effectively, and course-correct as needed.
7. **Continuous Improvement**: Agile encourages a culture of continuous improvement, where teams reflect on their processes and outcomes regularly and seek opportunities to enhance efficiency, quality, and effectiveness. This focus on learning and adaptation drives ongoing innovation and growth within organizations.

Overall, the Agile model is used because it offers a flexible, collaborative, and customer-centric approach to software development, enabling organizations to deliver value faster, respond to change more effectively, and ultimately achieve better outcomes.


| Characteristic               | Waterfall Model                                          | Iterative Waterfall Model                                  | V-Model                                              | Rapid Application Development (RAD)                          | Agile Model                                                |
|-----------------------------|----------------------------------------------------------|------------------------------------------------------------|------------------------------------------------------|--------------------------------------------------------------|------------------------------------------------------------|
| Sequential Phases           | Follows a sequential approach: Requirements ➜ Design ➜ Implementation ➜ Testing ➜ Deployment ➜ Maintenance | Sequential phases with iterations within each phase        | Sequential phases with corresponding testing phases | Rapid prototyping and iterations                              | Iterative and incremental development                      |
| Flexibility                 | Limited flexibility, changes are costly and difficult to implement later in the process | Allows for some flexibility and feedback within each phase | Limited flexibility, follows a structured sequence | Flexible and adaptable to changing requirements               | Highly flexible and adaptive, embraces change and uncertainty |
| Customer Involvement       | Minimal customer involvement until the end stages         | Some customer involvement throughout each iteration         | Limited customer involvement until later stages      | Active user involvement throughout the process                | Collaborative approach with strong customer collaboration    |
| Testing Integration        | Testing occurs after the development phase                | Testing is integrated within each iteration                 | Testing is integrated within each development phase | Testing occurs alongside development, iterative validation     | Continuous testing and integration throughout the process    |
| Time-Bound Phases          | Phases have fixed durations and are sequential           | Phases have fixed durations, but iterations provide some flexibility | Phases and corresponding testing are time-bound   | Time-bound phases with rapid iterations and prototyping        | Time-boxed iterations with regular delivery of working software |
| Emphasis on Quality        | Quality assurance occurs primarily during the testing phase | Quality is assessed and improved iteratively throughout the process | Emphasizes verification and validation throughout | Emphasis on delivering high-quality software quickly            | Focuses on delivering working software with continuous improvement |
| Adaptability to Change     | Resistant to changes due to its sequential nature         | Allows for some adaptation and refinement throughout the development process | Limited adaptability, changes may disrupt the structured sequence | Emphasizes flexibility and adaptability to changing requirements | Embraces change and incorporates feedback throughout the process |
| Collaboration               | Limited collaboration between teams and stakeholders      | Some collaboration within each iteration                      | Collaboration between development and testing teams  | Collaborative approach with active involvement of stakeholders | Highly collaborative, with a focus on teamwork and communication |

## Extreme Programming (XP) Principles

1. User involvement drives development.
2. Iterative cycles for continuous improvement.
3. Automated testing ensures code quality.
4. Pair programming boosts code quality and collaboration.
5. Collective code ownership for shared responsibility.
6. Small, frequent releases for rapid feedback.
7. Sustainable work pace to prevent burnout.
8. Simple design over unnecessary complexity.
9. Continuous refactoring for code improvement.
10. Onsite customer presence for immediate feedback.

## Spiral Model Overview, Meta Model (because it has features of different sdlc models)

- Iterative approach divided into cycles or "spirals."
- Emphasizes risk management throughout the development process.
- Flexible, accommodating changes as project progresses.
- Phases: Planning, Risk Analysis, Engineering, Evaluation.
- Repetitive nature with multiple iterations until goals are met.
- Suitable for large, complex projects with evolving requirements.

| Model               | Description                                                                                                                                                                                  | Advantages                                                                                                                             | Disadvantages                                                                                                           |
|---------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|----------------------------------------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------------|
| Waterfall           | Sequential approach with distinct phases: Requirements, Design, Implementation, Testing, Deployment, Maintenance.                                                                          | Clear structure, easy to understand and manage.                                                                                         | Limited flexibility, changes difficult to accommodate.                                                                 |
| Iterative           | Divides the project into small iterations or cycles. Each iteration includes all phases but focuses on a subset of requirements. Allows for feedback and changes throughout development.   | Early delivery of partial functionality, adaptability to evolving requirements.                                                          | Overhead of multiple iterations, may require more resources.                                                           |
| Incremental         | Similar to iterative model but focuses on delivering incremental releases. Each release adds new functionality to the previous one. Allows for early delivery of essential features.       | Early delivery of functionality, opportunities for feedback and improvement.                                                             | Requires careful planning and coordination of releases.                                                                |
| Spiral              | Iterative model with a focus on risk management. Divides the project into cycles involving risk analysis, planning, development, and evaluation.                                            | Emphasis on risk management, flexibility to accommodate changes.                                                                         | Complexity of risk analysis, longer development cycles.                                                                |
| Agile               | Emphasizes adaptability, collaboration, and customer feedback. Prioritizes delivering working software frequently and responding to change quickly.                                          | Customer satisfaction, adaptability to changing requirements.                                                                           | Requires active customer involvement, may be challenging for large, distributed teams.                                 |
| V-Model             | Extension of the waterfall model with a strong emphasis on testing. Testing activities are aligned with corresponding development phases. Ensures testing is integrated throughout the lifecycle. | Emphasis on testing, clear correlation between development and testing activities.                                                        | Limited flexibility, may not be suitable for complex projects with evolving requirements.                               |
| RAD (Rapid Application Development) | Focuses on rapid prototyping and iterative development. Emphasizes user involvement and feedback to refine prototypes quickly. Accelerates the development process.                   | Rapid development, user involvement in the development process.                                                                          | Relies heavily on user involvement, may not be suitable for projects with complex requirements.                         |

## Scrum Overview

- Agile framework for managing software development projects.
- Roles: Scrum Master, Product Owner, Development Team.
- Artifacts: Product Backlog, Sprint Backlog, Increment.
- Events: Sprint, Sprint Planning, Daily Scrum, Sprint Review, Sprint Retrospective.
- Values: Commitment, Courage, Focus, Openness, Respect.
- Promotes collaboration, adaptability, and continuous improvement.

## Lines of Code (LOC) in Software Engineering

- **Definition:** Total number of lines in a software program's source code.
- **Metric:** Used to measure the size and complexity of a program.
- **Considerations:** 
  - LOC alone doesn't indicate code quality or efficiency.
  - Can vary based on programming language, coding style, and development practices.
- **Limitations:** 
  - Not always a reliable measure of productivity or software complexity.
  - Focusing solely on LOC may lead to misleading conclusions.

## Function Points (FP) in Software Engineering

- **Definition:** Metric to measure size and complexity of software based on functionality.
- **Units:** Measured in Function Points (FP).
- **Components:** Calculated based on:
  - External Inputs (EIs)
  - External Outputs (EOs)
  - External Inquiries (EQs)
  - Internal Logical Files (ILFs)
  - External Interface Files (EIFs)
- **Calculation:** Weights assigned to components based on complexity, then summed for total FP.
- **Benefits:** Standardized measure for estimating effort, assessing productivity, and comparing systems.
- **Limitations:** May not fully capture modern software complexity, requires expertise for calculation.

### Formula 

- 0 - No Influence
- 1 - Incidental
- 2 - Moderate
- 3 - Average
- 4 - Significant
- 5 - Essential

| Function Type            | Complexity (Low) | Complexity (Average) | Complexity (High) |
|--------------------------|------------------|----------------------|-------------------|
| External Inputs (EI)     | 3                | 4                    | 6                 |
| External Outputs (EO)    | 4                | 5                    | 7                 |
| External Inquiries (EQ)  | 3                | 4                    | 6                 |
| Internal Logical Files (ILF) | 7             | 10                   | 15                |
| External Interface Files (EIF) | 5            | 7                    | 10                |

- F = 14 * scale
- CAF = 0.65 + ( 0.01 * F )
- FP = UFP * CAF
- UFP = (50 * 4) + (40 * 5) + (35 * 4) + (6 * 10) + (4 * 7) = 628 

## COCOMO (Constructive Cost Model) in Software Engineering

- **Model Types:** Basic COCOMO, Intermediate COCOMO, Detailed COCOMO.
- **Basic COCOMO:** Estimates effort based on project size and cost drivers.
- **Intermediate COCOMO:** Considers additional factors like personnel capabilities and project complexity.
- **Detailed COCOMO:** Further refines estimation with factors like reuse and documentation requirements.
- **Inputs:** Project size (e.g., lines of code, function points), cost drivers (e.g., personnel experience, tools).
- **Outputs:** Estimates effort, duration, and staffing required for the project.
- **Usage:** Used in project planning to estimate resources, schedule, and budget.
- **Advantages:** Provides structured approach to estimation, identifies potential risks early.
- **Limitations:** Estimates based on historical data and assumptions, accuracy depends on input quality.

## Risk Management in Software Engineering

- **Identification:** Identify potential risks that could impact project objectives.
- **Assessment:** Assess likelihood and impact of identified risks.
- **Prioritization:** Prioritize risks based on severity and potential impact.
- **Mitigation:** Develop strategies to reduce likelihood or impact of risks.
- **Monitoring:** Continuously monitor risks throughout project lifecycle.
- **Communication:** Communicate risks and mitigation efforts to stakeholders.
- **Documentation:** Document risks, assessments, and mitigation strategies.

## SRS (Software Requirements Specification) in Software Engineering

- **Purpose:** Describes requirements and specifications for a software system.
- **Contents:** Includes introduction, scope, functional and non-functional requirements, user interfaces, system interfaces, data requirements, assumptions, and constraints.
- **Key Characteristics:**
  - Clear and Unambiguous
  - Complete
  - Consistent
  - Verifiable
- **Development Process:** Developed through collaboration, undergoes review and approval.
- **Evolution:** May evolve throughout software development lifecycle.

## Cohesion and Coupling in Software Engineering

### Cohesion
- Cohesion refers to the degree to which elements within a module or component are related to each other.
- It measures how closely the responsibilities of a module or component are related to its purpose.
- Higher cohesion indicates strong relationship and collaboration within a module, leading to better maintainability and reusability.

### Coupling
- Coupling refers to the degree of interdependence between modules or components in a software system.
- It measures how closely modules are connected or dependent on each other.
- Lower coupling implies loose connection between modules, enhancing flexibility and ease of maintenance.

## Data Flow Diagrams (DFDs)

**Definition:**
- DFDs are graphical representations of the flow of data within a system.

**Components:**
- **Processes:** Represent functions or activities that transform input data into output data.
- **Data Stores:** Repositories of data where information is stored.
- **Data Flows:** Movement of data between processes, data stores, and external entities.
- **External Entities:** Sources or destinations of data outside the system boundary.

**Levels:**
- DFDs can be hierarchical, with multiple levels of detail.
- The highest level, Level 0 or Context Diagram, provides an overview of the entire system.
- Lower levels provide more detailed views of specific processes or subsystems.

**Notation:**
- Processes: Represented by circles or rectangles.
- Data Stores: Represented by open-ended rectangles.
- Data Flows: Represented by arrows indicating data movement.
- External Entities: Represented by squares.

**Purpose:**
- Used for analysis, design, and documentation of systems.
- Helps stakeholders understand data flow and system behavior.
- Identifies areas for improvement or optimization.

**Benefits:**
- Provides visual representation of system functionality.
- Facilitates communication between stakeholders.
- Helps in understanding data inputs, outputs, and processing logic.

# TODO - 21topics * 10min = 210min OR 3hrs

- [x] Compare between all models
- [x] waterfall model
- [x] iterative waterfall model
- [x] vmodel
- [x] spiral model
- [x] rad
- [x] agile
- [x] extreme programming
- [x] scrum
- [x] LOC
- [x] FP
- [x] cocomo
- [x] risk management
- [x] srs
- [x] cohesion & coupling
- [x] dfd
- [ ] uml
- [ ] coding & testing
- [ ] cfg
- [ ] McCabe's
- [ ] debugging approach
- [ ] system testing
- [ ] iso
- [ ] sei cmm
