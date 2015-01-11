/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 11, 2015, 2:58 PM
 */

#include <iostream>

using namespace std;
//Convert to percentage
const char CONVPCT=100;

 
//Execution starts here 
int main(int argc, char** argv) {
//Naming characters
    char profit=35;//percentage profit
    char cirBrd=14.95;//Circuit board price
    //Equations
    float price=cirBrd+cirBrd*profit/CONVPCT;//Circuit board price+profit
    //Equation output
    cout<<"The circuit board cost"<<endl;
    cout<<price<<"."<<endl;
    return 0;
}

