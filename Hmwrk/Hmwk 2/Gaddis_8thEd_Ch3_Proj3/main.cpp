/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 14, 2015, 6:57 PM
 */
//SYSTEM LIBRARIES
#include <iostream>
#include <cmath>
//GLOBAL CONSTANTS
using namespace std;

//EXECUTION STARTS HERE
int main(int argc, char** argv) {
//NAME CHARACTERS
    float average;//THE AVERAGE OF FIVE TEST SCORES
    int test1;
    int test2;
    int test3;
    int test4;
    int test5;
    //create input
    cout<<"Enter test score 1."<<endl;//FIRST TEST SCORE
    cin>>test1;
    cout<<"Enter test score 2."<<endl;//SECOND TEST SCORE
    cin>>test2;
    cout<<"Enter test score 3."<<endl;//THIRD TEST SCORE
    cin>>test3;
    cout<<"Enter test score 4."<<endl;//FOURTH TEST SCORE
    cin>>test4;
    cout<<"Enter test score 5."<<endl;//FIFTH TEST SCORE
    cin>>test5;
    //CALCULATE THE AVERAGE 
    average=(test1+test2+test3+test4+test5)/5.0;
    //DESPLAY THE AVERAGE
    cout<<"The average score is: "<<average<<endl;
    return 0;
}

