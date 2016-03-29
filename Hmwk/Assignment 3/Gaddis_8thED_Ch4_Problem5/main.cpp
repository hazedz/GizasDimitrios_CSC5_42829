/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on March 27, 2016, 5:16 PM
 * Purpose: Body Mass Index
 */

#include <iostream>

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {

    //Declare Variables
    unsigned int weight, height;
    float BMI;

    //User input
    cout << "Please enter your weight and height to find you Body Mass Index (BMI)" << endl;
    cout << "Enter your weight in pounds" << endl;
    cin >> weight;
    cout << "Enter your height in inches" << endl;
    cin >> height;
    
    //Calculations
    BMI = (weight * 703) / (height * height);
    
    //Output
    if (BMI >= 18.5 && BMI <= 25){
        cout << "You are at optimal weight." << endl;
    }
    else if (BMI < 18.5){
        cout << "You are underweight." << endl;
    }
    else if (BMI > 25){
        cout << "You are overweight." << endl;
    }
    
    
    
    
    return 0;
}

