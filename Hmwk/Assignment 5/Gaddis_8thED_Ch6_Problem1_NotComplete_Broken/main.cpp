/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on April 25, 2016, 9:46 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;
//User Libraries
  
//Global Constants 
  
//Function Prototypes 
float calculateRetail (float, float);

//Execution Begins Here!
  
  
int main(int argc, char** argv) {

    //declare variables 
    float wholeC, markUP;
    cout << "Please enter the item's wholesale cost." << endl;
    cin >> wholeC;
    cout << "Now enter the markup price." << endl;
    cin >> markUP;
    
    cout << "The items retail price should be: " << calculateRetail(wholeC, markUP) <<endl;
    
    
    
    
    
     
    
    
    return 0;
}




//Inputs
// wc -> Wholesale Cost 
// mup-> Mark Up Price 
//  
//Outputs
//  
float calculateRetail(float wc,float mup){
    if (wc < 1) return mup;
    return mup
    
}





















