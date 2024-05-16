// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

// constants identifiers with values not change during execution
// useful as parameters
// implemented with directives or regular variables
// constants with preprocessor directives
// define directive schedules a find and replace operation
// define is discouraged, the define symbols are known as macros
// macros don't have context and no compiler enforcedness for basic features
// like types and syntax correctedness for macros
// define regular variables as constants using the const qualifier
// declaration specifies a type
// used in regular encapsulation
// used in an expression
// const is not the same in c and c++, c only states that variables does not change if const

// arrays are collections of date, homogeneous, fixed size and contiguous in memory
// whole array is sequential block of memory addresses

#include <iostream>

#define AGE_LENGTH 4 // it is a macro and macro has no scope, dont use semi colon!!

int main(){

    const size_t AGE_ALT = 4; // use a size_t instead of int

    int age[AGE_ALT]; // capacity of array within square brackets

    // 0 to n-1 in c and c++
    age[0] = 16;
    age[1] = 15;
    age[2] = 20;
    age[3] = 44;

    //like scalar variables, array can be declared at declaration, it needs curly braces
    float temperature[] = {31.5, 32.7, 38.9}; // assign a list with a constant length

    std::cout << "age is " << age[0] << std::endl;
    std::cout << "age is " << age[1] << std::endl;
    std::cout << "age is " << age[2] << std::endl;
    std::cout << "age is " << age[3] << std::endl;
    std::cout << std::endl << std::endl;

    std::cout << "temp is " << temperature[0] << std::endl;
    std::cout << "temp is " << temperature[1] << std::endl;
    std::cout << "temp is " << temperature[2] << std::endl;


    // add some constants to the code, number for length, if length is used several times in code changing it 
    // is tiresome
    // use macros and constant variables

    
    std::cout << std::endl << std::endl;
    return (0);
}
