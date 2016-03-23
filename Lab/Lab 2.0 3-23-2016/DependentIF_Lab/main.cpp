/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on March 23, 2016, 10:22 AM
 * Purpose: Dependent IF
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float score; 
        
    cout << "Enter a your score between 0 and 100" << endl;
   
    cin >> score ;
    
    
        
if (score >= 90)
    cout << "Your letter grade is: A" << endl;
else if (score >= 80)
    cout << "Your letter grade is: B" << endl;
else if (score >= 70)
    cout << "Your letter grade is: C" << endl;
else if (score >= 60)
    cout << "Your letter grade is: D" << endl;
else if (score >= 0)
    cout << "Your letter grade is: F" << endl;
    
  
    return 0;
}

