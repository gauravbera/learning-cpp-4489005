// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>

// #include "xyz.h" Causes the replacement of the #include directive by the entire contents of the source file library.h. This is similar to a Copy-Paste operation of library.h into main.cpp.
// Why is it important to specify the data type when declaring a variable.
// Because the compiler needs to know how to interpret the data, and its width in bytes.
// typecasting : Explicitly specifying the data type of an expression
// logical xor not a build in c++ operator
// when is typecasting useful ?  when an operation needs to be performed on specific data types like float or int
// what does auto do ? when an operation needs to be performed on specific data types like float or int

int main(){
    int nums[5] = {1,23,32,24,337};
    float result; 
    

    // Write your code here
    float array_sum = 0; // declare array_sum as a float data type in order to get the actual value in float format
    for (int i = 0; i < 5; i++ )
    {
        array_sum += nums[i];
    }

    result = (array_sum / 5);
    
    std::cout << "The average is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
