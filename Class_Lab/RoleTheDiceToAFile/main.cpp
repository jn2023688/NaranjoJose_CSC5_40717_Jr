/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 12, 2015, 10:06 AM
 * Purpose: Illustrate file i/o and random numbers
 */
//User libraries
#include <cstdlib>//Random rand(), srand() 
#include <iostream>//Keyboard/Monitor i/o
#include <fstream>//File i/o
#include <ctime>//Time functions
using namespace std;

//Global constants

//Function protoype

//Execution begins here 
int main(int argc, char** argv) {
//Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //declare file object
    ofstream output;
    //Open the file
    output.open("RollTheDice.dat");
    //Declare five dice
    unsigned short die1,die2,die3,die4,die5;
    //Set the value for each dice
    die1=rand()%6+1; 
    die2=rand()%6+1;
    die3=rand()%6+1;
    die4=rand()%6+1;
    die5=rand()%6+1;
    //Out the results to the screen
    cout<<"Yahtzee first roll => ";
    cout<<die1<<" "<<die2<<" "<<die3;
    cout<<" "<<die4<<" "<<die5<<endl;
    //output the results to a file
    output<<"Yahtzee first roll => ";
    output<<die1<<" "<<die2<<" "<<die3;
    output<<"  "<<die4<<"  "<<die5<<endl;
    //Output/close the stream
    output.close();
    return 0;
}

