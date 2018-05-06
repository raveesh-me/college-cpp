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
output:
```
x:      10
x:      11
x:      10
Value:  30
x:      11
```

## Day 03
Polymorphism

**lab03.cpp**

Polymorphism happens when a part of our program can handle multiple situations and take on multiple behaviors.
Constructor overloading allows to instantiate objects with different subsets of available data.

```cpp
int main()
{
    Object cube(10.0f), cuboid(10.0f, 20.0f, 30.0f);
    cube.printVolume();
    cuboid.printVolume();
    return 0;
}
```

we are able to make a cube and cuboid from a simple `Object` blueprint and call the same `printVolume()` method on both objects and everything works as expected.

Output:
```
Volume of cube is:      1000

Volume of cuboid is:    6000
```

**lab03_friendFunction.cpp**

Fried functions can be used to declare and control trusted methods outside the class.
Thought not delared within the class scope, friend functions have access to 
all the private data and function members of a class.

We will use friend functions to do matrix multiplication.

The main call:
```cpp
int main()
{
    int r1, r2, c1, c2;
    cout << "\nEnter rows in M1:\t";
    cin >> r1;
    cout << "\nEnter columns in M1:\t";
    cin >> c1;
    cout << "\nEnter rows in M2:\t";
    cin >> r2;
    cout << "\nEnter columns in M2:\t";
    cin >> c2;
    Matrix m1(r1, c1);
    Matrix m2(r2, c2);
    m1.initialize();
    m2.initialize();
    m1.display();
    m2.display();
    cout << "\n"
         << canMultiply(m1, m2) << endl;
    if(canMultiply(m1,m2)){
        Matrix m3 = multiply(m1, m2);
        m3.display();
    }
    return 0;
}
```

output:
```
Enter rows in M1:       2

Enter columns in M1:    2

Enter rows in M2:       2

Enter columns in M2:    2
Enter value in [1][1]   :2
Enter value in [1][2]   :2
Enter value in [2][1]   :2
Enter value in [2][2]   :2
Enter value in [1][1]   :2
Enter value in [1][2]   :2
Enter value in [2][1]   :2
Enter value in [2][2]   :2

The Matrix is:
2       2
2       2

The Matrix is:
2       2
2       2

1

The Matrix is:
8       8
8       8
```
