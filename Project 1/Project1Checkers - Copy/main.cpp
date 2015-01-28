/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 27, 2015, 4:40 PM
 */
//SYSTEM LIBRARIES
#include <iostream>

using namespace std;
//GLOBAL CONSTANTS

//FUNCTION PROTOTYPES

//EXECUTION STARTS HERE
int main(int argc, char** argv) {
    //DRAW SQUARE
    float sqre;
    //DRAW SQUARE USING FOR LOOP
    for (sqre=0; sqre<8; sqre++){
        cout<<"|_|";
        cout<<"|_|";
        cout<<"|_|";
        cout<<"|_|";
        cout<<"|_|";
        cout<<"|_|";
        cout<<"|_|";
        cout<<"|_|"; 
        cout<<endl;
    }
    return 0;
}

