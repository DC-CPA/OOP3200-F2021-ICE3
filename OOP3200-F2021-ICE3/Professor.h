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


#ifndef _PROFESSOR_H
#define _PROFESSOR_H

#include "Person.h"
#include <string>

class Professor: public Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 * @param employee_id
 */
Professor(std::string first_name, std::string last_name, float age, std::string employee_id);

/**
* @return string
*/
std::string getEmployeeID() const;

/**
* @param value
*/
void setEmployeeID(const std::string& value);

/**
 * @return void
 */
void Teaches();

/**
 * @return string
 */
std::string ToString();
private:
std::string m_employeeID;
};

#endif //_PROFESSOR_H