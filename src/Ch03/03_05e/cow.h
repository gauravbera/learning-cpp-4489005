#pragma once // directive pragma once tells to include this header file once. Prevents errors where compiler finds definitions seen before

#ifndef COW_H // macro. If cow_h macro not defined, include the following code
#define COW_H // define the macro, define cow_h. It is the include guard
#include <string> // include the string library

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow(std::string name_i, int age_i, cow_purpose purpose_i);
    std::string get_name() const; // there should be no implementations in headers. Just leave the declarations here
    int get_age() const;
    cow_purpose get_purpose() const;
    void set_age(int new_age);
private:
    std::string name;
    int age;
    cow_purpose purpose;
};

#endif // COW_H
