// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

// c++ 11
// type inference, convenient to create variable with type that suits 
// the value to assign to it
// catch is, must initialize the value at declaration

// expression is symbolic representation of a calculation like algebra
// may contain variables, constants and operators
// every expression must produce a value

// assignment assigns value to variable
// must have left hand side and right hand side expression
// left hand side holds value
// the expression data types must match

// arithmetic + - * /(also for floating point divisions) %
// bitwise binary operations & | ~(not) ^(xor)
// logical && || !
// relational == != > < >= <= 
// pointer * (dereferences pointer to right, access to variable pointer is pointing to) , & (address of the variable at its right), -> (gives access to members of structure or classes from a pointer)


#include <iostream>
#include <typeinfo>

int main(){
    auto a = 8;
    auto b = 12345678901;
    auto c = 3.14f;
    auto d = 3.14;
    auto e = true;
    auto f = 'd';
    auto g = "c++ rocks!"; // strings in double quotes
    
    std::cout << "Type is :" << typeid(a).name() << std::endl;
    std::cout << "Type is :" << typeid(b).name() << std::endl;
    std::cout << "Type is :" << typeid(c).name() << std::endl;
    std::cout << "Type is :" << typeid(d).name() << std::endl;
    std::cout << "Type is :" << typeid(e).name() << std::endl;
    std::cout << "Type is :" << typeid(f).name() << std::endl;
    std::cout << "Type is :" << typeid(g).name() << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}

/*
Type is :i - int
Type is :l - long
Type is :f - float
Type is :d - double
Type is :b - boolean
Type is :c - char
Type is :PKc - pointer to constant char, a fancy name for a string
type id operator is implementation dependent
may behave differently if using compiler or IDE other than visual studio code 
*/
