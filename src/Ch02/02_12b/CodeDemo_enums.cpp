// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

//enum is convenient way of defining set of named integer constants
// enumerators have been assigned values starting from zero
// inappropriate for c++ code in most cases
// c style enumerators exist in global scope
// causes namespace pollution
// type safety between enums and integers are not there
// scoped enums or strongly typed enums in c++ 11
// encapsulated within a class scope
// type safety is enforced
// prevents implicit conversions between int and enums using enum classes

enum class cow_purpose {dairy, meat, hide, pet}; // a c style enumeration, dairy is 0, pet is 3
// enum grocery_section { canned, dairy, meat, bakery }; // both enums contain the names meat and dairy and encodes these options with different values

// use scoped enums or strongly typed enums
enum class grocery_section { canned, dairy, meat, bakery };

int main(){
    int meat = 8; // compiler won't complain about the duplicated identifier for meat
    // this happens due to multiple scopes in c++. It is local variable to main function
    // by default it says it is the one within local scope. 
    // use the scope resolution operator to resolve this ?
    // names in enums don't have scope and acts like global variables
    // globals must be used sparingly or not at all
    int a;

    a = (int) cow_purpose::meat; // compiler saying a is integer, try typecasting to remove errors

    cow_purpose b;
    b = cow_purpose::meat;

    std::cout << "a = " << a << std::endl; // the value of a is 1, which is the encoding for meat
    std::cout << "b = " << (int)b << std::endl; // not defined for cow purpose type, so needs typecasting

    std::cout << std::endl << std::endl;
    return (0);
}
