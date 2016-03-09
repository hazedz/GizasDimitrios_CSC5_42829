/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on March 9, 2016, 8:58 AM
 * Purpose: 
 */

//System Libraries 
#include <iostream>


using namespace std;
//user libraries

//global constants


//function prototype

//Execution
int main(int argc, char** argv) {

    //declared variables 
    const float percINC = .076;
    
    float OmSalary, OSalary, NSalary, NmSalary, Backpay, Months;
    int numb;
    
    //OmSalary = Old monthly salary
    //OSalary  = Old salary
    //NSalary  = New salary
    //NmSalary = New monthly salary 
    
    
    
    //input 
    cout << "What was your old salary " << endl;
    cin >> OSalary;
    
    cout << "How many works did you work with the old salary " << endl;
    cin >> numb;
    
            
    // Months person worked for 
    
    Months = 12 / numb;
    
    //Calculate Old month salary
    
    OmSalary = OSalary / 12;
    
    //Calculate New Salary
    
    NSalary = OSalary * (1 + percINC);
    
    //Calculate New Monthly Salary
    
    NmSalary = NSalary / 12; 
    
    //Calculate Back Pay 
    
    Backpay = (NSalary - OSalary) / Months;
    
    
    
    
    cout << "Old annual salary $" << OSalary << endl;
    cout << "Old monthly salary $" << OmSalary << endl;
    cout << "New annual salary $" << NSalary << endl;
    cout << "New monthly salary $" << NmSalary << endl;
    cout << "For working " << numb << " months under the old payment,"
            " you should receive $" << Backpay << " in back pay." << endl;
    
    
    
   
    //Output old annual
    //Output old monthly
    //Output new monthly
    //Output new annual salary
    //Output Back Pay
    
    
    
    
    
    return 0;
}

