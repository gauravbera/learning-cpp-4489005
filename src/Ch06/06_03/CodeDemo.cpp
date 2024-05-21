// Learning C++ 
// Challenge 06_03
// Upgrade to work with files, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <fstream>
#include "records.h"

void initialize(StudentRecords&);

int main(){
    int id;
    StudentRecords SR;
    
    initialize(SR);

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    SR.report_card(id);
    
    std::cout << std::endl << std::endl;
    return (0);
}

void initialize(StudentRecords& srec){

    std::ifstream inFile;
    std::string str;
    int studentid;
    std::string studentname;

    //std::ostream can take cout or a file stream

    inFile.open("students.txt");
    if (inFile.fail()) // did the open fail ??
        std::cout << std::endl << "File not found!" << std::endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str); // getline in str header. One line of text in first argument and replaces second arg with the text received. Just keep only this and it will print full file
            std::cout << str << ", "; // names as string, print out what was got on the screen
            studentid = stoi(str); // ages as strings and converted to integer
            std::cout << studentid << ", ";
            getline(inFile, str);
            studentname = str; // extract the initials as string and convert to single characters
            std::cout << studentname << std::endl;
            srec.add_student(studentid, studentname);
        }
        inFile.close(); // after end of file reached, close the file
    }

    int courseid;
    std::string coursename;
    int coursecredits;

    inFile.open("courses.txt");
    if (inFile.fail()) // did the open fail ??
        std::cout << std::endl << "File not found!" << std::endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str);
            std::cout << str << ", "; 
            courseid = stoi(str); 
            std::cout << courseid << ", ";
            getline(inFile, str);
            coursename = str; 
            std::cout << coursename << ", ";
            getline(inFile, str);
            std::cout << str << ", "; 
            coursecredits = stoi(str); 
            std::cout << coursecredits << std::endl;
            srec.add_course(courseid, coursename, coursecredits);
        }
        inFile.close(); // after end of file reached, close the file
    }

    char grade;
    inFile.open("grades.txt");
    if (inFile.fail()) // did the open fail ??
        std::cout << std::endl << "File not found!" << std::endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str);
            std::cout << str << ", "; 
            studentid = stoi(str); 
            std::cout << studentid << ", ";
            getline(inFile, str);
            std::cout << str << ", "; 
            courseid = stoi(str); 
            std::cout << courseid << ", ";
            getline(inFile, str);
            std::cout << str << ", "; 
            grade = str[0]; 
            std::cout << grade << std::endl;
            srec.add_grade(studentid, courseid, grade);
        }
        inFile.close(); // after end of file reached, close the file
    }


    /*
    std::ifstream inFile;
    inFile.open("people.txt");
    if (inFile.fail()) // did the open fail ??
        std::cout << std::endl << "File not found!" << std::endl;
    else{
        while (!inFile.eof()){
        }
        inFile.close(); // after end of file reached, close the file
    }
    */
    /*

    srec.add_student(1, "George P. Burdell");
    srec.add_student(2, "Nancy Rhodes");

    srec.add_course(1, "Algebra", 5);
    srec.add_course(2, "Physics", 4);
    srec.add_course(3, "English", 3);
    srec.add_course(4, "Economics", 4);

    srec.add_grade(1, 1, 'B');
    srec.add_grade(1, 2, 'A');
    srec.add_grade(1, 3, 'C');
    srec.add_grade(2, 1, 'A'); 
    srec.add_grade(2, 2, 'A');
    srec.add_grade(2, 4, 'B');
    */
    
}
