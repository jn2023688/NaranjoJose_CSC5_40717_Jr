/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 14, 2015, 7:37 PM
 */
//SYSTEM LIBRARIES
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//CONSTANT CHARACTER
const int CONVPCNT=100;

  
//EXECUTION STARTS HERE
int main(int argc, char** argv) {
//NAME CHARACTERS
    float minAM;
    int homeIN=80;
    char reCost;
    //ENTER INPUTS 
    cout<<"Please enter replacement cost."<<endl;
    cin>>reCost;//REPLACEMENT COST
    //CALCULATE THE MINIMAL AMOUNT
    minAM=reCost*homeIN/CONVPCNT;
    //OUTPUT THE THE AMOUNT
    cout<<"You should spend "<<static_cast<float>(minAM)<<"."<<endl; 
    return 0;
}

