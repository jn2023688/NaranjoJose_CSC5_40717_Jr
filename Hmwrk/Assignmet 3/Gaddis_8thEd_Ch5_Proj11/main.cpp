/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 24, 2015, 7:30 PM
 */
//SYSTEM LIBRARIES
#include <iostream>
#include <iomanip>
using namespace std;
//GLOBAL CONSTANTS

  
//EXECUTION STARTS HERE 
int main(int argc, char** argv) {
    //NAME VARIABLES
    float POP, DAYS, E;
    //CALL INPUTS
    cout<<"Enter population no less than 2."<<endl;
    cin>>POP;//STARTER POPULATION
    //DISPLAY TABLE
    cout<<"Population Growth"<<endl;
    cout<<"-----------------"<<endl;
    //  CREATE FOR STATEMENT
    if (POP>=2){
        for (DAYS<1; DAYS<32; DAYS++)
        //EQUATION FOR POPULATION
        E=POP*DAYS;    
        cout<<DAYS<<"\t\t"<<E<<endl;
    }
    else
        cout<<"Enter population no less than 2."<<endl;
    return 0;
}

