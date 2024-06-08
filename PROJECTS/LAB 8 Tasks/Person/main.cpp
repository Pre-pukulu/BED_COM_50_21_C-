#include <iostream> // Required for input and output operations
#include "Person.h" // Include the header file where the Person class is defined
#include <fstream> // Required for file operations

int main()
{
    // Create and open a file in append mode
    std::ofstream file("file.txt", std::ios::app);
    
    // Create two Person objects with name and weight
    Person Jane = Person("Jane", 90);
    Person John = Person("John", 75);

    // Use overloaded operator+ to calculate total weight
    float totalWeight = Jane + John;

    // Write total weight to the file
    file << "Total Weight: " << totalWeight << std::endl;

    // Check if Jane and John are the same person using the overloaded operator==
    if (Jane == John)
    {
        file << "This is the same person" << std::endl;
    }

    // Check if Jane and John are not the same person using the overloaded operator!=
    if (Jane != John)
    {
        file << "This is not the same person" << std::endl;
    }

    // Check if Jane is younger than John using the overloaded operator<
    if (Jane < John)
    {
        file << "Jane is younger than John" << std::endl;
    }

    // Check if Jane is older than John using the overloaded operator>
    if (Jane > John)
    {
        file << "John is younger than Jane" << std::endl;
    }

    // Use overloaded typecast operator to get John's age
    int johnAge = John;
    file << "John's Age: " << johnAge << std::endl;

    // Use overloaded typecast operator to get John's name
    std::string johnName = John;
    file << "John's firstname is: " << johnName << std::endl;

    // Use overloaded typecast operator to get John's weight
    float johnWeight = John;
    file << "John's weight is: " << johnWeight;
    
    return 0; // Return 0 to indicate successful execution
}
