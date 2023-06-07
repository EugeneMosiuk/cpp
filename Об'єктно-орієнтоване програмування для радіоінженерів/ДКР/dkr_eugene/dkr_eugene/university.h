#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <vector>
#include "student.h"

class University {
private:
    std::vector<Student> m_students;

public:
    void addStudent(const Student& student);
    std::vector<Student> getStudentsByFaculty(const std::string& faculty) const;
    std::vector<Student> getStudentsByFacultyAndCourse(const std::string& faculty, int course) const;
    std::vector<Student> getStudentsBornAfterYear(int year) const;
    std::vector<Student> getStudentsByGroup(const std::string& group) const;

    void writeStudentsToFile(const std::string& filename, char key) const;
};

#endif