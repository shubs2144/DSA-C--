# DSA-C++ Repository

Welcome to the DSA-C++ repository! This repository contains implementations of various Data Structures and Algorithms (DSA) using C++. It is designed to help you understand and practice fundamental concepts in computer science.

## Contents

- **OOPs**
- **Arrays**
- **Linked Lists**
- **Stacks**
- **Queues**
- **Trees**
- **Graphs**
- **Sorting Algorithms**
- **Searching Algorithms**
- **Dynamic Programming**

## Getting Started
 
 #### Run command - g++ <finename>.cpp -o app && app.exe


- **OOPs**
<!-- OOps -->/

--> Object-Oriented Programming (OOP) is a programming paradigm based on concepts like objects and classes, aimed at solving complex problems in a structured manner.

--> OOP allows representation of real-world entities in a programming context, making it easier to model and manage the complexity of software applications.

--> The fundamental principles of OOP include encapsulation, abstraction, inheritance, and polymorphism.

Classes and Objects:

--> A class is a blueprint for creating objects (instances), defining attributes (properties) and methods (behaviors) that the objects will have.
--> Objects are instances of classes and can represent specific entities, such as a car or a user in a system

What is a Constructor in C++?

--> A constructor is a special member function in a class that automatically gets called when an object of the class is created. It is mainly used to initialize objects.

--> 🔹 Key Features of a Constructor:

1️⃣ Same name as the class
2️⃣ No return type (not even void)
3️⃣ Automatically invoked when an object is created
4️⃣ Used for initializing class members

--> 🛠 Types of Constructors in C++

1️⃣ Default Constructor → No parameters
2️⃣ Parameterized Constructor → Takes arguments
3️⃣ Copy Constructor → Copies an object

--> Getter and Setter in C++

Getters and Setters are member functions used to access and modify private variables in a class.
They encapsulate data and ensure controlled access.

📌 Why Use Getters and Setters?

Encapsulation – Keeps data private and prevents direct modification.

Validation – You can add logic in setters to restrict values.

Read-Only or Write-Only Access – Control whether a variable can be read or modified.

--> "If getters and setters just allow access to private variables, why not make them public instead?"

❌ Problem with Public Variables
If we make variables public, they can be directly modified by any code, leading to:

Lack of Control – Anyone can set invalid values.

Data Inconsistency – No validation, leading to unexpected behavior.

Breaking Encapsulation – The core principle of OOP is broken.

<!--  📌 Abstraction in C++ (Simple Definition) -->

Abstraction is the process of hiding implementation details and showing only the necessary features to the user.

🔹 Real-Life Example:
Think of a car 🚗—you can drive it using the steering wheel, accelerator, and brakes without knowing the complex internal working of the engine.

<!-- 📌 Key Points About Abstraction -->

Hides unnecessary details – Only shows relevant functionalities.

Improves code maintainability – Changes to the implementation don’t affect the user.

Achieved using:

Abstract classes (class with at least one pure virtual function)

Interfaces (Pure abstract classes)

✅ Why Use Abstraction?
✔ Prevents direct access to sensitive code
✔ Allows flexible and reusable code
✔ Reduces complexity by focusing only on essential parts

<!-- === > Virtual Functions  -->

-- Virtual functions are defined in a base class and can be redefined in derived classes, enabling runtime polymorphism.
-- They allow executing the most derived version of a function when called through a base class pointer or reference.
-- If a derived class does not implement its own version, the base class implementation will be executed instead.

<!-- ===> 📌 Pure Virtual Function (Simple Definition) -->

A pure virtual function in C++ is a function without implementation in the base class, which must be overridden by derived classes. & pure virtual funtion has value assigned with zero with start virtual keyword

🔹 It makes a class abstract, meaning objects of that class cannot be created.
🔹 Ensures that all derived classes follow a common structure.

-- Abstraction = Hides implementation details and shows only what’s necessary.

-- Encapsulation = Protects data by restricting direct access.

<!-- Abstract Classes -->

-- An abstract class is a class that contains at least one pure virtual function, making it impossible to create objects of that class directly.
-- Abstract classes serve as blueprints for derived classes, enforcing a contract that derived classes must fulfill.
-- They enable polymorphic behavior by ensuring that derived classes implement specific functionalities.

<!--

 A derived class is a class that inherits properties and behavior from another class, called the base class. It allows code reuse and extensibility in object-oriented programming.

 -->

More Interview quetions - OOPs

📌 https://www.interviewbit.com/oops-interview-questions/ 📌
