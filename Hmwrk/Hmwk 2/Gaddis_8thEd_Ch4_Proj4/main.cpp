/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 19, 2015, 4:37 PM
 */
//SYSTEM LIBRARIES
#include <iostream>
//GLOBAL CONSTANTS
using namespace std;

//EXECUTION STARTS HERE
int main(int argc, char** argv) {
    //NAME CHARACTERS
    float L1, W1, L2, W2, A1, A2;
    //CREATE AREA INPUTS 
    cout<<"Enter first length."<<endl;
    cin>>L1;//FIRST LENGTH 
    cout<<"Enter first width."<<endl;
    cin>>W1;//FIRST WIDTH
    cout<<"Enter second length."<<endl;
    cin>>L2;//SECOND LENGTH
    cout<<"Enter second width."<<endl;
    cin>>W2;//SECOND WIDTH
    //CREATE AREA FOR BOTH RECTANGLES
    A1=L1*W1;//FIRST RECTANGLE 
    A2=L2*W2;//SECOND RECTANGLE
    //CREATE IF/ELSE IF/ELSE STATEMENT
    if(A1>A2)
        cout<<"First rectangle is larger."<<endl;
    else if(A1==A2)
        cout<<"They are both equal."<<endl;
    else
        cout<<"Second rectangle is larger."<<endl;
    return 0;
}

