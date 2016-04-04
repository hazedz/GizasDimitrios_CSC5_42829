/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on April 4, 2016, 1:27 PM
 * Purpose: Characters for the ASCII Codes
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Declare Variables
    char character;
    int i;
    
    cout << "This program will display the characters for ASCII codes from 0 to 172" << endl;
    
    character = 0;
    
    //Output
    for(i = 0; i <= 127; i++){
        if (i % 16 ==0)
            cout << endl;
        
        cout << character << "    ";
        character++;
    }
            
    
    
    
    
    
    
    
    return 0;
}

