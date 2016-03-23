/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on March 14, 2016, 9:42 AM
 * Purpose: Independent IF
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
    
    if (score <= 100 && score >= 90)
        cout << "Your letter grade is: A" << endl;
    if (score <= 89 && score >= 80)
        cout << "Your letter grade is: B" << endl;
    if (score <= 79 && score >= 70)
        cout << "Your letter grade is: C" << endl;
    if (score <= 69 && score >= 60)
        cout << "Your letter grade is: D" << endl;
    if (score <= 59.00)
        cout << "Your letter grade is: F" << endl;
            
    
    return 0;
}

