/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 15, 2015, 10:13 AM
 */
//SYSTEM LIBRARIES
#include <iostream>
#include <string>
using namespace std;
//GLOBAL CONSTANTS 
//EXECUTION STARTS HERE
int main(int argc, char** argv) {
//NAME STRINGS AND CHARACTERS
    string name;
    int age;
    string city;
    string college;
    string prof;//PROFESSION
    string anType;//ANIMAL TYPE 
    string namePet;//NAME OF PET 
    //DECLARE INPUTS
    cout<<"Please enter name."<<endl;
    cin>>name;
    cout<<"Please enter age."<<endl;
    cin>>age;
    cout<<"Please enter city."<<endl;
    cin>>city;
    cout<<"Please enter college."<<endl;
    cin>>college;
    cout<<"Please enter profession."<<endl;
    cin>>prof;
    cout<<"Please enter animal type."<<endl;
    cin>>anType;
    cout<<"Please enter name of pet."<<endl;
    cin>>namePet;
    //OUTPUTS
    cout<<"There once was a person named "<<name<<endl;
    cout<<"who lived in "<<city<<"."<<endl;
    cout<<"At the age of "<<age<<", "<<endl;
    cout<<name<<" went to college at "<<college<<"."<<endl;
    cout<<name<<" graduated and went to work "<<endl;
    cout<<"as a "<<prof<<"."<<endl;
    cout<<"Then, "<<name<<" adopted a "<<anType<<endl;
    cout<<" named "<<namePet<<"."<<endl;
    cout<<" They both lived happily ever after!"<<endl; 
    return 0;
}

