// Learning C++ 
// Exercise 05_02
// Function Parameters, by Eduardo Corpeño 

// typically arguments passed by value
// copies of variables created
// can also pass arguments as pointers
// power to access variable inside a function
// can also pass arguments as references


#include <iostream>

// Takes arguments by value
int square(int x){
    x = x * x;
    return x; // cease to exist when fn returns
}

// Takes arguments by address
void swap(int *x, int *y){ // two pointer to integers as parameters
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Takes arguments by reference
void swap(int& x, int& y){ // no need for dereferencing, aliases!! so treated as variables themselves. access to variables outside scope of the fn
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 9, b;
    b = square(a);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(&a, &b); // pass as addresses
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
