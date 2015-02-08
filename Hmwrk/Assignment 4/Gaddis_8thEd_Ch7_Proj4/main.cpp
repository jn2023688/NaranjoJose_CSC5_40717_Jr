/* 
 * File:   main.cpp
 * Author: Jose Naranjo
 *
 * Created on February 7, 2015, 12:39 PM
 */
//SYSTEM LIBRARIES
#include <iostream>

using namespace std;
//GLOBAL CONSTANTS

//FUNCTION PROTOTYPES
void num(int, int);
int main(int argc, char** argv) {
//CALL FUNCTION
    num(10,6);
    return 0;
}
//FUNCTION CALLS ANY NUMBER GREATER THAN N
void num(int SIZE, int N){
    for (SIZE=N; SIZE<10; SIZE++)
        cout<<(SIZE+1)<<endl;
}