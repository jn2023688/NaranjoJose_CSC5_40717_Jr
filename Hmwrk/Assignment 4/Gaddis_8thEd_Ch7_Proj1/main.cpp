/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on February 4, 2015, 4:36 PM
 */
//SYSTEM LIBRARIES
#include <iostream>
#include <vector>
using namespace std;
//GLOBAL CONSTANTS

//FUNCTION PROTOTYPES
void showVal(vector<int>);
//EXECUTION STARTS HERE
int main(int argc, char** argv) {
    //NAME CHARACTERS
    vector<int>val;
    //FOR LOOP TO CALL INPUTS
    for(int count=0; count<=10; count++)
        val.push_back(count);
    //DISPLAY NUMBERS
        showVal(val);
    return 0;
}
//FUNCTION TO SHOW NUMBERS
void showVal(vector<int>vect){
//FOR LOOP USE TO DESPLAY NUMBERS
    for (int count=0; count<vect.size(); count++)
        cout<<vect[count]<<endl;
}