# Object Oriented Programming with C++ Lab
This repository is my revision of object oriented programming taught at my college, strictly used to pass the exam.
The code within this repository  **DOES NOT** represent the extent of my actual skills, use this exclusively to pass exams;

## Day 01
Abstraction

**lab01.cpp**

About objects and abstraction. A class declaration helps with the abstraction of properties and we are able to create a blueprint of a 
Student that contains the given data members and also has methods to serve

**lab01_structure.cpp**

Abstraction can alse be attained by the use of structures, which are contructs available both in C and C++

## Day 02
Encapsulation

**lab02.cpp**

It shows how we can encpsulate the vital data member of our class. 
`speed` and `checkSpeed()` being private data and function members,
we have used them in our public properties/methods which we expose to the rest of our code. Namely:

`printSpeed()`
`carStart()`
`carFast()`
`carSlow()`

These public methods are called from main that gives us access to the functionality of the class

**lab02_interaction.cpp**

We will now use the public method exposure to interact between objects of two different classes. This shows the importance of encapsulating our data.
If we don't encapsulate our data properly, any object in the whole program can modify this, and this will make it near impossible to keep track of the modifications. It is not just about security, but also about tracking and managing of state and stability of the program.

```cpp
int main()
{
    A a, b(10), c(b);
    c.show();
    b.incr(c);
    c.show();

    A d(&b);
    d.show();

    B bob(30);
    bob.show();
    bob.printA(c);

    return 0;
}
```
This is exactly the kind of code that does nothing to explain the concepts elaborated within it. Also such architecture is an extreme anti-pattern and we shouldn't follow any part of this in our developer life, but college is college.