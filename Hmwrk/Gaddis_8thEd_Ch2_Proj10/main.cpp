/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 10, 2015, 3:22 PM
 */

#include <iostream>

using namespace std;


 
//Execution starts here
int main(int argc, char** argv) {
    //Define characters
    char milesDr=375;//Miles driven
    char galGas=15;//Gallons of Gas
    //Miles Per Gallon Equation
    float MPG=milesDr/galGas;
    //Output
    cout<<"The car gets "<<MPG<<endl;
    cout<<"miles per gallon"<<endl;

    return 0;
}

