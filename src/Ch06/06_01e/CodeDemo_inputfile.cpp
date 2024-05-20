// Learning C++ 
// Exercise 06_01
// Opening a text file for reading, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <fstream> // the fstream header provides number of classes to handle files

int main(){
    std::ifstream inFile;

    //store values from file in the variables below
    std::string str;
    int number;
    char letter;

    inFile.open("people.txt");
    if (inFile.fail()) // did the open fail ??
        std::cout << std::endl << "File not found!" << std::endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str); // getline in str header. One line of text in first argument and replaces second arg with the text received. Just keep only this and it will print full file
            std::cout << str << ", "; // names as string, print out what was got on the screen
            getline(inFile, str);
            number = stoi(str); // ages as strings and converted to integer
            std::cout << number << ", ";
            getline(inFile, str);
            letter = str[0]; // extract the initials as string and convert to single characters
            std::cout << letter << std::endl;
        }
        inFile.close(); // after end of file reached, close the file
    }
    
    std::cout << std::endl << std::endl;
    return (0);
}
