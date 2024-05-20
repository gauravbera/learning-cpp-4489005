// Learning C++ 
// Exercise 04_03
// While Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers = {12, 25, 31, 47, 58}; //vectors of integers

    auto ptr = numbers.begin(); // iterator will be used to traverse the vector, can be std::vector<int>::iterator ptr = numbers.begin() ... Instead use the auto type here
    
    while (ptr != numbers.end()){ // element past the last element in the vector
        std::cout << *ptr << " "; // print the element pts is currently pointing to
        ptr = next(ptr, 1); // move the iterator next by one position. 
    }
    std::cout << std::endl;

    int i = 0;
    do{
        std::cout << numbers[i] << " ";
        i++;
    } while (i < numbers.size()); // use the size member function
    std::cout << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
