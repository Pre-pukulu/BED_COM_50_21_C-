#include <iostream>
#include <limits>

using namespace std;

int validateInput(); // Function declaration

int main() {
    // Getting input from the user
    cout << "Enter the number of rows (not more than 3): ";
    int rows = validateInput();
    cout << "Enter the number of columns (not more than 3): ";
    int cols = validateInput();

    // Dynamic allocation of a two-dimensional array
    double** dynamicArray = new double*[rows];
    for (int i = 0; i < rows; i++) {
        dynamicArray[i] = new double[cols];
    }

    // Assigning values to the array elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> dynamicArray[i][j];
        }
    }

    // Printing the array elements
    cout << "Array elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << dynamicArray[i][j] << " ";
        }
        cout << '\n';
    }

    // Freeing the dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] dynamicArray[i];
    }
    delete[] dynamicArray;

    return 0;
}

// This function checks if the input entered is the required one or not
// If it is not required, it continuously asks the user to input a correct one until a valid input is entered
int validateInput() {
    int number;
    while (true) {
        cin >> number;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "This is not a number. Please enter a number not more than 3: ";
        } else if (number < 1) {
            cout << "Integer is less than 1. Try again: ";
        } else if (number > 3) {
            cout << "Integer is greater than 3. Try again: ";
        } else {
            break;
        }
    }
    return number;
}