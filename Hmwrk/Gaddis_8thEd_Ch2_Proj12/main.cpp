/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on January 11, 2015, 6:27 PM
 */

#include <iostream>

using namespace std;


  
//Execution starts here 
int main(int argc, char** argv) {
//Defining characters
    int acreLnd=391876;//Square feet of land
    int acre=43560;//How many acres to devide
    //Multiplication starts here
    float sqrFt=acreLnd/acre;//should be 391876
    //Outputs
    cout<<"391876 square feet of land = "<<endl;
    cout<<sqrFt<<" acres."<<endl;
    return 0;
}

