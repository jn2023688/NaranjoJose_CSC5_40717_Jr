/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 19, 2015, 6:58 PM
 */
//SYSTEM LIBRARIES
#include <iostream>
#include <cmath>//FOR POW
using namespace std;
//GLOBAL CONSTANTS
//EXECUTION STARTS HERE
int main(int argc, char** argv) {   
    //NAME BMI CHARACTERS
    float BMI1, BMI2, BMIANS, weight, height;
    //ENTER WEIGHT AND HEIGHT INPUTS
    cout<<"Enter weight."<<endl;
    cin>>weight;//PERSON'S WEIGHT 
    cout<<"Enter height."<<endl;
    cin>>height;//PERSON'S HEIGHT
    //BMI EQUATION
    BMI1=weight*703;
    BMI2=pow(height, 2);
    BMIANS=BMI1/BMI2;
    cout<<BMIANS<<endl;
    //CREATE IF/ELSE IF/ ELSE STATEMENT
    if (BMIANS>25)
        cout<<"You are overweight."<<endl;
    else if(BMIANS<18.5)
        cout<<"You are underweight."<<endl;
    else
        cout<<"You are ok."<<endl;
    return 0;
}

