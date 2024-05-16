// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

// strings not a native type
// in C, strings are arrays of characters ending with a null
// std::string class comes with c++ standard library

#include <iostream>
#include <string> // string class intended way of handling in c++
#include <cstring> // handle character array strings, c at beginning implies c standard library

int main(){
    const size_t LENGTH1 = 25;
    char array_str1[LENGTH1] = "Hey guys !"; // sequence of ascii characters follwed by 0s, all the ending ones are 0s
    char array_str2[] = "Wassup ?";

    std::string std_str1 = "Hoi !!!";
    std::string std_str2 = "Howdie ??";

    //character array, we have strcat family of functions from the c library
    strncat(array_str1, array_str2, LENGTH1); // size of destination string is last parameter
    std::cout << "concat string " << array_str1 << std::endl;

    // operator overloading of the + operator
    std::cout << "c++ overloading " << std_str1 + std_str2 << std::endl;
    // add above two strings, none of the operands gets modified. Both strings originally stay the same
    // why use char arrays ? to make it compatible with existing c code. Otherwise use the string class of c++


    
    std::cout << std::endl << std::endl;
    return (0);
}
