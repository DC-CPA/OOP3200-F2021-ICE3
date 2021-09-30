// main.cpp
//
//  @Author: Katherine Bellman
//  @Student number: 100325825
//  @Course: OOP 32300
//
//  @Date: September 29th 2021
//  @Project description: ICE 3 - Inheritance
//

#include <iostream>

#include "Person.h"
#include "Professor.h"
#include "Student.h"

int main()
{
    Person person = Person("Bob", "Smith", 35.6f);
    person.SaysHello();

    std::cout << person.ToString() << std::endl;

    Student student = Student("Mike", "Jones", 22.0f, "MJ1234567890");
    student.SaysHello();
    student.Studies();

    std::cout << student.ToString() << std::endl;

    Professor professor = Professor("Kyle", "Chapman", 36.0f, "AJD123456789");
    professor.SaysHello();
    professor.Teaches();

    std::cout << professor.ToString() << std::endl;
}

