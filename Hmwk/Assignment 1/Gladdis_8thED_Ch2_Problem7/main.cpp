/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Purpose: Ocean Levels
 * Created on March 1, 2016, 1:23 PM
 */

#include <iostream>

using namespace std;

//User Libraries
  
//Global Constants 
  
//Function Prototypes 








//Execution
int main(int argc, char** argv) {

    
    
    //Variables 
    
    float oceanR, newL1, newL2, newL3;
    
    //The amount the ocean rises each year
    oceanR = 1.5;
    
    //Ocean Level in 5 years 
    newL1 = oceanR *5;
    
    //Ocean Level in 7 years
    newL2 = oceanR * 7;
    
    //Ocean Level in 10 years
    newL3 = oceanR * 10; 

    
    
    cout << "The ocean level rises every year by 1.5 millimeters." << endl;
    
    //Output for 5 years
    cout << "In 5 years the ocean level is predicted to rise by " << newL1 << 
            " millimeters." << endl;
    
    //Output for 7 years
    cout << "In 7 years the ocean level is predicted to rise by " << newL2 <<
            " millimeters." << endl;
    
    //Output for 10 years
    cout << "In 10 years the ocean level is predicted to rise by " << newL3 <<
            " millimeters." << endl;

    return 0;
}

