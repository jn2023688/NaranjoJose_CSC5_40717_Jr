/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 21, 2015, 10:31 AM
 */

//SYSTEM LIBRARIES
#include <cstdlib>
#include <cmath>
using namespace std;

//USER LIBRARIES

//FUNCTION PROOTYPES
//FV=FUTURE VALUE $'S
//PV


//FV    PV      i       n


//EXECUTION STARTS HERE
int main(int argc, char** argv) {
    float prsVal=100.0f;
    float intRate=0.06;
    int nCompnd=72/intRate;
    //CONVERT INTEREST TO A FRACTION
    intRate/=100;
    cout<<"Present value = $"<<prsVal<<endl;
    cout<<"Interest rate = "<<intRate*100
            <<"%"<<endl;
    return 0;
}
//INPUTS
//PRINIPAL IN 
//i->>INTEREST RATE PER YEAR 
//




float save1(float p, float i, int n){
    return p*pow(1+i,n);
}