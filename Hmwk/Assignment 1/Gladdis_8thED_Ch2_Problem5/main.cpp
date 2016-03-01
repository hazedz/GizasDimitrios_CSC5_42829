/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Chapter 2 #5 Gladdis 
 * Created on February 29, 2016, 8:46 AM
 */

//Average of Values 



#include <iostream>

using namespace std;

/*
 * 
 */



// Execution
int main(int argc, char** argv) {

    // Input Variables 
    int var1, var2, var3, var4, var5, sum, average;
    
    var1 = 28;
    var2 = 32;
    var3 = 37;
    var4 = 24;
    var5 = 33;
           
    // sum = the total of all variables added
    sum = var1 + var2 + var3 + var4 + var5;
    
    // the average of the sum divided by 5 
    average = sum / 5;
    
    // display the average 
    cout << "The Average of the numbers are: " << average << endl;
       
    return 0;
}

