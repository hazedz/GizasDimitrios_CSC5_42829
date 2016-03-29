/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on March 27, 2016, 4:44 PM
 * Purpose: Areas of Rectangles
 */

#include <iostream>

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {

    //declare variables
    float len1, len2, width1, width2, rect1, rect2;
    
    //User input
    cout << "Please enter the length and width of the first rectangle." << endl;
    cin >> len1;
    cin >> width1;
    
    cout << "Please enter the length and width of the second rectangle." << endl;
    cin >> len2;
    cin >> width2;
    
    //Calculations 
    rect1 = len1 * width1;
    rect2 = len2 * width2;
    
    //Output
    if (rect1 > rect2) 
        cout << "Rectangle 1 has the greater area." << endl;
    else if(rect1 < rect2) 
        cout << "Rectangle 2 has the greater area." << endl;
    else if (rect1 == rect2) 
        cout << "Both have the same area." << endl;        
            
 
    return 0;
}

