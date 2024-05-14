#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <cctype>

using namespace std;
 
 //functions declaration
string capitalizeSecondLetter(string fileData);
string reverseString(string fileData);
int countvowels(string fileData);
int countingWords(string fileData);

int main()
{
    //open text file and assign it to variable fileDAta
    ifstream file("task6.txt");
    string fileData;
    getline(file, fileData);  //read a line from file into fileData

    //print statements and caling of function
    cout << "number of words in the text file statement are: "<<countingWords(fileData) << "\n\n";
    cout << "number of vowels in the text file statement are:  " << countvowels(fileData) << "\n\n";
    cout << "Reversed result of the text file statement is : " << reverseString(fileData) << "\n\n";
    cout << "statement with the second letter of eachword capitalized is : " << capitalizeSecondLetter(fileData)<<'\n';
   
    
    return 0;

}
    //function to count the vowels in the statement
    int countvowels(string fileData)
    {
        int count = 0;
    
        
        for (int i = 0; i < fileData.length(); i++)
        {
            if (tolower(fileData[i]) == 'a' || tolower(fileData[i]) == 'e' || tolower(fileData[i]) == 'i' || tolower(fileData[i]) == 'o' || tolower(fileData[i]) == 'u')
            {
                count++;
            }
        }
        return count;
    } 

    
    //function to count words in the statement
    int countingWords(string fileData)
    {
        
        int num=1;
        for (int i = 0; i < fileData.length(); i++)
            {
            if (isblank(fileData[i]))  //check if character is space or tab
            num++;
            }
            //cout << num << '\n';

            return num;

    }

    
    //function to reverse the statement
    string reverseString(string fileData)
    {
        reverse(fileData.begin(), fileData.end()); //reverse the whole string
        return fileData;
    }   

   
   
        //function to capitalizing the second letter of the statement in the text file
    string capitalizeSecondLetter(string fileData)
    {
            int a = 0;
            for (int i = 0; i <= fileData.length(); i++)
        {
            if (isblank(fileData[i])) //check if the chracter is space or tab
                a = 0;
            else
            {
                if (a == 1){
                    fileData[i] = toupper(fileData[i]);
                }
                
                a++;
            }
        }
        return fileData;
    }
    