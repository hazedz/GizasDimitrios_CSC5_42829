/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on March 28, 2016, 7:25 PM
 * Purpose: Book Club Points
 */

#include <iostream>

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {

    // Declare Variables
    float books, points;

    // Prompt
    cout << "How many books did you buy this month?" << endl;
    cin  >> books;
    
    // Output
    cout << "You earned ";
    
    // Determine points earned
    if (books == 1){
        cout << "5 Points!";
    }
    else if (books == 2){
        cout << "15 Points!";
    }
    else if (books == 3){
        cout << "30 Points!";
    }
    else if (books >= 4){
        cout << "60 Points!";
    }
    else {
        cout << "0 Points!";
    }
   
    return 0;
}

