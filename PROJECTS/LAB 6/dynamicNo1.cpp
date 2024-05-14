#include <iostream>
#include <string>

using namespace std;

int main()
{
    int *number = new int(sizeof(int));
    char *word = new char(40*sizeof(char));

    cout << "please enter an integer: " ;
    cin >> *number;

    cout << "please enter any word: ";
    cin >> word;

    cout << "The value integer is: " << *number << '\n';
    cout << "The value your word is: " << word << '\n';

    delete number;
    delete word;

    return 0;
}