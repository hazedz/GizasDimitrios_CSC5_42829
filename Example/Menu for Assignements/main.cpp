/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Purpose: Menu for Assignments 
 * Created on March 28, 2016, 10:04 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare the loop variable
    int choice;
    //General Menu Format
    do{
        //Display the selection
        cout<<"Type 1 "<<endl;
        cout<<"Type 2 "<<endl;
        cout<<"Type 3 "<<endl;
        cout<<"Type 4 "<<endl;
        cout<<"Type 5 "<<endl;
        cout<<"Type 6 "<<endl;
        cout<<"Type 7 "<<endl;
        cout<<"Type 8 "<<endl;
        cout<<"Type 9 "<<endl;
        cout<<"Type 10 "<<endl;
        
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
                case 1:{
                    
                    break;
                }
                case 2:{
                    
                    break;
                }
                case 3:{
                   
                    break;
                }
                case 4:{
                   
                    break;
                }
                case 5:{
                   
                    break;
                }
                case 6:{
                   
                    break;
                }
                case 7:{
                   
                    break;
                }
                case 8:{
                   
                    break;
                }
                case 9:{
                   
                    break;
                }
                case 10:{
                   
                    break;
                }
                
                default:{
                        cout<<"Exit?"<<endl;
                }
        };
    }while(choice <= 10  );   
    return 0;
}