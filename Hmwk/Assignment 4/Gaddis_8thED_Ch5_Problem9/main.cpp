/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Created on April 4, 2016, 1:27 PM
 * Purpose: Hotel Occupancy
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables
    int floor, eachR, totalR, occupiedR, totalOR, unoccupiedR, totalUNR, i;
    float perc;
  
    
    totalR = 0;
    
    //Input Variables
    cout<<"How many floors the hotel has? ";
    cin>>floor;

    //Output Results
    for(i=1;i<=floor;i++)
    {
        if(i==13)
        {
            cout<<"Sorry, no Thirteenth Floor."<<endl;
        }
        else
        {
            cout << "How many rooms on the floor " << i <<" ?" << endl;
            cin >> eachR;
            cout << "How many rooms are occupied? " << endl;
            cin >> occupiedR;
                totalR = totalR + eachR;
                totalOR = totalOR + occupiedR;
                unoccupiedR = totalR - totalOR;
                totalUNR = totalUNR + unoccupiedR;
            
            
        }
    }
    perc = static_cast<float> (totalOR) / totalR;
    cout << "This hotel has " << totalR << " rooms." << endl;
    cout << "There are " << totalOR <<" occupied rooms." << endl;
    cout << "The occupation rate is " << (perc*100) <<"%" << endl;
    return 0; 
}
