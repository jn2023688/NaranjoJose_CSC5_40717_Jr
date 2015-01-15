/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 13, 2015, 6:50 PM
 */

#include <iostream>
//EXECUTION STARTS HERE
using namespace std;
 

  

int main(int argc, char** argv) {
//NAME CHARACTERS
    int numGal;
    int numMiles;
    //TYPE CHARACTERS
    cout<<"Enter number of gallons."<<endl;
    cin>>numGal;//NUMBER OF GALLONS
    cout<<"Enter number of miles."<<endl;
    cin>>numMiles;
    //THIS IS AN EQUATION
    unsigned int Answer=numGal/numMiles;
    //OUTPUT THE RESULTS
    cout<<"You can drive "<<Answer<<" miles."<<endl;    
    return 0;
}

