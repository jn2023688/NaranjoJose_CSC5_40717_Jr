/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 17, 2015, 1:09 PM
 */
//SYSTEM LIBRARIES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//GLOBAL CONSTANTS
const int PI=3.14159;
//EXECUTION STARTS HERE
int main(int argc, char** argv) {
//NAME CHARACTERS
    float DIA, AREA, R, divRad, nSlices;    
    int SLICE=14.125;//DEVIDE AREA WITH THIS NUMBER
    //ASK FOR DIAMETER
    cout<<"Enter diameter."<<endl;
    cin>>DIA;
    //DO THE MATH
    divRad=DIA/2;
    AREA=PI*pow(divRad, 2);
    nSlices=AREA/SLICE;
    //CREATE OUTPUTS
    cout<<divRad<<endl;
    cout<<AREA<<endl;
    cout<<"You get "<<setprecision(3)<<nSlices<<" slices"<<endl;
    
    
    return 0;
}

