// GabLocater.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream input; //Stream to store and file name is made
    input.open("in.txt"); //"input" file is opened 
   
    //if the file doesnt open tell user it doesnt work
    if (!input)
    {
        cout << "Not working" << endl;
    }
    //while the file "gags" is open read gags into string called "inStr"
    while (input)
    {
        string inStr((istreambuf_iterator<char>(input)),
            istreambuf_iterator<char>());
        input.close();
        
        int i =0; 
        char operators[21] = { '=','+', '-','*','/','%','&','|','^','<','>','!','(',')','.','[',']',';',':',}; //intialization of array for operators
        
        //create loop to read through string to find if there is an "identifier" or "operator"
        while (inStr[i]) {
            if (isalpha(inStr[i])) printf("character %c is identifier\n", inStr[i]);

            else if (isdigit(inStr[i])) printf(" %c isn't a gag\n", inStr[i]);


            else if (inStr[i] == ' ') printf("%c \n", inStr[i]);

            for (int a = 0;a < 22 ;a++) //for loop to loop through array of operators

             if (inStr[i] == operators[a]) printf("%c is an operator\n", inStr[i]); //'i' is being incremented in the string while 'a' is being incremented through the array.

            i++;
        }


    }

    return 0;
}


