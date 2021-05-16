/******************************************************
  A program with some functions and comments
******************************************************/

#include <iostream>
using namespace std;

void pause();

//void line(), message();

int main()
{
    /*cout<<"Hello!, The program starts in main()."
        <<endl
        <<"Oh what"
        <<endl
        <<"a happy day"
        <<endl
        <<"Oh yes."
        <<endl;

    /*line();
    message();
    line();
    cout<<"At the end of main()."
        <<endl;
    */

    cout << endl << "Dear reader, "
        << endl << "have a ";
    pause();
    cout << "!" << endl;



    return 0;
}

/*
void line()
{
    cout<<"-------------------------"
        <<endl;
}

void message()
{
    cout<<"In the function message()."
        <<endl; 
}*/

void pause()
{
    cout <<"BREAK";
}