/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 17, 2015, 5:23 PM
 */
//SYSTEM LIBRARIES
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;
//GLOBAL CONSTANTS
const int MIN_VALUE=1;
const int MAX_VALUE=200;




int main(int argc, char** argv) {
//ENTER STUFF
    unsigned seed=time(0);
    int numOne;
    int numTwo;
    int Ans;
    srand(seed);
    //CREATE OUTPUTS FOR NUMBERS
    numOne=(rand()%(MAX_VALUE-MIN_VALUE+1))+MIN_VALUE;
    numTwo=(rand()%(MAX_VALUE-MIN_VALUE+1))+MIN_VALUE;
    cout<<"Add numbers"<<endl; 
    cout<<" "<<numOne<<endl;
    cout<<"+"<<numTwo<<endl;
    //TYPE ANSWER
    cout<<"Enter Answer."<<endl;
    cin>>Ans;
    //DISPLAY ANSWER
    cout<<"Answer is..."<<endl;
    cout<<numOne+numTwo<<endl;
    return 0;
}

