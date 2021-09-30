/**
 * Project OOP3200-F2021-ICE3
 * @author Katherine Bellman
 * @Student number: 100325825
 * @Course: OOP 32300
 *
 * @Date: September 29th 2021
 * @version 1.0
 */
#pragma once

#ifndef _STUDENT_H
#define _STUDENT_H

#include "Person.h"
#include <string>

class Student: public Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 * @param student_id
 */
Student(std::string first_name, std::string last_name, float age, std::string student_id);

/**
 * @return std::string
 */
std::string getStudentID() const;
    
/**
 * @param value
 */
void setStudentID(const std::string& value);

/**
 * @return void
 */
void Studies() const;


/**
 * @return std::string
 */
std::string ToString() override;

private:
	std::string m_studentID;
};

#endif //_STUDENT_H