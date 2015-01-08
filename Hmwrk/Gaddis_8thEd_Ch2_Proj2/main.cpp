/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 8, 2015, 10:19 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;
//convert to percent 
const char CONVPCT=100;



//Execution starts here
int main(int argc, char** argv) {
//Assign characters
    float saleYear=8.6e6;//sales this year
    char eastC=58;//east Coast generates sales
    //Build equation
    float sale=saleYear*eastC/CONVPCT;
    //Output
    cout<<"Sales generated this year = $";
    cout << fixed<< setprecision(0);
    cout<<sale<<endl;
    return 0;
}

