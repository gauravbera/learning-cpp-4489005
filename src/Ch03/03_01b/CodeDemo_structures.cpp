// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

// structures are containers of heterogeneous data members
// group ints, strings and other objects
// useful for simple models that only need data members
// they are c constructs, but they don't follow same syntax rules as c++

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

struct cow {
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){

    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = cow_purpose::dairy; // it is a number that happens to be called dairy in code
    std::cout << my_cow.name << " is a type of " << (int) cow_purpose::dairy << " cow." << std::endl;

    
    std::cout << std::endl << std::endl;
    return (0);
}
