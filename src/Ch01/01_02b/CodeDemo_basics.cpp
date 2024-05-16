// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

// Model is representation of reality
// Model anything a car or a cow
// What to include in your models ?
// Figure out which features are enough without oversimplifying
// For sales: price, make, model, seats
// For rideshare: Passenger, luggage
// encapsulation: keep data and operations within models
// models must only include information about themselves ONLY
// operations concise, model of car should not have gas price

// class is construct for model, contains data and functions
// instance of a class is known as an object

// members of class can be private or public
// public members accessible by any part of code outside the class
// private members accessible within the class
// protected members accessed in inherited classes

// subclass may inherit members from superclass
// animal.legs inherited by dog.legs
// polymorphism - superclass defines functions, but the children can have its own implementations

#include <iostream> // preprocessor directive, iostream library has objects and functions to print text to screen and receive from keyboard

int main() {
    std::string str;
    std::cout << "Hello world !" << std::endl;
    std::cout << "Enter your name:" << std::endl;
    std::cin >> str; // operator is >> here
    std::cout << "Your name is:" << std::endl;
    std::cout << str;
    std::cout << std::endl << std::endl;
    return(0); // 0 implies no error in the program
} // std is an object from iostream file, this membership by scope resolution operator, cout also an object which represents output window. Right of << , send what we want to send to cout object

// [1] + Done                       "/usr/bin/gdb" --interpreter=mi --tty=${DbgTerm} 0<"/tmp/Microsoft-MIEngine-In-yebem3sq.qjg" 1>"/tmp/Microsoft-MIEngine-Out-lz3qruy0.1on" says execution done

// using namespace std eliminates need to specify where variables or functions in the standard library
// are declared like cout, vector, endl.. resulting in shorter code
