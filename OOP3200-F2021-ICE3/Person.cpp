/**
 * Project OOP3200-F2021-ICE3
 * @author Katherine Bellman
 * @version 1.0
 */


#include "Person.h"

#include <iostream>

/**
 * Person implementation
 */


/**
 * @param first_name
 * @param last_name
 * @param age
 */
Person::Person(std::string first_name, std::string last_name, float age)
	:m_age(age),m_firstName(std::move(first_name)),m_lastName(std::move(last_name))
{

}

/**
 * @return float
 */
float Person::getAge()
{
    return m_age;
}

/**
 * @param value
 */
void Person::setAge(const float value)
{
    m_age = value;
}

/**
 * @return string
 */
std::string Person::getFirstName()const
{
    return m_firstName;
}

/**
 * @param value
 */
void Person::setFirstName(const std::string& value)
{
    m_firstName = value;
}

/**
 * @return string
 */
std::string Person::getLastName()const
{
    return m_lastName;
}

/**
 * @param value
 */
void Person::setLastName(const std::string& value)
{
    m_lastName = value;
}

/**
 * @return void
 */
void Person::SaysHello() const
{
    std::cout << getFirstName() << " says Hello!" << std::endl;
}

std::string Person::ToString()
{
    std::string outputString = "";

    outputString += "-----------------------------------------------\n";
    outputString += "First Name: "+ getFirstName() +"\n";
    outputString += "Last Name : "+ getLastName() + "\n";
    outputString += "Age       :" + std::to_string(getAge()) + "\n";
    outputString += "-----------------------------------------------\n\n";
    return outputString;
}

