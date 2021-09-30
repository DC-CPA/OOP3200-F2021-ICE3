/**
 * Project OOP3200-F2021-ICE3
 * @author Katherine Bellman
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
std::string getEmployeeID() const;

std::string getEmployeeID();
    
/**
 * @param value
 */
void setEmployeeID(std::string value);
    
void Teaches();

std::string ToString();
private:
std::string m_employeeID;
};

#endif //_PROFESSOR_H