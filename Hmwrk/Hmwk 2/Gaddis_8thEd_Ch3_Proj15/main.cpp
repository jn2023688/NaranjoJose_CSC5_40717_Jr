/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 18, 2015, 2:46 PM
 */
//SYSTEM LIBRARIES
#include <iostream>

using namespace std;
//GLOBAL CONSTANTS
const int CONVPCT=100;
int main(int argc, char** argv) {
    //NAME CHARACTERS
    float valProp, assessPr, Devide, mult;
    int Money=100;
    int Cents=75;
    int prop=60;//THIS WILL BE MULTIPLIED
    //CREATE INPUTS
    cout<<"Enter property's actual value."<<endl;
    cin>>valProp;
    //MATH TIME
    assessPr=valProp*prop/CONVPCT;
    Devide=assessPr/Money;
    mult=Devide*Cents/CONVPCT;
    //OUTPUTS
    cout<<"The assessment value is $"<<assessPr<<"."<<endl;//ASSESSMENT VALUE
    cout<<"The property tax is $"<<mult<<"."<<endl;//PROPERTY TAX  
    return 0;
}

