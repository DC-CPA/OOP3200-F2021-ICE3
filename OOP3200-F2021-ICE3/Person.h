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

#ifndef _PERSON_H
#define _PERSON_H

#include <string>

class Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 */
Person(std::string first_name, std::string last_name, float age);
    
float getAge();
    
/**
 * @param value
 */
void setAge(float value);

/**
 * @return string
 */
std::string getFirstName() const;

    
/**
 * @param value
 */
void setFirstName(const std::string& value);

/**
 * @param value
 */
std::string getLastName() const;

/**
 * @return value
 */
void setLastName(const std::string& value);

/**
 * @return void
 */
void SaysHello() const;

/**
 * @return string
 */
virtual std::string ToString();

private: 
    float m_age;
	std::string m_firstName;
	std::string m_lastName;
};

#endif //_PERSON_H