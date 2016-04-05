/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on April 4, 2016, 1:27 PM
 * Purpose: Average Rainfall
 */
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

      // Declare Variables
    int year, month, monthT, count;
    float rainf, rainfT, rainAvg;
    // Prompt
    cout << "How many years do you want to calculate rainfall data for? ";
    cin  >> year;
    
    // Year input 
    while(year < 1){
        cout << "That is not a valid input!" << endl << "Input a positive number: ";
        cin  >> year;
    }
    
    // Calculate
    monthT = year * 12;                    
    count = 0;
    while (year > 0){
       
        count++;
        month = 0;
        cout << "Year " << count << "!" << endl;
        while (month < 12){
            month++;
            
                
            cout << "What was the average rain fall for month " << month 
                 << " of year " << count << "? ";
            cin  >> rainf;
            // Input 
            while(rainf < 1){
        cout << "That is not a valid input!" << endl << "Input a positive number: ";
        cin  >> rainf;
            }
            rainfT += rainf;
        if (month == 12){
                month++;
            }
        };
        year--;
    };
    // Calculate
    rainAvg = rainfT / monthT;
    // Output   
    cout << "In " << monthT << " months it rained a total of " << rainfT
         << " inches." << endl << "The average rainfall per month is "
         << rainAvg;
    return 0;
}
