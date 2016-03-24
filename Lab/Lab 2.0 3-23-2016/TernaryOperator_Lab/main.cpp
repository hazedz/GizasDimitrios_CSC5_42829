/* 
 * File:   main.cpp
 * Author: Dimtirios Gizas
 * Created on March 23, 2016, 9:38 AM
 * Purpose: Ternary Operator
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

   int score;
   char grade;
   
    cout << "Enter your score you got from 0 to 100." << endl;
    
    cin >> score ;
       
    (score <= 100 && score >= 90 ? grade = 'A': 'F');
    
    (score <= 89 && score >= 80 ? grade = 'B': 'F');
    
    (score <=  79 && score >= 70 ? grade = 'C': 'F');
    
    (score <=  69 && score >= 60 ? grade = 'D': 'F');
    
    (score <=  59 ? grade = 'F': 'F');
    
    cout << "Your grade is: " << grade << endl;
    
    return 0;
}