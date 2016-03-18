/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on March 18, 2016, 12:43 PM
 * Purpose
 */

//System Libraries
#include <iomanip>
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Prototype Functions

//Execution Starts Here

int main(int argc, char** argv) {

    
    //Declare Variables
    float monA, monB, monC, average;
    char mon1[8], mon2[8], mon3[8];
    
    cout << "Type the name of the first month" << endl;
    cin >> mon1;
    cout << "Type in the amount of rain that fell in " << mon1 << endl ;
    cin >> monA;
    
    cout << "Type the name of the second month" << endl ;
    cin >> mon2 ;
    cout << "Type in the amount of rain that fell in " << mon2 << endl ;
    cin >> monB ;
    
    cout << "Type the name of the third month" << endl ;
    cin >> mon3 ;
    cout << "Type in the amount of rain that fell in " << mon3 << endl ;
    cin >> monC ;
    
    average = (monA + monB + monC) / 3 ;
    
    
    cout << "The average rainfall for the months of" << mon1 << ", " << mon2 
            << ", and " << mon3 << " is " << fixed << setprecision(2) 
            << average << " inches." << endl;
    
    return 0;
}

