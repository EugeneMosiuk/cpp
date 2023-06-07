#include "university.h"
#include <fstream>

void University::addStudent(const Student& student) {
    m_students.push_back(student);
}

std::vector<Student> University::getStudentsByFaculty(const std::string& faculty) const {
    std::vector<Student> result;
    for (const Student& student : m_students) {
        if (student.getFaculty() == faculty) {
            result.push_back(student);
        }
    }
    return result;
}

std::vector<Student> University::getStudentsByFacultyAndCourse(const std::string& faculty, int course) const {
    std::vector<Student> result;
    for (const Student& student : m_students) {
        if (student.getFaculty() == faculty && student.getCourse() == course) {
            result.push_back(student);
        }
    }
    return result;
}

std::vector<Student> University::getStudentsBornAfterYear(int year) const {
    std::vector<Student> result;
    for (const Student& student : m_students) {
        std::string dateOfBirth = student.getDateOfBirth();
        std::string yearStr = dateOfBirth.substr(dateOfBirth.length() - 4, 4);
        int birthYear = std::stoi(yearStr);
        if (birthYear > year) {
            result.push_back(student);
        }
    }
    return result;
}

std::vector<Student> University::getStudentsByGroup(const std::string& group) const {
    std::vector<Student> result;
    for (const Student& student : m_students) {
        if (student.getGroup() == group) {
            result.push_back(student);
        }
    }
    return result;
}

void University::writeStudentsToFile(const std::string& filename, char key) const {
    std::ofstream outputFile(filename, std::ios::out | std::ios::binary);
    if (outputFile.is_open()) {
        for (const Student& student : m_students) {
            std::string encryptedData = student.toString();

            // XOR encryption
            for (char& c : encryptedData) {
                c ^= key;
            }

            outputFile.write(encryptedData.c_str(), encryptedData.size());
            outputFile.write("\n", 1);
        }
        outputFile.close();
    }
}