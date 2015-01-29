/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 27, 2015, 4:40 PM
 */
//SYSTEM LIBRARIES
#include <iostream>
#include <string>
using namespace std;
//GLOBAL CONSTANTS

//FUNCTION PROTOTYPES

//EXECUTION STARTS HERE
int main(int argc, char** argv) {
    //Make VARIABLES
    char ch;
    int x, o;
    //ASK FOR X OR O
    cout<<"Pick x or o, then press enter."<<endl;
    cin>>ch;
    //CREATE SWITCH TO PICK X OR O 
    switch(ch){
        case 'x':cout<<"Lets play!"<<endl;
        break;
        case 'o':cout<<"Lets play!"<<endl;
        break;
        default:cout<<"Choose x or o to play."<<endl;
    }
    //BOARD PIECE
    cout<<"|_|o|_|o|_|o|_|o|"<<endl;
    cout<<"|o|_|o|_|o|_|o|_|"<<endl;
    cout<<"|_|o|_|o|_|o|_|o|"<<endl;
    cout<<"|_|_|_|_|_|_|_|_|"<<endl;
    cout<<"|_|_|_|_|_|_|_|_|"<<endl;
    cout<<"|x|_|x|_|x|_|x|_|"<<endl;
    cout<<"|_|x|_|x|_|x|_|x|"<<endl;
    cout<<"|x|_|x|_|x|_|x|_|"<<endl;
    return 0;
}
    