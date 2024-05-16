// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

// type casting is specifying how to interpret piece of data
// useful to convert data types
// convert 32 bit int to 64 bit float
// (uint32_t) - expression syntax

#include <iostream>
#include <cstdint>

int main(){

    // implicit conversions, don't need to explicitly cast the values
    float flt;
    int32_t sgn;
    uint32_t unsgn;

    flt = -7.66; // no trailing f implies double constant
    // possible to assign double constant to float variable
    // -7.66 implicitly conerted to float

    sgn = flt; // assign float or double to int, the value gets truncated
    unsgn = sgn; // not reasonable, number is copied as it is. The 32 bit version of 2's complement of 7. The same binary number
    // but means different values in variables
    // float -7.66
    // int32 -7
    // unsgn 4294967289 - 2's complement of 7

    std::cout << "float " << flt << std::endl;
    std::cout << "int32 " << sgn << std::endl;
    std::cout << "unsgn " << (int32_t) unsgn << std::endl; // explicit typecasting
    
    std::cout << std::endl << std::endl;
    return (0);
}
