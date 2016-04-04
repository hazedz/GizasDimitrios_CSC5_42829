/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on April 4, 2016, 1:27 PM
 * Purpose: Distanced Traveled
 */
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Declare Variables
    float time, distance, speed;
    int i;
    
    //input
    cout << "What is the speed of the vehicle in MPH?" << endl;
    cin >> speed;
    cout << "How many hours has is traveled?" << endl;
    cin >> time;
    
    //output
    cout << "Hour" << "\t" << "Distanced Traveled" << endl;
    
    for (i = 1; i <= time; i++){
        distance = i * speed;
        cout << i << "\t" << distance << endl;
    }
   
    return 0;
}

