// Learning C++ 
// Exercise 03_05
// Using Several Source Files, by Eduardo Corpeño 

// compiler tool chain 
//converts source code into an executable file
// c++ source file fed to compiler
// compiler translates c++ into assembly language
// assembly code file fed to the assembler
// the assembler produces an object file
// object file almost executable. only contains pieces of code
// assembly code written by us ? when we need to write a peripheral driver
// assembly file to assembler gives object file
// what about if we have only object files ?
// libraries are distributed as object files
// object files are co-related pieces of project
// linker stitches object files together to create executable binary file
// the executable binary file is what gets executed
// specifying all files to compile is easier with IDE
// if we need to work with compiler in command line, it can get complicated
// all information specified in a text file called as a makefile
// c++ files are header and impl file pairs
// headers have .h --> contains definitions and function declaration, macros
// impl has .cpp extension --> impl of all functions in the header file
// impl must include their own corresponding header files
// external code should only include header files
// all impl files must be compiled

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow(std::string name_i, int age_i, cow_purpose purpose_i){
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    }
    std::string get_name() const{
        return name;
    }
    int get_age() const{
        return age;
    }
    cow_purpose get_purpose() const{
        return purpose;
    }
    void set_age(int new_age){
        age = new_age;
    }
private:
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow("Hildy", 7, cow_purpose::pet);
    std::cout << my_cow.get_name() << " is a type-" << (int) my_cow.get_purpose() << " cow." << std::endl;
    std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
