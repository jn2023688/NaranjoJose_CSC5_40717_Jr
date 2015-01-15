/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 15, 2015, 11:03 AM
 */
//SYSTEM LIBRARIES
#include <iostream>
//GLOBAL CONSTANTS
using namespace std;
const char COOKIES=3;
const char SERV=10;
//EXECUTION STARTS HERE
int main(int argc, char** argv) {
//NAME CHARACTERS
    float eat;
    int servings;//COOKIES CONSUMED
    int oneSRV=300;
    //CREATE INPUTS
    cout<<"Enter how many servings."<<endl;
    cin>>servings;
    //CREAT EQUATIONS
    eat=servings*(SERV*COOKIES);//SHOULD BE 900 IF ENTERED THIRTY
    //NOW SOME OUTPUTS
    cout<<"You have eaten "<<eat<<"!"<<endl;   
    return 0;
}

