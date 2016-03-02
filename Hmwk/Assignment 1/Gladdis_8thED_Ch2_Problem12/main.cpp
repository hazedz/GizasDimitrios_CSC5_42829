/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Purpose: Land Calculation
 * Created on March 1, 2016, 2:55 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;



//User Libraries
  
//Global Constants 
  
//Function Prototypes 











//Execution
int main(int argc, char** argv) {

    //Variables
    
    float acre, landS, landA;
    
    acre = 43560;
    
    landS = 391976;
    
    //The calculation for acre for this land
    landA = landS / acre;
    
    //landS = The amount of acre in a tract of land
    //landA = Number of acres in land
    
    //Display 
    
    cout << "The tract of land that is " << landS 
            << " square feet contains a total " <<
           fixed << setprecision(2) << landA << " acres.";
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

