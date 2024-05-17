// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

// pointers are special variables holding memory addresses
// 32 bit architecture, pointers are 32 bits wide
// each integer takes 4 bytes
// 104 address ----37 value ------- int a = 37;
// int *ptr; --- how to declare pointers. pointers are variables themselves.. allocated at some memory location
// 120 is memory address of pointer
// ptr = &a; the pointer to the address of a
// content of address 120, will be 104 (which is address of a)

#include <iostream>
#include <string>

int main(){
    int a = 37;
    int *ptr;

    ptr = &a;

    std::cout << "           The content of a is " << a << std::endl;
    std::cout << "    ptr is pointing to address " << ptr << std::endl; // the content of variable ptr is an address
    std::cout << "           The address of a is " << &a << std::endl;  // use address of operator to show the address of a
    std::cout << "Where ptr is pointing, we have " << *ptr << std::endl; // indirection operator, content of memory address ptr is pointing to
    std::cout << "         The address of ptr is " << &ptr << std::endl; // what is the address of ptr as a variable
    
    std::cout << std::endl << std::endl;
    return (0);
}
/*
The content of a is 37
    ptr is pointing to address 0x7fffffffde1c
           The address of a is 0x7fffffffde1c
Where ptr is pointing, we have 37
         The address of ptr is 0x7fffffffde10
*/