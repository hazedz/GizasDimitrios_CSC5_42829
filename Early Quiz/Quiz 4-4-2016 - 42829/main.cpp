/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on April 4, 2016, 7:44 AM
 * Purpose: for loop to 1 - 10
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int sum = 0; 
    for (sum = 0; sum < 10; sum++) {
      sum = sum + 1;  
    cout << "Sum of number 1 - 10: " << sum << endl;
    }
  
    return 0;
}

