// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int id;
    
    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: (non zero value)" << std::flush;
    std::cin >> id; // can be  1 or 2 here

    // Calculate the GPA for the selected student.
    // Write your code here
    // a - 4.0, b - 3.0, c -2.0, d - 1.0, f -0.0

    float points = 0.0f;
    int credits = 0.0f;

    //for (size_t i = 0; i < grades.size(); i++)
    for(Grade &graderef : grades) // reference because by value consumes a lot of memory to copy objects
    {
        if(graderef.get_student_id() == id) {
            char course_grade = graderef.get_grade(); // get the student grade
            int course_id = graderef.get_course_id();
            //int course_credits = courses[course_id].get_credits(); // get the course credits, wrong !
            //check manually instead
            int course_credits = 0;
            auto ptr = courses.begin();
            while (ptr != courses.end()){ // element past the last element in the vector
                if(ptr->get_id() == course_id) {
                    course_credits = ptr->get_credits();
                     break; // that's it, stop the while loop
                }
                ptr = next(ptr, 1); // move the iterator next by one position. next() is a function in <vector>
            }
            switch (course_grade)
            {
                case 'A':
                    points += (course_credits * 4.0);
                    break;
                case 'B':
                    points += (course_credits * 3.0);
                    break;
                case 'C':
                    points += (course_credits * 2.0);
                    break;
                case 'D':
                    points += (course_credits * 1.0);
                    break;
                default: // fail is default
                    points += (course_credits * 0.0);
                    break;
            }
            credits += course_credits;
        }
    } // end of for loop, we have all the total points and the total credits
    
    GPA = points/credits;

    std::string student_str;
    //student_str = students[0].get_name(); // Change this to the selected student's name
    auto ptr = students.begin();
    while (ptr != students.end()){ // element past the last element in the vector
        if(ptr->get_id() == id) {
            student_str = ptr->get_name();
            break; // that's it, stop the while loop
        }
        ptr = next(ptr, 1); // move the iterator next by one position. next() is a function in <vector>
    }


    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}

/* Enter a student ID: (non zero value)1
The GPA for George P. Burdell is 3.08333

Enter a student ID: (non zero value)2
The GPA for Nancy Rhodes is 3.69231
*/