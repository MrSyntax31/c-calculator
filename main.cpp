#include <iostream>
#include <string.h>
#include <cmath>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    cout << "\t\t=========================================================================================" << endl;
    cout << "\t\t=====                     POLYTECHNIC UNIVERSITY OF THE PHILIPPINES                 =====" << endl;
    cout << "\t\t=====                   BACHELOR OF SCIENCE IN INFORMATION TECHNOLOGY               =====" << endl;
    cout << "\t\t=========================================================================================\n\n" << endl;

    cout << "\t\t=========================================================================================" << endl;
    cout << "\t\t=====                             UNITER UNIVERSAL CALCULATOR                       =====" << endl;
    cout << "\t\t=========================================================================================\n\n" << endl;

 string PassCode;
    int loginAttempt=0;

    while (loginAttempt < 2)
    {
        cout << "\t\t===========================" << endl;
        cout << "\t\t===    ENTER PASSCODE   ===" << endl; //passkey
        cout << "\t\t===========================\n" << endl;
        cin >> PassCode;

         if (PassCode == "ADS-RKB-2018"){
            cout << endl;
    cout << "\t\t=========================================================================================" << endl;
    cout << "\t\t=====                                 WELCOME UNITER!                               =====" << endl;
    cout << "\t\t=========================================================================================\n\n" << endl;
    break;
        }
        else
        {
            cout << "\n INVALID PASSCODE PLEASE TRY AGAIN \n" << '\n';
            loginAttempt++;
        }
        }
        if (loginAttempt == 2)
        {
            cout << "Too many Login Attempt: Syntax Error! \n" << endl;
            return 0;
        }
        string Usname;
        cout << endl;
        cout << "\t\t=================================" << endl;
        cout << "\t\t ==  PLEASE INPUT YOUR NAME   == " << endl;
        cout << "\t\t=================================\n\n" << endl;
        cout << "\t\t=================================\n\n" << endl;
        cin >> Usname;
        cout << endl << "\t\t\t " << Usname << " WELCOME! \n\n " << endl;

 double num1, num2,answer ;
 float myNumber;
 int option;
 char tryAgain;

 do{
    cout << "\t\t=====================================================" << endl;
    string admin("ASDM");
    cout << "\t\t======             CHOOSE A OPERATION          ======" << endl;
    cout << "\t\t=====================================================\n" << endl;
    cout << "\t\t           PLEASE INPUT 2 NUMBERS PER OPERATOR       \n" << endl;
    cout << "\t\t=====================================================" << endl;
    cout << "\t\t   1.ADDITION                                        " << endl;
    cout << "\t\t   2.SUBTRACTION                                     " << endl;
    cout << "\t\t   3.DIVISION                                        " << endl;
    cout << "\t\t   4.MULTIPLICATION                                  " << endl;
    cout << "\t\t   5.SQUARE & CUBE ROOT                              " << endl;
    cout << "\t\t   6.EXIT                                            " << endl;
    cout << "\t\t=====================================================" << endl;
    cin >> option;

    switch(option){
case 1:
    cout << "\t\tPLEASE INPUT A NUMBER " << endl;
    cin >> num1 >> num2;
    answer = num1 + num2;
    cout << "\n\t\t The answer on : " << num1 << " + " << num2 << " + " << " = " << answer << endl;
    break;
case 2:
    cout << "\t\tPLEASE INPUT A NUMBER " << endl;
    cin >> num1 >> num2 ;
    answer = num1 - num2 ;
    cout << "\n\t\t The answer on : " << num1 << " - " << num2 << " - " << " = " << answer << endl;
    break;
case 3:
    cout << "\t\tPLEASE INPUT A NUMBER " << endl;
     cin >> num1 >> num2;
    answer = num1 / num2;
    cout << "\n\t\t The answer on : " << num1 << " / " << num2 << " / " << " = " << answer << endl;
    break;
case 4:
    cout << "\t\tPLEASE INPUT A NUMBER " << endl;
     cin >> num1 >> num2;
    answer = num1 * num2 ;
     cout << "\n\t\t The answer on : " << num1 << " * " << num2 << " * " << " = " << answer << endl;
    break;

case 5:
        cout << "\t\t Enter a Number: \n" << endl;
        cin >> myNumber;
        cout << "\n\t\t Square Root of " << myNumber << " is " << sqrt(myNumber);
        cout << "\n\n\t\t";
        cout << "\n\t\t Cube Root of " << myNumber << " is " << cbrt(myNumber);
        cout << "\n\n\t\t";
        break;
default:
    cout << "\t\t Syntax Error! \n " << endl;
    break;
    //End of operation property //
case 6:
    cout << "\t\t======================================================" << endl;
    cout << "\t\t                       Thank You!                     " << endl;
    cout << "\t\t======================================================" << endl;
    cout << "\n\n\t\t" << endl;
    }
    cout << "\n\t\t Would you like to start again ( Y or N ) \n";
    cin >> tryAgain;
    }
    while(tryAgain == 'y' || tryAgain == 'Y');

    cout << "\n\t\t Thank You For Logging in \n\n";
    cout << "\t\t DEL ESPIRITU SANTO & BARAWID (R) 2018.\n";
 return 0;
}
