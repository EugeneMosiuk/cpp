#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    int m_id;
    std::string m_lastName;
    std::string m_firstName;
    std::string m_dateOfBirth;
    std::string m_phone;
    std::string m_faculty;
    int m_course;
    std::string m_group;

public:
    Student(int id, const std::string& lastName, const std::string& firstName, const std::string& dateOfBirth,
        const std::string& phone, const std::string& faculty, int course, const std::string& group);

    // Setters
    void setId(int id);
    void setLastName(const std::string& lastName);
    void setFirstName(const std::string& firstName);
    void setDateOfBirth(const std::string& dateOfBirth);
    void setPhone(const std::string& phone);
    void setFaculty(const std::string& faculty);
    void setCourse(int course);
    void setGroup(const std::string& group);

    // Getters
    int getId() const;
    std::string getLastName() const;
    std::string getFirstName() const;
    std::string getDateOfBirth() const;
    std::string getPhone() const;
    std::string getFaculty() const;
    int getCourse() const;
    std::string getGroup() const;

    std::string toString() const;
};

#endif