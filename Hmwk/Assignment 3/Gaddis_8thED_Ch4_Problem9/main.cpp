/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on March 27, 2016, 6:57 PM
 * Purpose: Change for a dollar game
 */

#include <iostream>

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {

    
    
    // Declare Variables
    int nickels, dimes, pennies, quarters;
    
    // Prompt User
    cout << "Time to play a game." << endl;
    cout << "The goal is to make a dollar using change." << endl;
    cout << "Enter the amount of quarters" << endl;
    cin >> quarters;
    cout << "Enter the amount of dimes" << endl;
    cin >> dimes;
    cout << "Enter the amount of nickels" << endl;
    cin >> nickels;
    cout << "Enter the amount of pennies" << endl;    
    cin >> pennies;
    
    
    // output if the player won or not
    if (quarters * .25 + dimes * .1 + nickels * .05 + pennies * .01 == 1){
        cout << "you won!";
    }
        else  if (quarters * .25 + dimes * .1 + nickels * .05 + pennies * .01 < 1){
        cout << "you lose! That is less than one dollar!";
        }
            else if (quarters * .25 + dimes * .1 + nickels * .05 + pennies * .01 > 1){
        cout << "you lose! That is more than one dollar!";
            }  
    
    
    
    
    
    
    
    
    
    return 0;
}

