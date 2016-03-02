/* 
 * File:   main.cpp
 * Author: Dimitros Gizas
 * Purpose: Calculate and Compare tax
 * Created on March 2, 2016, 10:25 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries
  
//Global Constants 
  
//Function Prototypes 

//Execution
int main(int argc, char** argv) {

    // Input Variables 
    float usT ,irT , googR, googS, googUS, googIR;
    
    //usT    = Tax the United States take 
    //irT    = Tax that Ireland takes 
    //googR  = The revenue that Google made
    //googS  = Amount they could of saved by moving to Ireland 
    //googUS = The amount they would make in the US
    //googIR = The amount they would make in Ireland
    
    
    
    googR  = 18.7e9;
    
    usT    = .4;
   
    irT    = .125;
    
    googUS = googR * usT;
    
    googIR = googR * irT;
    
    googS  = googUS - googIR;
    
   
    cout << "The amount that US tax takes from Google is " << googUS 
            << endl;
    
    cout << "The amount that Ireland tax takes from Google is "  << googIR 
            << endl;
    cout << "The amount that Google would save if they moved to Ireland is " << 
            googS << endl;

    return 0;
}

