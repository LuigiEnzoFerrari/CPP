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
