/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 * Purpose: Menu for Assignments 
 * Created on April 4, 2016, 12:32 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
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
        cout << endl;
        cout <<"Type 1 Gaddis Chapter 5 problem 1"<<endl;
        cout <<"Type 2 Gaddis Chapter 5 problem 2"<<endl;
        cout <<"Type 3 Gaddis Chapter 5 problem 3"<<endl;
        cout <<"Type 4 Gaddis Chapter 5 problem 4"<<endl;
        cout <<"Type 5 Gaddis Chapter 5 problem 5"<<endl;
        cout <<"Type 6 Gaddis Chapter 5 problem 6"<<endl;
        cout <<"Type 7 Gaddis Chapter 5 problem 7"<<endl;
        cout <<"Type 8 Gaddis Chapter 5 problem 9"<<endl;
        cout <<"Type 9 Gaddis Chapter 5 problem 10"<<endl;
        cout <<"Type 10 Gaddis Chapter 5 problem 12"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
                case 1:{
                     
    //Declare Variables
    int num, sum, i;
    
    //User Input
    cout << "Enter a number to find the sum of numbers (Up to 50)" << endl;
    cin >> num;
    
   //Output
    for (i = 1; i <= num ; i++){
        sum = sum + i;
      cout << "The sum of numbers for " << num << " is: " << sum << endl;       
    }
    
                    break;
                }
                case 2:{
                    
    //Declare Variables
    char character;
    int i;
    
    cout << "This program will display the characters for ASCII codes from 0 to 172" << endl;
    
    character = 0;
    
    //Output
    for(i = 0; i <= 127; i++){
        if (i % 16 ==0)
            cout << endl;
        
        cout << character << "    ";
        character++;
    }
                    break;
                }
                case 3:{
                    
     //Declare Statements
    int num, maxY;
    float total, mm;
    
    //input
    mm = 1.5;
    maxY = 25;
            
    //output
    cout << "This will show the ocean rising each year for the next 25 years" << endl;
    cout << "Years           Millimeters" << endl;
    cout << "___________________________" << endl;
    
    for (num = 1;num <= maxY; num++){
        total = num * mm;
        
        cout << num << "\t\t" << total << endl; 
    }   
                    break;
                }
                case 4:{
                   
    //Declare Variables
    float min, cal, burn;
    
    cal = 3.6f;
    
    //Output Loop
    for (min=5; min <= 30; min+=5){
        burn = min*cal;
        cout << "You have lost: " << burn << " calories in " << min << " minutes"
                << endl;         
    }
                    
                    break;
                }
                case 5:{
                                       
        //Declare Variables
    float rate, yearChrg;
    int year;
    
    rate = 0.04;
    yearChrg = 2500;
    
    for (year=1; year <= 6; year++){
    
        yearChrg = yearChrg * ( 1+rate );
        cout << "In " << year << " years the yearly fee will become: $" 
                << fixed << setprecision (2)
                << yearChrg << endl;
     
    }
                    break;
                }
                case 6:{
                  
   //Declare Variables
    float time, distance, speed;
    int i;
    
    //input
    cout << "What is the speed of the vehicle in MPH?" << endl;
    cin >> speed;
    cout << "How many hours has is traveled?" << endl;
    cin >> time;
    
    //output
    cout << "Hour" << "\t" << "Distanced Traveled" << endl;
    
    for (i = 1; i <= time; i++){
        distance = i * speed;
        cout << i << "\t" << distance << endl;
    } 
                    break;
                }
                case 7:{
                    
    //Declare Variables
    int day, count;
    float money, total;
    
    money = .01;
    
    //user input
    cout << "You get paid on penny a day on day one and it doubles each day" << endl;
    cout << "Please enter the amount of days you worked." << endl;
    cin >> day;
      cout << "Day" << "\t" << "Amount Earned per Day" << endl;
      cout << "------------------------------" << endl;
    for (count = 1; count <= day; count++){
    
        total = money;
        money *= 2;
  

        cout << count << "\t" << total << endl;
   
    }
                    break;
                }
                case 8:{
                   
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
                    break;
                }
                case 9:{
                   
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
                    break;
                }
                case 10:{
                    
   //Declare Variables
    float degreeF, degreeC;
    degreeC = 1;
    
        cout << "Conversion From Celsius To Fahrenheit" << endl;
    cout << "Celsius" << "\t\t" << "Fahrenheit" << endl;
    
    do{
        degreeF = (1.8) * (degreeC) + 32;       
        cout << setw(4) << degreeC << setprecision(3) << "\t\t" << degreeF << endl; 
    }while( degreeC++, degreeC <= 20);
                    
                    break;
                }
                
                default:{
                        cout<<"Exit?"<<endl;
                }
        };
    }while(choice <= 10  );   
    return 0;
}