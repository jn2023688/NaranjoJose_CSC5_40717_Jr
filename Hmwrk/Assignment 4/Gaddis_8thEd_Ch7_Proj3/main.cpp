/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on February 5, 2015, 3:37 PM
 */
//SYSTEM LIBRARIES
#include <iostream>
#include <vector>
#include <string>
using namespace std;
//GLOBAL CONSTANTS 
const int SALSA=5;
//FUNCTION PROTOTYPES

//EXECUTION STARTS HERE
int main(int argc, char** argv) {
    //NAME CHARACTERS
    string salsType[SALSA]={"mild", "medium", "sweet", "hot", "zesty"};
    int sSales[SALSA];
    //CALL FOR SALSA SALES
    cout<<"Please enter salsa sales."<<endl;
    //FOR CALL TO CALL SALSA TYPES
    for(int index=0; index<SALSA; index++){
        cout<<"Enter Salsa sales:"<<(SALSA+1);
        cin>>sSales[SALSA];
    }    
    //DISPLAY SALES OF SALSA
    for(int index=0; index<SALSA; index++){
        cout<<"Salsa #"<<(index+1);
    }
    return 0;
}

