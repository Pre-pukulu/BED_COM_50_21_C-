#include "Person.h"
#include <iostream>
#include <fstream>

// Default constructor
Person::Person()
{
    // Initialize member variables with default values
    weight = 50;
    firstname = "kondwani";
    age = 20;
}

// Parameterized constructor
Person::Person(string name, float newWeight)
{
    // Read the age from a file
    ifstream input("file.txt");
    input >> age;
    
    // Initialize other member variables
    weight = newWeight;
    firstname = name;
}

// Destructor
Person::~Person() {}

// Overloaded + operator
// Adds the weights of two Person objects and returns the sum
float Person::operator+(const Person &otherPerson)
{
    Person person;
    person.weight = this->weight + otherPerson.weight;
    return person.weight;
}

// Overloaded == operator
// Compares two Person objects for equality
bool Person::operator==(const Person &otherPerson)
{
    if ((this->age == otherPerson.age) && (this->firstname == otherPerson.firstname) && (this->weight == otherPerson.weight))
    {
        return true;
    }
    return false;
}

// Overloaded != operator
// Compares two Person objects for inequality
bool Person::operator!=(const Person &otherPerson)
{
    if (this->firstname != otherPerson.firstname || this->age != otherPerson.age || this->weight != otherPerson.weight)
    {
        return true;
    }
    return false;
}

// Overloaded < operator
// Compares the ages of two Person objects
bool Person::operator<(const Person &person)
{
    return this->age < person.age;
}

// Overloaded > operator
// Compares the ages of two Person objects
bool Person::operator>(const Person &person)
{
    return this->age > person.age;
}

// Conversion operator to int
// Converts a Person object to an int (returns age)
Person::operator int()
{
    return age;
}

// Conversion operator to string
// Converts a Person object to a string (returns firstname)
Person::operator string()
{
    return firstname;
}

// Conversion operator to float
// Converts a Person object to a float (returns weight)
Person::operator float()
{
    return weight;
}
