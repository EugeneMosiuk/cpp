#include "student.h"

Student::Student(int id, const std::string& lastName, const std::string& firstName, const std::string& dateOfBirth,
    const std::string& phone, const std::string& faculty, int course, const std::string& group)
    : m_id(id), m_lastName(lastName), m_firstName(firstName), m_dateOfBirth(dateOfBirth),
    m_phone(phone), m_faculty(faculty), m_course(course), m_group(group) {}

// Setters
void Student::setId(int id) {
    m_id = id;
}

void Student::setLastName(const std::string& lastName) {
    m_lastName = lastName;
}

void Student::setFirstName(const std::string& firstName) {
    m_firstName = firstName;
}

void Student::setDateOfBirth(const std::string& dateOfBirth) {
    m_dateOfBirth = dateOfBirth;
}

void Student::setPhone(const std::string& phone) {
    m_phone = phone;
}

void Student::setFaculty(const std::string& faculty) {
    m_faculty = faculty;
}

void Student::setCourse(int course) {
    m_course = course;
}

void Student::setGroup(const std::string& group) {
    m_group = group;
}

// Getters
int Student::getId() const {
    return m_id;
}

std::string Student::getLastName() const {
    return m_lastName;
}

std::string Student::getFirstName() const {
    return m_firstName;
}

std::string Student::getDateOfBirth() const {
    return m_dateOfBirth;
}

std::string Student::getPhone() const {
    return m_phone;
}

std::string Student::getFaculty() const {
    return m_faculty;
}

int Student::getCourse() const {
    return m_course;
}

std::string Student::getGroup() const {
    return m_group;
}

std::string Student::toString() const {
    std::string info = "Student ID: " + std::to_string(m_id) + "\n";
    info += "Name: " + m_lastName + " " + m_firstName + "\n";
    info += "Date of Birth: " + m_dateOfBirth + "\n";
    info += "Phone: " + m_phone + "\n";
    info += "Faculty: " + m_faculty + "\n";
    info += "Course: " + std::to_string(m_course) + "\n";
    info += "Group: " + m_group + "\n";
    return info;
}