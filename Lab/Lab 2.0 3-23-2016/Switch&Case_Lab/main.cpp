/* 
 * File:   main.cpp
 * Author: Dimtirios Gizas
 * Created on March 23, 2016, 9:38 AM
 * Purpose: Switch and Case 
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
    
    switch (score <= 100 && score >= 90){
        case true: cout << "Your letter grade is: A" << endl;break;
    }    
    
   switch (score <= 89 && score >= 80){
        case true: cout << "Your letter grade is: B" << endl;
        break;
    }
         
    switch (score <= 79 && score >= 70){
        case true: cout << "Your letter grade is: C" << endl;
        break;
    }
    
    switch (score <= 69 && score >= 60){
        case true: cout << "Your letter grade is: D" << endl;
        break;
    }
    
    switch (score <= 59 && score >= 0){
        case true: cout << "Your letter grade is: F" << endl;
        break;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

