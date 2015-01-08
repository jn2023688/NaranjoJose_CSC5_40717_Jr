/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 8, 2015, 11:03 AM
 */

#include <iostream>

using namespace std;
//Convert to percentage
const char CONVPCT=100;



//Execution begins here 
int main(int argc, char** argv) {
//Define characters
    float purChase=95;
    char stateTax=4;
    char cntyTax=2;
    //Conducting sales tax
    float taxS=purChase*stateTax/CONVPCT;//State tax
    float taxC=purChase*cntyTax/CONVPCT;//Couny tax
    //Output(State Tax)
    cout<<"State sales tax for 95 =";
    cout<<taxS<<endl;
    //Output (County Tax)
    cout<<"County sales tax for 95 =";
    cout<<taxC<<endl;
    return 0;
}

