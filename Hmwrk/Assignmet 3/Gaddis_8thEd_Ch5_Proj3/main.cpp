/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 24, 2015, 3:50 PM
 */
//SYSTEM LIBRARIES
#include <iostream>

using namespace std;
//GLOBAL CONSTANTS
//EXECUTION STARTS HERE
int main(int argc, char** argv) {
    //NAME CHARACTERS
    float ocean=1.5;
    int years=1;
    //CREATE TABLE
    cout<<" Rising ocean level."<<endl;
    cout<<"--------------------"<<endl;
    //CREATE WHILE STATEMENT 
    while (years<=25){
        cout<<years<<"\t\t"<<(ocean*years)<<endl;
        years++;
    }
    return 0;
}

