/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 13, 2015, 9:17 AM
 */

#include <iostream>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declare two Boolean variables
    bool X,Y;
    //Output the heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y ";
    cout<<"X^Y^X !(X||Y) !X&&!Y !(X&&Y) !X||!Y"<<endl;
    //Fill in the first row
    X=true; Y=true;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<" ";
    cout<<(!X?'T':'F')<<" ";
    cout<<(!Y?'T':'F')<<" ";
    cout<<(X&&Y?'T':'F')<<" ";
    cout<<(X||Y?'T':'F')<<" ";
    cout<<(X^Y?'T':'F')<<" ";
    cout<<(X^Y^Y?'T':'F')<<" ";
    cout<<(X^Y^X?'T':'F')<<" ";
    cout<<(!(X||Y)?'T':'F')<<" ";
    cout<<(!X&&!Y?'T':'F')<<" ";
    cout<<(!(X&&Y)?'T':'F')<<" ";
    cout<<(!X||!Y?'T':'F')<<" ";
    cout<<endl;
     Y=false;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<" ";
    cout<<(!X?'T':'F')<<" ";
    cout<<(!Y?'T':'F')<<" ";
    cout<<(X&&Y?'T':'F')<<" ";
    cout<<(X||Y?'T':'F')<<" ";
    cout<<(X^Y?'T':'F')<<" ";
    cout<<(X^Y^Y?'T':'F')<<" ";
    cout<<(X^Y^X?'T':'F')<<" ";
    cout<<(!(X||Y)?'T':'F')<<" ";
    cout<<(!X&&!Y?'T':'F')<<" ";
    cout<<(!(X&&Y)?'T':'F')<<" ";
    cout<<(!X||!Y?'T':'F')<<" ";
    cout<<endl;
    return 0;
}

