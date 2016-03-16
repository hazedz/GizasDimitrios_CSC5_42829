/* 
 * File:   main.cpp
 * Author: Dimtirios Gizas 
 * Created on March 16, 2016, 9:19 AM
 * purpose : dependent if 
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
    if(hrsWrkd < 0){
        payChk = 0;
    }else if (hrsWrkd <= ovrTime){
        payChk = hrsWrkd * payRate;
}else if(hrsWrkd > ovrTime){
        payChk=hrsWrkd*payRate+(hrsWrkd-ovrTime)*payRate;
    }else{
        payChk = 0;
    }
   
    //Output the results
    cout<<"Paycheck = $"<<payChk<<" for "
            <<hrsWrkd<<" hours worked @ $"<<payRate<<"/hr"<<endl;
    
    return 0;
}

