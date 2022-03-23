# CPP01

## ex00

To alloc memory just type
```c++
//just use new keyword
int *USD = new int;
```
To free  
```c++
delete USD;
```


In classes you can have Constructor and a Destructor

Constructors are special member function having the same name as the class which is used to initialize some values.  
```c++
class Taxi {
    private:
        int value;    
    public:
        Taxi();
};

Taxi::Taxi() {
    this->value = 10;
}
```
**this** pointer is a implicity parameter to all members functions.  

Destructor is an instance member function which is invoked automatically whenever an object is going to be destroyed.  
```c++
class WhenIGone {
    public:
        // Destructor start with ~
        ~WhenIGone();
};
WhenIGone::~WhenIgone() {
    std::cout << "I still will remember you!" << std::endl;
}
```
## ex01

To free a array

```c++
delete[] name_of_array;
```

## ex02  
When a variable is declared as a reference, it becomes an alternative name for an existing variable. A variable can be declared as a reference by putting ‘&’ in the declaration. 

https://www.geeksforgeeks.org/pointers-vs-references-cpp/

## ex03

Member Initializer Lists
https://www.youtube.com/watch?v=1nfuYMXjZsA
https://www.geeksforgeeks.org/constructor-overloading-c/

## ex04

ifstream to read
ofstream to write

## ex05

https://stackoverflow.com/questions/5093090/whats-the-syntax-for-declaring-an-array-of-function-pointers-without-using-a-se

https://stackoverflow.com/questions/1485983/calling-c-member-functions-via-a-function-pointer

https://opensource.com/article/21/2/ccc-method-pointers#:~:text=Pointers%20to%20methods&text=Each%20class%20type%20in%20C%2B%2B,principle%20also%20enables%20dynamic%20dispatch.

## ex06
### The Orthodox Canonical Class Form
A default constructor: used internally to initialize objects and data members when no other value is available.  
A copy constructor: used in the implementation of call-by-value parameters.  
An assignment operator: used to assign one value to another.  
A destructor: Invoked when an object is deleted.  