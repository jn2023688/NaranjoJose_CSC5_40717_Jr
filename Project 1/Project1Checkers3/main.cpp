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
    //Make VARIABLES
    char ch, move;
    //ASK FOR X OR O
    cout<<"Pick x, then press enter."<<endl;
    cin>>ch;
    //CREATE SWITCH TO PICK X OR O 
    switch(ch){
        case 'x':cout<<"Lets play!"<<endl;
        break;
        default:cout<<"Choose x to play."<<endl;
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
    //OUTPUT PIECES TO MOVE
    cout<<"Chose s or d to move."<<endl;
    cin>>move;
    //X GOES FIRST
    if (move=='d'){//D MOVES FIRST TOP PIECE.
        cout<<"|_|o|_|o|_|o|_|o|"<<endl;
        cout<<"|o|_|o|_|o|_|o|_|"<<endl;
        cout<<"|_|o|_|x|_|o|_|o|"<<endl;
        cout<<"|_|_|_|_|_|_|_|_|"<<endl;
        cout<<"|_|_|_|_|_|_|_|_|"<<endl;
        cout<<"|_|_|x|_|x|_|x|_|"<<endl;
        cout<<"|_|x|_|x|_|x|_|x|"<<endl;
        cout<<"|x|_|x|_|x|_|x|_|"<<endl;
        cout<<"You took a piece."<<endl;        
        //S MOVES THIRD TOP PIECE ONCE
    }else if (move=='s'){ 
        cout<<"|_|o|_|o|_|o|_|o|"<<endl;
        cout<<"|o|_|o|_|o|_|o|_|"<<endl;
        cout<<"|_|o|_|O|_|o|_|o|"<<endl;
        cout<<"|_|_|_|_|_|_|_|_|"<<endl;
        cout<<"|_|_|_|_|_|x|_|_|"<<endl;
        cout<<"|x|_|x|_|_|_|x|_|"<<endl;
        cout<<"|_|x|_|x|_|x|_|x|"<<endl;
        cout<<"|x|_|x|_|x|_|x|_|"<<endl;
    }else{//FAIL SWITCH 
        cout<<"Start all over."<<endl;
    }
    cout<<""<<endl;//SPLIT THE BOARD
    //OTHER OPONENT MOVES
    if (move=='d'){
        cout<<"|_|o|_|o|_|o|_|o|"<<endl;
        cout<<"|o|_|_|_|o|_|o|_|"<<endl;
        cout<<"|_|o|_|o|_|o|_|o|"<<endl;
        cout<<"|_|_|_|_|_|_|_|_|"<<endl;
        cout<<"|_|_|_|_|_|_|_|_|"<<endl;
        cout<<"|_|_|x|_|x|_|x|_|"<<endl;
        cout<<"|_|x|_|x|_|x|_|x|"<<endl;
        cout<<"|x|_|x|_|x|_|x|_|"<<endl;
    }else if (move=='s'){ 
        cout<<"|_|o|_|o|_|o|_|o|"<<endl;
        cout<<"|o|_|o|_|o|_|o|_|"<<endl;
        cout<<"|_|o|_|_|_|o|_|o|"<<endl;
        cout<<"|_|_|_|_|_|_|_|_|"<<endl;
        cout<<"|_|_|_|_|_|o|_|_|"<<endl;
        cout<<"|x|_|x|_|_|_|x|_|"<<endl;
        cout<<"|_|x|_|x|_|x|_|x|"<<endl;
        cout<<"|x|_|x|_|x|_|x|_|"<<endl;
    }else{
        cout<<"Try again."<<endl;
    }
    cout<<"You lost a piece."<<endl;//TELLING YOU THAT YOU LOST A PIECE
    cout<<"Chose s or d to move."<<endl;
    cin>>move;
    //YOUR TURN
    if (move=='d'){
        cout<<"|_|o|_|o|_|o|_|o|"<<endl;
        cout<<"|o|_|_|_|o|_|o|_|"<<endl;
        cout<<"|_|o|_|x|_|o|_|o|"<<endl;
        cout<<"|_|_|_|_|_|_|_|_|"<<endl;
        cout<<"|_|_|_|_|_|_|_|_|"<<endl;
        cout<<"|_|_|x|_|x|_|_|_|"<<endl;
        cout<<"|_|x|_|x|_|x|_|x|"<<endl;
        cout<<"|x|_|x|_|x|_|x|_|"<<endl;
        cout<<"You took 2 pieces."<<endl;
     }else if (move=='s'){ 
        cout<<"|_|o|_|o|_|o|_|o|"<<endl;
        cout<<"|o|_|o|_|o|_|o|_|"<<endl;
        cout<<"|_|o|_|_|_|o|_|o|"<<endl;
        cout<<"|_|_|_|_|_|_|_|_|"<<endl;
        cout<<"|_|_|_|_|_|x|_|_|"<<endl;
        cout<<"|x|_|x|_|_|_|_|_|"<<endl;
        cout<<"|_|x|_|x|_|x|_|x|"<<endl;
        cout<<"|x|_|x|_|x|_|x|_|"<<endl;    
        cout<<"You took 2 pieces."<<endl;
    }else{
        cout<<"Try again."<<endl;
    }
    //OPONENT'S TURN
    cout<<""<<endl;//BREAKS THE BOARD
    if (move=='d'){
        cout<<"|_|o|_|o|_|o|_|o|"<<endl;
        cout<<"|o|_|_|_|_|_|o|_|"<<endl;
        cout<<"|_|o|_|o|_|o|_|o|"<<endl;
        cout<<"|_|_|_|_|_|_|_|_|"<<endl;
        cout<<"|_|_|_|_|_|_|_|_|"<<endl;
        cout<<"|_|_|x|_|x|_|_|_|"<<endl;
        cout<<"|_|x|_|x|_|x|_|x|"<<endl;
        cout<<"|x|_|x|_|x|_|x|_|"<<endl;
        cout<<"You lost 2 pieces."<<endl;
     }else if (move=='s'){ 
        cout<<"|_|o|_|o|_|o|_|o|"<<endl;
        cout<<"|o|_|_|_|o|_|o|_|"<<endl;
        cout<<"|_|o|_|_|_|o|_|o|"<<endl;
        cout<<"|_|_|_|_|_|_|_|_|"<<endl;
        cout<<"|_|_|_|_|_|o|_|_|"<<endl;
        cout<<"|x|_|x|_|_|_|_|_|"<<endl;
        cout<<"|_|x|_|x|_|x|_|x|"<<endl;
        cout<<"|x|_|x|_|x|_|x|_|"<<endl;    
        cout<<"You lost 2 pieces."<<endl;
    }else{
        cout<<"Try again."<<endl;
    }    
    return 0;
}
    