/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 *Created on March 28th, 2016 8:12am
 * Purpose: To Illustrate rule of 72 by way of a while loop
 */

//system Libraries

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//User Libraries
  
//Global Constants 
  
//Function Prototypes 
float save1 (float, float, int);
float save2 (float, float, int);
float save3 (float, float, int);
float save4 (float, float, int);
float save5 (float, float, int=9);
float save1 (float, float, float);
int   save6 (float &, float, float, int);


//Execution Begins Here!
  
       
int main(int argc, char** argv) {

    //declare variables 
    float pv = 100.0f;//present value
    float iRate = 0.08f;
    float nComp=9; //Number of compounding periods by rule of 72
    
    //Output the initial conditions and setup the table 
    cout << "Present value = $" << pv << endl;
    cout << "Interest rate = " << iRate * 100 << "%" << endl;
    cout << "Number if Compounding periods = " << nComp << " years" << endl;
    
    
    
    
    //Output the results
   
    cout << fixed << setprecision(2) << showpoint;
    cout << "The Future Value = $" << save1(pv, iRate, nComp) << endl;
    cout << "The Future Value = $" << save2(pv, iRate, nComp) << endl;
    cout << "The Future Value = $" << save3(pv, iRate, nComp) << endl;
    cout << "The Future Value = $" << save4(pv, iRate, nComp) << endl;
    cout << "The Future Value = $" << save5(pv, iRate, nComp) << endl;
    cout << "The Future Value = $" << save1 (pv, iRate, static_cast<float>(nComp)) << endl;
    float fv; 
    save6(fv, pv, iRate, nComp);
    save6(fv, pv, iRate, nComp);
    cout << "The Future Value = $"<< fv << endl;
    cout<<"Number of times save 6 was called = "<<save6(fv,pv,iRate,nComp)<<endl;
    
   
    return 0;
}

//Inputs
//  p->Present value $'s
//  i->Interst rate %
//  n->Number of compounding periods years
//Outputs
//  fv->Future Value in $'s
int save6(float &fv,float p,float i,int n){
    //Declare variables
    static int count=0;
    fv=p;
    //Loop on the number 
    for(int years=1;years<=n;years++){
        fv*=(1+i);
    }
    //Return how many times the function has been called
    return ++count;
}

//Inputs
//  p->Present value $'s
//  i->Interst rate %
//  n->Number of compounding periods years
//Outputs
//  fv->Future Value in $'s
float save1(float p,float i,float n){
    return p*pow(1+i,n);
}

//Inputs
//  p->Present value $'s
//  i->Interst rate %
//  n->Number of compounding periods years
//Outputs
//  fv->Future Value in $'s
float save5(float p,float i,int n){
    //Declare variables
    if(n<1)return p;
    //Loop on the number 
    return save4(p,i,n-1)*(1+i);
}

//Inputs
//  p->Present value $'s
//  i->Interst rate %
//  n->Number of compounding periods years
//Outputs
//  fv->Future Value in $'s
float save4(float p,float i,int n){
    //Declare variables
    if(n<1)return p;
    //Loop on the number 
    return save4(p,i,n-1)*(1+i);
}

//Inputs
//  p->Present value $'s
//  i->Interst rate %
//  n->Number of compounding periods years
//Outputs
//  fv->Future Value in $'s
float save3(float p,float i,int n){
    //Declare variables
    float fv=p;
    //Loop on the number 
    for(int years=1;years<=n;years++){
        fv*=(1+i);
    }
    return fv;
}

//Inputs
//  p->Present value $'s
//  i->Interst rate %
//  n->Number of compounding periods years
//Outputs
//  fv->Future Value in $'s
float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

//Inputs
//  p->Present value $'s
//  i->Interst rate %
//  n->Number of compounding periods years
//Outputs
//  fv->Future Value in $'s
float save1(float p,float i,int n){
    return p*pow(1+i,n);
}