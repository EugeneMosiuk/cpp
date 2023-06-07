#include "student.h"
#include "university.h"
#include "logger.h"

#include <iostream>

int main() {
    // Creating students
    Student student1(1, "Smith", "John", "1995-07-15", "123456789", "Faculty of Science", 2, "Group A");
    Student student2(2, "Johnson", "Emily", "1997-02-28", "987654321", "Faculty of Arts", 1, "Group B");
    Student student3(3, "Brown", "Michael", "1996-10-10", "456789123", "Faculty of Engineering", 3, "Group C");
    Student student4(4, "Davis", "Emma", "1998-05-03", "321654987", "Faculty of Science", 2, "Group A");

    // Creating university
    University university;
    university.addStudent(student1);
    university.addStudent(student2);
    university.addStudent(student3);
    university.addStudent(student4);

    // Logging
    Logger logger;
    logger.log("Program started.");

    // Getting students by faculty
    std::string faculty = "Faculty of Science";
    std::vector<Student> scienceStudents = university.getStudentsByFaculty(faculty);
    std::cout << "Students in the " << faculty << ":" << std::endl;
    for (const Student& student : scienceStudents) {
        std::cout << student.toString() << std::endl;
    }

    // Getting students by faculty and course
    std::string faculty2 = "Faculty of Science";
    int course = 2;
    std::vector<Student> scienceStudentsCourse2 = university.getStudentsByFacultyAndCourse(faculty2, course);
    std::cout << "Students in the " << faculty2 << ", Course " << course << ":" << std::endl;
    for (const Student& student : scienceStudentsCourse2) {
        std::cout << student.toString() << std::endl;
    }

    // Getting students born after a year
    int year = 1996;
    std::vector<Student> studentsBornAfterYear = university.getStudentsBornAfterYear(year);
    std::cout << "Students born after " << year << ":" << std::endl;
    for (const Student& student : studentsBornAfterYear) {
        std::cout << student.toString() << std::endl;
    }

    // Getting students by group
    std::string group = "Group C";
    std::vector<Student> groupCStudents = university.getStudentsByGroup(group);
    std::cout << "Students in Group " << group << ":" << std::endl;
    for (const Student& student : groupCStudents) {
        std::cout << student.toString() << std::endl;
    }

    // Writing students to file
    std::string filename = "students.txt";
    char encryptionKey = 'X';
    university.writeStudentsToFile(filename, encryptionKey);

    logger.log("Program ended.");

    return 0;
}