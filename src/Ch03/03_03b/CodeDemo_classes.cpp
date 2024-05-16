// Learning C++ 
// Exercise 03_03
// Using Classes, by Eduardo Corpeño 

// classes are basic elements of oop
// implements models
// contains data and functions

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow(std::string name_i, int age_i, cow_purpose purpose_i){ // public member function called constructor is used. Has no return type
        // overloading function: using a different set of parameters, we overload the default constructor
        name = name_i; // initialisation code for the new objects are here
        age = age_i;
        purpose = purpose_i;
    }
    // use setters and getters. setters write into data members and getters return a value
    std::string get_name() const{ // return-type name-of-function paramaters. Getters shouldn't modify anything. Use const qualifier
        // called const correctedness
        return name;
    }
    int get_age() const{
        return age;
    }
    cow_purpose get_purpose() const{
        return purpose;
    }
    void set_age(int new_age) { // example of a setter method
        age = new_age;
    }
private: // by default class members are private. It likes hiding members from outside world
    std::string name; // restrict access to this. functions perform operations to modify the data
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow( "Betsy", 5, cow_purpose::dairy);
    // my_cow.age = 5;
    // my_cow.name = "Betsy";
    // my_cow.purpose = cow_purpose::dairy;
    std::cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
