/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on March 18, 2016, 12:02 PM
 * Purpose: Test Average
 */

//System Variables
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants

//Prototype functions

//Execution Starts Here

int main(int argc, char** argv) {

    //Declare Variables
    
    float score1, score2, score3, score4, score5, average;
    
    
    cout << "Enter the first score." << endl;
    cin >> score1;
    
     cout << "Enter the second score." << endl;
    cin >> score2;
    
     cout << "Enter the third score." << endl;
    cin >> score3;
    
     cout << "Enter the fourth score." << endl;
    cin >> score4;
    
     cout << "Enter the fifth score." << endl;
    cin >> score5;
    
    
    //Calculate the variables
    
    average = (score1 + score2 + score3 + score4 + score5) / 5;
    
    cout << "The average of the five scores are " << fixed << setprecision(0) 
            << average << endl;
    
    
    
    return 0;
}

