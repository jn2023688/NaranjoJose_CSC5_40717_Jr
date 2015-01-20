/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 19, 2015, 2:35 PM
 */
//SYSTEM LIBRARIES
#include <iostream>

using namespace std;
//GLOBAL CONSTANTS
//EXECUTION STARTS HERE
int main(int argc, char** argv) {
//NAMING MIN/MAX VALUES
    float a, b;
    //CALL INPUTS
    cout<<"Enter number."<<endl;
    cin>>a;//FIRST NUMBER
    cout<<"Enter second number."<<endl;
    cin>>b;//SECOND NUMBER
    //CREATE IF STATEMENT
    if(a>b){
        cout<<a<<" is the larger number."<<endl;
        cout<<b<<" is the smaller number."<<endl;
    }
    else{
        cout<<b<<" is the larger number."<<endl; 
        cout<<a<<" is the smaller number."<<endl;
    }
    return 0;
}

