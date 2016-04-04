/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on April 4, 2016, 1:27 PM
 * Purpose: Sum of Numbers
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Declare Variables
    int num, sum, i;
    
    //User Input
    cout << "Enter a number to find the sum of numbers (Up to 50)" << endl;
    cin >> num;
    
   //Output
    for (i = 1; i <= num ; i++){
        sum = sum + i;
      cout << "The sum of numbers for " << num << " is: " << sum << endl;  
      
       
        
      
    }
    
    
    
    
    
    
    
    return 0;
}

