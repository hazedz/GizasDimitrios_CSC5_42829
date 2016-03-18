/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on March 7, 2016, 10:50 AM
 * Purpose: Lab: Pizza Pi
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants
const float pi = 3.14159;
//Prototypes Functions

//Execution Starts Here
int main(int argc, char** argv) {

    //Declare Variables
    float numPce, diameter, r, area, slice; 
    
    //numPce = Number of pizzas
    //diameter = diameter of pizza
    //r = radius of pizza
    //area = are of pizza
    //slice = the area of one slice of pizza 
    
    slice = 14.125;
    
    //Input the Variables 
    cout << "Enter the diameter of the pizza" << endl;
    
    cin >> diameter;
    
    //Calculate the Variables
    r = diameter / 2;
    numPce = (pi*r*r) / slice;
    numPce = numPce + 1; 
          
    //Output the results
    cout << "The number of slices in the pizza is " <<  fixed << setprecision(0) << 
            numPce << endl;
    
    //exit
    
      
    return 0;
}

