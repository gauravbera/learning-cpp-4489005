// Learning C++ 
// Exercise 03_07
// Using Objects with Pointers, by Eduardo Corpeño 
// pointing to existing variables not useful
// dynamic memory management is essence
// variable statically allocates memory for it. compiler knows 
// the space and memory that will be needed
// but there is memory created during runtime
// in c, dynamic memory allocation done using malloc
// programmer responsible for the freeing up of memory

#include <iostream>
#include <string>
#include "cow.h"

int main(){
    cow *my_cow;

    //instead of cow my_cow(parameters);

    my_cow = new cow("Gertie", 3, cow_purpose::hide);
    std::cout << my_cow->get_name() << " is a type-" << (int) my_cow->get_purpose() << " cow." << std::endl;
    // no longer using my_cow.get_purpose(), dot is member of object operator. We can do (*my_cow).get_name(). 
    // we need to use -> between pointer at left and the member at the right. Much more cleaner. No need for brackets.
    std::cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << std::endl;
    
    delete my_cow; // calls a special funtion in your class called as the destructor. Useful for freeing dynamically allocated memory.
    
    std::cout << std::endl << std::endl;
    return (0);
}
// references are special category of datatypes not mentioned
// they are aliases to existing variables
// alternative name to the variable
// int& my_ref = my_int;
// references use same syntax as referenced variable, no need to deference like pointers
// references are not pointers and not objects either
// refrences don't have an address
// no arrays of references, to index element in an array we need an address
// no pointers to references
// no references to references
// can assign reference to reference, but will be aliases to original variables
// pointers have optional initialisation
// references must be initialised at declaration
// pointers can point to different objects
// references cannot reference a second object, stuck with declaration object
// pointer can be declared with the void (point to any type) and assigned null value
// references have a fixed type and object
// pointers can have multiple levels of indirection
// references have only one level of indirection
// a pointer must be dereferenced to access the data
// no need for dereferencing a reference

// when to use references ?
// when we write function, instead of passing by value we can pass by reference (can also modify variable sent as argument within fn)
// avoid copying large objects which contain large amounts of data. Program does not make unnecessary copy of data
// avoid copying large objects in for loops



