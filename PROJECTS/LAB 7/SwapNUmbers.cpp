#include <iostream>

using namespace std;
//function declaration
void SwapNumbers(int &num1, int &num2);

int main(){
    
    int varA = 25;
    int varB = 100;

    cout << "varA before swap: " << varA << endl;
    cout << "varB before swap: " << varB << endl;

    SwapNumbers(varA, varB);

    cout << "varA after swap: " << varA << endl;
    cout << "VarB after swap: " << varB << endl;

    return 0;
}
//function for swapping using reference
void SwapNumbers(int &num1, int &num2){
    int temp = num1;
    num1 = num2;
    num2 =temp;
}
