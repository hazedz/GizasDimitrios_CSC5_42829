/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on February 17, 2016, 9:45 AM
 * Purpose: Our First Program 
 */

//system Libraries
#include <cstdlib>
#include <iostream>
       
int main(int argc, char** argv) {

    //Declare variables 
    float payRate, hrsWrkd, payChk;
    float ovrTime = 40; //Where overtime begins 
    
    //Input Values 
    cout << "Input Pay Rate ($'s?hr) and Hours Worked both dd.dd format" << endl;
    cin >> payRate >> hrsWrkd;
    
    
    //Map the Inputs to the outputs 
    if(hrsWrkd <= ovrTime)payChk = hrsWrkd * payRate;
    if(hrsWrkd > ovrTime)payChk = hrsWrkd * payRate + (hrsWrkd - ovrTime) * payRate;
    
    
    //Output the results 
    cout << "Paycheck = $" << payChk << "for"
            << hrsWrkd << "hours @ $" << payRate << "/hr" << endl;
    
    //exit Stage Right! 
    return 0;
}

