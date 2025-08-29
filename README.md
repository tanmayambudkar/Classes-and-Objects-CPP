# Aim: To study and implement Classes and Objects
# Software Requried;
Visual Studio
# Theory:
In Object Oriented Programming, classes and objects are basic concepts of that are used to represent real-world concepts and entities.
+ A class is a template to create objects having similar properties and behavior, or in other words, we can say that a class is a blueprint for objects.
An object is an instance of a class.

+ A class is a user-defined data type, which holds its own data members and member functions that can be accessed and used by creating an instance of that class. A C++ class is like a blueprint for an object.
Data Members: These are the variables that are defined inside the class.
Member Functions: Functions declared inside a class. Also referred to as a member method.

When a class is defined, only the specification (attributes and behaviour) for the object is defined. No memory is allocated to the class definition. To use the data and access functions defined in the class, we need to create its objects.
Objects are the actual entities that are created as an instance of a class. There can be as many objects of a class as desired
<ins>Local Class</ins>:
Classes are generally declared in global scope and are accessible to every function or other classes once they are defined. But C++ also provides facility to define a class within a function. It is called local class in C++ and is only accessible in that function.

<ins>Access Specifiers</ins>:
Access specifiers control how the members (attributes and methods) of a class can be accessed.
They help protect data and organize code so that only the right parts can be seen or changed.

In C++, there are three access specifiers:
+ public - members are accessible from outside the class
+ private - members cannot be accessed (or viewed) from outside the class
+ protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.

# Implementaion:
The Concept of Classes and Objects is demonstrated using the following codes,
+ Displaying Student Information using classes
+ Displaying Car information using Classes and Methods
+ Calculators using Classes
+ Calculating the area of rectangle using Classes and Methods
+ Calculatiing the volume of a cuboid using Classes and Methods along with usage of private and public members.

# Algorithms:

1. Car-Details-Using-Class

Algorithm:

Start.

Define a Car class with attributes: owner name, contact, car brand, car name, manufacture year, years used.

Define a member function info() to input owner and car details from the user.

In `main()`, create a Car object.

Call the `info()` function to read details.

Display the owner and car details.

End.


2. Volume-of-Cuboid

Algorithm:

Start.

Define a cuboid class with attributes: length, width, and height.

Assign initial values to these attributes (e.g., length=45.0, width=20.0, height=10.0).

Define a member function `volume()` to calculate and return `height × width × length`.

In `main()`, create a cuboid object.

Call the `volume()` function on the object and store the result.

Display the computed volume.

End.

3. Calculator-using-Class.cpp

Algorithm:

Start.

Define a class calc with attributes: `x`, `y`, `add`, `subs`, `div`, `multi`.

Define member functions for input, addition, and subtraction.

Define non-member functions (using object reference) for multiplication and division.

In `main()`, create a calc object.

Use the object to:

Input values,

Perform addition and subtraction (member functions),

Perform multiplication and division (external functions).

Output the results of all operations.

End.

4. Area-of-Rectangle-Using-Class

Algorithm:

Start.

Define a class rec with attributes: length, width, area.

Define a global function `area()` that:

Accepts a rectangle object by reference,

Inputs the length and width from the user,

Calculates and sets the area.

In `main()`, create a rec object.

Call the `area()` function to input values and set the area.

Display the rectangle’s length, width, and area.

End.

5. Student-Information-Using-Class
Algorithm:

Start.

Define a class Student with attributes: name, branch, subject, year, result.

In `main()`, define an array of Student objects (size 3).

Define and assign a results array with 3 float values.

For each student (loop 3 times):

Input name, branch, year, and subject.

Assign result from the results array.

For each student (loop 3 times):

Display stored details and result.

End.

# Conclusion:
The Above codes demonstrates the usage of classes and objects in C++ , Then the types of access specifier was also demonstrated using the codes.
