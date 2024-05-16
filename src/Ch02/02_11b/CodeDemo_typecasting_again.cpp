// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){

    int fah = 100; // length of int is impl dependent
    int cel;

    // cel = (5/9) * (fah - 32); constant expression 5/9 is taken care of by the compiler. Doesn't make it to the code which will be executed by processor, integer division quotient is 0
     cel = ((float)5/9.0) * (fah - 32); //explicitly cast the 5 to float. Rewrite the 9 as 9.0 which is double.

    std::cout << "Fah " << fah << std::endl;
    std::cout << "cel " << cel << std::endl;


    float weight = 10.99; // can declare variables in the code as exposed to declaring at the beginning of the scope
    std::cout << "Float " << weight << std::endl;
    std::cout << "Integer part " << (int) weight << std::endl;
    std::cout << "Fractional part " << (int)((weight - (int) weight) * 10000) << std::endl; // remove int part and shift decimal digits left to get integer of as many decimal places as we want to show
                                        //cast to int as expression is still a float, floating point numbers are approximations with a small error. It gives 9899 as result. Better approximations with doubles
    std::cout << "Fractional part " << (double)((weight - (int) weight) * 10000) << std::endl; // gives 9900
    std::cout << std::endl << std::endl;
    return (0);
}
