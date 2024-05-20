// Learning C++ 
// Exercise 04_04
// For Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers = {12, 25, 31, 47, 58};
    float average;

    average = 0.0f;
    for (int i = 0; i < numbers.size(); i++)
        average += numbers[i];
    average /= numbers.size();
    std::cout << "Average: " << average << std::endl;

    average = 0.0f;
    for (auto x : numbers) // another form of for loop in c++11 standard. Traverse range with iterator. Specify variable to traverse the container. Then a colon and the name of the vector. Copies value of each element into the auto variable.
        average += x;
    average /= numbers.size();
    std::cout << "Average: " << average << std::endl;
       
    std::cout << std::endl << std::endl;
    return (0);
}
