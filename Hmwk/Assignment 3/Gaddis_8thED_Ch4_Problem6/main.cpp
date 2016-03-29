/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on March 27, 2016, 5:47 PM
 * Purpose: Mass and Weight
 */

#include <iostream>

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {

    //declare variables
    float mass, weight;
    
    //user input
    cout << "Enter the object's mass (kilograms): " << endl;
    cin >> mass;
    
    
    //calculation
    weight = mass * 9.8;
      
    //output
    if (weight > 1000)
        cout << "Is too heavy." << endl;
    else if (weight < 10)
        cout << "Is too light." << endl;
    else if (weight <= 1000 && weight >= 10)
        cout << "Weight is OK." << endl;
 
    return 0;
}

