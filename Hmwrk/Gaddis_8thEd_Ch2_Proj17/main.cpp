/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 10, 2015, 8:10 PM
 */

#include <iostream>

using namespace std;
//Convert to Percent
const char CONVPCT=100;

  
//Execution begines here 
int main(int argc, char** argv) {
    //Name characters
    float shareST=750;//Share of stock 
    char stockPR=35;//Stock price
    char COM=2;
    //Equation time
    float prWC=shareST/stockPR;//Amount of stock without commission
    float prCom=shareST/COM/CONVPCT;//Amount of commission
    float prAll=shareST+shareST/COM/CONVPCT;//Stock Price with commission
    //Outputs
    cout<<"The price without commission is "<<prWC<<endl;//price without commission
    cout<<"The amount of commission is "<<prCom<<endl;//Amount of commission
    cout<<"The price with commission is "<<prAll<<endl;//Stock price with commission
    return 0;
}

