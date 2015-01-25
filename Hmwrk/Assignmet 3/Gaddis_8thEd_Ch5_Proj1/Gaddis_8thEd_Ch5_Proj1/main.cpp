/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 22, 2015, 10:58 AM
 */
//SYSTEM LIBRARIES
#include <iostream>

using namespace std;

//EXECUTION STARTS HERE
int main(int argc, char** argv) {
    //NAME VARIABLES
    float anyNum; 
    int starter=1;
    //CALL INPUTS 
    cout<<"Enter number."<<endl;
    cin>>anyNum;
    //CALL WHILE
    while (starter<=anyNum)
    {
        cout<<starter<<endl;
        starter++;
    }
    return 0;
}

