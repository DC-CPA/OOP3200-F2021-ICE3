/**
 * Project OOP3200-F2021-ICE3
 * @author Katherine Bellman
 * @Student number: 100325825
 * @Course: OOP 3200
 *
 * @Date: September 29th 2021
 * @version 1.0
 */


#include "Student.h"

#include <iostream>
#include <ostream>

/**
 * Student implementation
 */


/**
 * @param first_name
 * @param last_name
 * @param age
 * @param student_id
 */
Student::Student(std::string first_name, std::string last_name, float age, std::string student_id)
: Person(first_name, std::move(last_name), age), m_studentID(std::move(student_id))
{
}

/**
 * @return std::string
 */
std::string Student::getStudentID() const
{
    return m_studentID;
}

/**
 * @param value
 */
void Student::setStudentID(const std::string& value)
{
    m_studentID = value;
}

/**
 * @return void
 */
void Student::Studies()const 
{
    std::cout << getFirstName() << " is studying!\n" << std::endl;
}

/**
 * @return std::string
 */
std::string Student::ToString()
{
    std::string output_string;

    output_string += Person::ToString();
    output_string += "-----------------------------------------------\n";
    output_string += "Student ID: " + getStudentID() + "\n";
    output_string += "-----------------------------------------------\n";
    return output_string;
}