/* 
 * File:   main.cpp
 * Author: Dimtirios Gizas 
 * Created on March 16, 2016, 9:19 AM
 * purpose : 
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables
    float payRate,hrsWrkd,payChk;
    float ovrTime=40;//Where overtime begins
    
    //Input Values
    cout<<"Input Pay Rate ($'s/hr) and Hours Worked both dd.dd  format"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Map the Inputs to the outputs
    if(hrsWrkd <= ovrTime)payChk=hrsWrkd*payRate;
    if(hrsWrkd > ovrTime)payChk=hrsWrkd*payRate+(hrsWrkd-ovrTime)*payRate;
    if(hrsWrkd < 0 || hrsWrkd > 98) payChk = 0 
            
    //Output the results
    cout<<"Paycheck = $"<<payChk<<" for "
            <<hrsWrkd<<" hours worked @ $"<<payRate<<"/hr"<<endl;
    
    return 0;
}

