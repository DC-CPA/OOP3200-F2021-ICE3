// main.cpp
//
//  @Author: Katherine Bellman
//  @Student number: 100325825
//  @Course: OOP 3200
//
//  @Date: September 29th 2021
//  @Project description: ICE 3 - Inheritance
//

#include <iostream>
#include <vector>

#include "Person.h"
#include "Professor.h"
#include "Student.h"

int main()
{
    /* Person became abstract (due to virtual), can not instantiate object of person class*/
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


    //Dynamic memory allocation with objects

    std::vector<Person*> people; //Vector of person class object pointer, named "Person"

    people.push_back(new Professor("Alvaro", "Quevedo", 32.0f, "AYE12345678")); //new dynamically allocates memory

    people[0]->SaysHello(); //NOTE: person object index 0 data passed to function

    std::cout << people[0]->ToString() << std::endl;

    people.push_back(new Student("Nick", "Smythe", 20.0f, "NS123456789"));
    people[1]->SaysHello();
    std::cout << people[1]->ToString() << std::endl;
}

