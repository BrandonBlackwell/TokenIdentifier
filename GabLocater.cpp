// GabLocater.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream input("in.txt");

    //if the file doesnt open tell user it doesnt work
    if (!input)
    {
        cout << "Not working" << endl;
    }
    //while the file "input" is true read into string variable "inStr"
    while (input)
    {
        string inStr((istreambuf_iterator<char>(input)),
            istreambuf_iterator<char>());
        input.close();

        int i = 0;
        char operators[19] = { '=','+', '-','*','/','%','&','|','^','<','>','!','(',')','.','[',']',';',':' };

        //loop to read through string to find if there is an "identifier" or "operator"
        while (inStr[i] > 0) {
            for (int a = 0; a < 19; a++)
            {
                if (isalpha(inStr[i]))
                {
                    cout << "character: " << inStr[i] << " is an identifier" << endl;
                }
                else if (isdigit(inStr[i]))
                {
                    cout << "character: " << inStr[i] << " isn't valid " << endl;
                }
                else if (inStr[i] == ' ') //printf("%c \n", inStr[i]);
                {
                    cout << "\n" << endl;
                }
                else if ((inStr[i] == operators[0]) || (inStr[i] == operators[1]) || (inStr[i] == operators[2]) || (inStr[i] == operators[3]) || (inStr[i] == operators[4]) || (inStr[i] == operators[5]) || (inStr[i] == operators[6]) || (inStr[i] == operators[7]) || (inStr[i] == operators[8]) || (inStr[i] == operators[9]) || (inStr[i] == operators[10]) || (inStr[i] == operators[11]) || (inStr[i] == operators[12]) || (inStr[i] == operators[13]) || (inStr[i] == operators[14]) || (inStr[i] == operators[15]) || (inStr[i] == operators[16]) || (inStr[i] == operators[17])
                    || (inStr[i] == operators[18]))
                {
                    cout << "character: " << inStr[i] << " is an operator" << endl;
                }
                else if (inStr[i] == 0) {
                    break;
                }
                i++;
            }
        }
    }
    return 0;
}
//EOF



