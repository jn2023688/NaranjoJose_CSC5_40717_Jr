/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 22, 2015, 3:39 PM
 */
//SYSTEM LIBRARIES
#include <iostream>
#include <iomanip>//FOR SETW
using namespace std;
//GLOBAL CONSTANTS
const int halfH=30;

//EXECUTION STARTS HERE
int main(int argc, char** argv) {
    //NAMING VARIABLES
    float cal=3.6;//CALORIES BURNED EVERY FIVE MINUTES
    float min;//KEEP TRACK IN INCREMENTS OF 5 
    float C;//SO CALORIES CAN BURN WITH TIME
    //CREATE FOR STATEMENT
    for (min=5; min<=halfH; min+=5){
        C=cal+min;//CALCULATE CALORIES BURNED
        cout<<min<<setw(9)<<C<<endl;
    }
    return 0;
}

