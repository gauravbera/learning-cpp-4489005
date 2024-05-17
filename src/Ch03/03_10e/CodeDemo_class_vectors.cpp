// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){
    std::vector<cow> cattle; // vectors of objects

    // add four cows using push_back()
    cattle.push_back(cow("Betty", 6, cow_purpose::meat));
    cattle.push_back(cow("Libby", 4, cow_purpose::hide));
    cattle.push_back(cow("Trudy", 5, cow_purpose::pet));
    cattle.push_back(cow("Betsy", 2, cow_purpose::dairy));

    std::cout << "The first cow is " << cattle.begin()->get_name() << std::endl; // begin function is an iterator, similar to pointer, use ->
    std::cout << "At index 1 we have " << cattle[1].get_name() << std::endl; // show the second cow's name by index. use member of object or dot operator. It is not an iterator but an object
    std::cout << "Next to last is " << prev(cattle.end(), 2)->get_name() << std::endl; // first argument is iterator, second is number of positions to go back
    std::cout << "The last cow is " << (cattle.end() - 1)->get_name() << std::endl; // iterator to element after last element given by end(), subtract one to the function's return value
    
    std::cout << std::endl << std::endl;
    return (0);
}
