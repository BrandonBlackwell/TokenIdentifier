// GabLocater.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
   
    
    
    ifstream gags; //Stream to store and file name is made
    gags.open("in.txt"); //"gags" file is opened 
   
    //if the file doesnt open tell user it doesnt work
    if (!gags)
    {
        cout << "Not working" << endl;
    }
    //while the file "gags" is open read gags into string called "inStr"
    while (gags)
    {
        string inStr((istreambuf_iterator<char>(gags)),
            istreambuf_iterator<char>());
        
        int i =0; //initialization of 'i' which is an int data type 
        char operators[21] = { '=','+', '-','*','/','%','&','|','^','<','>','!','(',')','.','[',']',';',':',}; //intialization of array for operators
        //char operators[48] = { '<<','>>','&^','+=','-=','*=','/=','%=','&=','|=','^=','<<=','>>=','&^=','&&','||','<-','++','--','==','<','>','=','!','!=','<=','>=',':=','...','(','[','{',' ,','.',')',']','}',';',':' };

        //create loop to read through string to find if there is an "identifier" or "operator"
        //"isaplha" checks if character is alphabetic
        //"isdigit" checks if character is a number
        while (inStr[i]) {
            if (isalpha(inStr[i])) printf("character %c is identifier\n", inStr[i]);

            else if (isdigit(inStr[i])) printf(" %c isn't a gag\n", inStr[i]);


            else if (inStr[i] == ' ') printf("%c \n", inStr[i]);

            for (int a = 0;a < 22 ;a++) //for loop to loop through array of operators

             if (inStr[i] == operators[a]) printf("%c is an operator\n", inStr[i]); //'i' is being incremented in the string while 'a' is being incremented through the array.

            i++;
        }


    }

   
    gags.close();
    return 0;
    
   // system("pause>0");

    
}


