// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

// Integers can be signed or unsigned
// int type with implementation dependency can be 32 or 16 bits
// character can be 8 bits, can be used as int
// stdint.h contains portable data types uint32_t, int8_t (signed)
// floatin point numbers represent real numbers
// ieee754 binary floating point standard followed
// float, double and long double available (double has more precision, but longer computation time)
// bool can be true or false
// anything other than 0 is true and 0 means false

// Strings are not natively supported by the languages
// arrays of chars terminated by 0
// however, strings supported in c++ standard library as class
// <string> header provides the string class and lots of manipulation functions

// Pointers is special data type of memory addresses
// acts as references to existing variables
// same pointer can be used to access many different variables sequentially
// learn about the stack, heap memory !! important concepts
// learn about computational complexity !! just in case they want to check something

// variables are temporary data storage units and must be declared prior to being used
// declaration must specify a type and name
// declaration may contain initialisations

// assign values to variables
// int: 123, -5,.....but special assignments 023 (octal), 0x3A (hex), 0b1100 (binary), 23U (unsigned)
// float: 23.0f, 0.0f 
// double (default float type): 25.4, -22.5
// char: 'a', 'X' (int maybe entered, as long as they fit. ASCII character interpretation is entered in single quotes.
// char: '\0' , '\n' (null and newline special characters)

#include <iostream>

int a, b = 5; // a and b are global variables accessible to all parts of the code
// memory for global variables statically allocated by compiler in data segment of memory
// after program ends the memory is free

// variables can be declared in local scope such as within functions (and within scopes inside of it)
// after exiting scope variables deleted and memory freed
// this is managed automatically by the compiler (automatic variables), allocated in stack segment
// of memory, which is temporary

/* multi line comments
*/

int main(){
    bool my_flag; // start with non number character and contain letters, numbers and some special characters
    // also variable names cannot be the same as any keyword in the language like int 
    // avoid global variables in general

    a = 7;
    my_flag = false;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;

    my_flag = true;
    std::cout << "a + b is = " << a + b << std::endl;
    std::cout << "b - a is= " << b - a << std::endl;
    std::cout << "flag = " << my_flag << std::endl;

    unsigned int positive; 
    positive = b - a;
    std::cout << "b - a (unsigned) = " << positive << std::endl;
    // b - a (unsigned) = 4294967294
    // 2 ^ 32 - 2 (the 2's complement representation of minus 2 in binary)
    // binary number is same but interpretation is different
    // careful when using signed or unsigned integers

    
    std::cout << std::endl << std::endl;
    return (0);
}


