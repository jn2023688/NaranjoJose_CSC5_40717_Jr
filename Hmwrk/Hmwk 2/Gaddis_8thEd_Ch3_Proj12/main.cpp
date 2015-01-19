/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 18, 2015, 6:18 PM
 */
//SYSTEM LIBRARIES
#include <iostream>
//GLOBAL CONSTANTS 



using namespace std;

//EXECUTION STARTS HERE
int main(int argc, char** argv) {
//NAME CHARACTERS
    float F, C, conFC;
    //GET CELCIUS
    cout<<"Enter Celcius."<<endl;
    cin>>C; 
    //CONVERT TO FAHRENHEIT MATH 
    F=9/5;//CONVERSION PART ONE 
    conFC=F*C+32;//CONVERSION PART TWO 
    //NOW FOR SOME OUTPUTS 
    cout<<"Fahrenheit = "<<conFC<<"."<<endl;   
    return 0;
}

