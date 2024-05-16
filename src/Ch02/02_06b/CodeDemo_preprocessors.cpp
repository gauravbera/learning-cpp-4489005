// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 
// Compiled language, code goes through software tools
// which extracts sematic elements
// preprocessor is part of software and part of compiler toolchain
// directives tell preprocessor what to add or remove in code
// compiler receives modified or preprocessed version of the code
// #include, #define and #ifdef are useful for including libraries, defining constants, etc.


#include <iostream> // all starts with hash character, used to insert reference file into code
// iostream has no path or extension and enclosed in angled brackets.
// looks for file in predefined location (with angled brackets)
// iostream is part of standard library, don't require a .h or .hpp
#include <string>
#include <cstdint> // This is from the C library, it has C code in it or use stdint.h


#define CAPACITY 5000 // defines symbols whatever is on the right. 
// everytime preprocessor finds capacity, replaced by 5000.
// directives DO NOT end with a semi colon

#define DEBUG // doesn't need to extend to any value if used for an ifdef directive


int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;

#ifdef DEBUG // helps in debugging, keep this in mind
    std::cout << "Before addition"  << std::endl;
#endif

    large += small;
    std::cout << "Large int is " << large << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
