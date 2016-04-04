/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on April 4, 2016, 1:27 PM
 * Purpose: Calories Burned
 */
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Declare Variables
    float min, cal, burn;
    
    cal = 3.6f;
    
    //Output Loop
    for (min=5; min <= 30; min+=5){
        burn = min*cal;
        cout << "You have lost: " << burn << " calories in " << min << " minutes"
                << endl;
         
    }

    return 0;
}

