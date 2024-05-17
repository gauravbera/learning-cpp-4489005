// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

// don't use arrays as first option
// consider using stl vectors
// can resize them according to needs
// memory for vectors is managed for you. No need to manually free and allocate data
// however, if the objects putting inside vectors allocate memory manually you are responsible for those
// vectors is generic container class
// numerous member functions for manipulating vectors conveniently within the class
// part of the standard template library as part of the generic programming style


#include <iostream>
#include <string>
#include <vector>

int main(){

    std::vector<int> primes; // template needs specified data types. Vectors comes empty by default. 
    std::cout << "the vector has " << primes.size() << " elements " << std::endl;

    // lets add elements, vectors have front end and back end. Only insert elements through the back end
    // vectors will add contiguous memory
    // if we add from the front, excessive reallocations will be required
    primes.push_back(2);
    std::cout << "the vector has " << primes.size() << " elements " << std::endl;

    // the vector class supports square brackets
    std::cout << "the vector value at 0 is " << primes[0] << " . " << std::endl;

    primes[0] = 3; // changing the value is similar to how we work with arrays in general
    std::cout << "the vector value at 0 is " << primes[0] << " . " << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
