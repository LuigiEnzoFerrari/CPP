# CPP00

## ex00
We can get the contant inside a name space by write 
```c++
std::<name of the contant>
```

## ex01

To create a class  
```c++
class NameOfTheClass {
    // content
}
``` 
You can put everything inside a class, variables, functions ...  
Everything below and indented to the **public:** key is accessible, everything bellow and indented to the **private:** isn't.  
to acess that element 
```c++
class   Fruits {
    private:
        int chocolate;
    public:
        int apple;
};
```

```c++
int main(void) {
    Fruits().apple = 4;
}

int main(void) {
    Fruits my;

    my.apple = 2;
}

int main(void) {
    Fruits ours;
    // that should be a erro, you can access a private variable.
    ours.chocolate = 5;
}
```

You can have the prototype of the function declare inside the class and the whole code in another file.

```c++
// Mario.hpp
#include <iostream>
class Mario {
    public:
        void say_hey(void);
}
```
```c++
// Mario.cpp
#include "Mario.hpp"
void    say_hey(void) {
    std::cout << "hey!" << std::endl;
}
```

When get a lot of input from the std in it's necessary clear the buffer to the previous input buffer not everylap the next.

https://www.geeksforgeeks.org/clearing-the-input-buffer-in-cc/
