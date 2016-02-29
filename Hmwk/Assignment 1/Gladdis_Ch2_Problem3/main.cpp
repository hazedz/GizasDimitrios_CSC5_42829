/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Gladdis Ch2 #3
 * Created on February 28, 2016, 10:57 PM
 */

// Sales Tax 

#include <iostream>

using namespace std;

/*
 * 
 */


//Execution 
int main(int argc, char** argv) {

// Declare Variables 

    float state;
    float country;
    unsigned int purchase = 95; 
    float total; 
    
//    
    state = purchase * 0.04;
    country = purchase * 0.06;
    
    total = state + country;
    
//Output 
    
    cout << "The Total Sales Tax for the $95 purchase would be: $"  << total 
            << "0";
    
    
    return 0;
}

