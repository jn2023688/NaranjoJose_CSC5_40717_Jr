/* 
 * File:   main.cpp
 * Author: owner
 *
 * Created on January 25, 2015, 3:07 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    //NAME CHARACTERS
    int x;
    int row;
    //CREATE INPUT
    cout<<"Enter number no greater than 15."<<endl;
    cin>>x;
    //CREATE NESTED FOR LOOP
    for (row=0; row<5; row++){
        for (x=0; x<8; x++){
            cout<<"x";
            if (x==10)
                break;
        }            
        cout<<endl;        
    }  
    return 0;
}

