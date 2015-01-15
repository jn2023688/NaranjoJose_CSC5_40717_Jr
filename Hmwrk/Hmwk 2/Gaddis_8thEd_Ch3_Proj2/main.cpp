/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 14, 2015, 12:09 PM
 */
//SYSTEM LIBRARIES
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

 
//EXECUTION STARTS HERE
int main(int argc, char** argv) {
    //NAMING CHARACTERS
    int classA=15;
    int classB=12;
    int classC=9;
    char totAmA;
    char totAmB;
    char totAmC;
    //DEMAND INPUT
    cout<<"How many tickets for class A seats?"<<endl;
    cin>>totAmA;//CLASS A AMOUNT
    cout<<"How many tickets for class b seats?"<<endl;
    cin>>totAmB;//CLASS B AMOUNT
    cout<<"How many tickets for class C seats?"<<endl;
    cin>>totAmC;//CLASS C AMOUNT
    //DO THE MATH
    int A=classA*totAmA;
    int B=classB*totAmB;
    int C=classC*totAmC;
    //OUTPUTS
    cout<<"Class A tickets cost "<<showpoint<<A<<endl;
    cout<<"Class B tickets cost "<<showpoint<<B<<endl;
    cout<<"Class C tickets cost "<<showpoint<<C<<endl;
    return 0;
}

