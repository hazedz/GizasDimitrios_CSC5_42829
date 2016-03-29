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
        cout << endl;
        cout <<"Type 1 Gaddis Chapter 4 problem 1"<<endl;
        cout <<"Type 2 Gaddis Chapter 4 problem 2"<<endl;
        cout <<"Type 3 Gaddis Chapter 4 problem 3"<<endl;
        cout <<"Type 4 Gaddis Chapter 4 problem 4"<<endl;
        cout <<"Type 5 Gaddis Chapter 4 problem 5"<<endl;
        cout <<"Type 6 Gaddis Chapter 4 problem 6"<<endl;
        cout <<"Type 7 Gaddis Chapter 4 problem 7"<<endl;
        cout <<"Type 8 Gaddis Chapter 4 problem 9"<<endl;
        cout <<"Type 9 Gaddis Chapter 4 problem 10"<<endl;
        cout <<"Type 10 Gaddis Chapter 4 problem 12"<<endl;
        
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
                case 1:{
                    //Declare variables 
                    int num1, num2;

                   //Asking for the 2 numbers 
                    cout << "Please type in your First number" << endl;
                    cin >> num1;

                    cout << "Please type in you Second number" << endl;
                    cin >> num2; 

                    //output results 
                    if (num1 > num2) cout << num1 << " is larger then " << num2;
                    if (num1 < num2) cout << num2 << " is larger then " << num1; 

                    break;
                }
                case 2:{
                    //Declare variables    
                    int num1;

                    //User input
                    cout << "Enter a number between 1 and 10 to convert it into Roman Numeral" 
                            << endl;
                    cin >> num1;

                    cout << "The Roman numeral form of the number " << num1 << " is " << endl;

                    //Output
                    switch (num1) {

                        case 1 : cout << "I" << endl;
                        break;
                        case 2 : cout << "II" << endl;
                        break;
                        case 3 : cout << "III" << endl;
                        break;
                        case 4 : cout << "IV" << endl;
                        break;
                        case 5 : cout << "V" << endl;
                        break;
                        case 6 : cout << "VI" << endl;
                        break;
                        case 7 : cout << "VII" << endl;
                        break;
                        case 8 : cout << "VIII" << endl;
                        break;
                        case 9 : cout << "IX" << endl;
                        break;
                        case 10 : cout << "X" << endl;
                        break;              
                    }
                    break;
                }
                case 3:{
                    //Declare Variables
                    int month, day, year;

                    //Prompt User to input values
                    cout << "Please enter a month, a day and a year ( MM DD YY format )to see if it is a magic date." << endl;
                    cout << "Month" << endl;
                    cin >> month;
                    cout << "Day" << endl;
                    cin >> day;
                    cout << "Year" << endl;
                    cin >> year;

                    // Check and output result
                    if (month * day == year){
                        cout << "It is a magic date";
                    }
                    else{
                        cout << "Not a magic date";
                    }
                    break;
                }
                case 4:{
                   //declare variables
                    float len1, len2, width1, width2, rect1, rect2;

                    //User input
                    cout << "Please enter the length and width of the first rectangle." << endl;
                    cin >> len1;
                    cin >> width1;

                    cout << "Please enter the length and width of the second rectangle." << endl;
                    cin >> len2;
                    cin >> width2;

                    //Calculations 
                    rect1 = len1 * width1;
                    rect2 = len2 * width2;

                    //Output
                    if (rect1 > rect2) 
                        cout << "Rectangle 1 has the greater area." << endl;
                    else if(rect1 < rect2) 
                        cout << "Rectangle 2 has the greater area." << endl;
                    else if (rect1 == rect2) 
                        cout << "Both have the same area." << endl;
                    break;
                }
                case 5:{
                       //Declare Variables
                        unsigned int weight, height;
                        float BMI;

                        //User input
                        cout << "Please enter your weight and height to find you Body Mass Index (BMI)" << endl;
                        cout << "Enter your weight in pounds" << endl;
                        cin >> weight;
                        cout << "Enter your height in inches" << endl;
                        cin >> height;

                        //Calculations
                        BMI = (weight * 703) / (height * height);

                        //Output
                        if (BMI >= 18.5 && BMI <= 25){
                            cout << "You are at optimal weight." << endl;
                        }
                        else if (BMI < 18.5){
                            cout << "You are underweight." << endl;
                        }
                        else if (BMI > 25){
                            cout << "You are overweight." << endl;
                        }
                    break;
                }
                case 6:{
                    //declare variables
                float mass, weight;

                //user input
                cout << "Enter the object's mass (kilograms): " << endl;
                cin >> mass;


                //calculation
                weight = mass * 9.8;

                //output
                if (weight > 1000)
                    cout << "Is too heavy." << endl;
                else if (weight < 10)
                    cout << "Is too light." << endl;
                else if (weight <= 1000 && weight >= 10)
                    cout << "Weight is OK." << endl;
                    break;
                }
                case 7:{
                //declare variables
                int sec;
                float convert;  

                //user input
                cout << "Enter a number of seconds to convert into minutes, hours, or days. " << endl;
                cin >> sec;

                //If statements - Output
                if (sec >= 86400){
                    convert = sec / 86400;
                    cout << sec << " converted into days: " << convert << " day(s)!"
                         << endl;
                }
                else if (sec >= 3600){
                    convert = sec / 3600;
                    cout << sec << " converted into hours: " << convert << " hour(s)!" 
                         << endl;
                }
                else if (sec >= 60){
                    convert = sec / 60;
                    cout << sec << " converted into minutes: " << convert << " minute(s)!" 
                         << endl;       
                }   
                    break;
                }
                case 8:{
                   // Declare Variables
                    int nickels, dimes, pennies, quarters;

                    // Prompt User
                    cout << "Time to play a game." << endl;
                    cout << "The goal is to make a dollar using change." << endl;
                    cout << "Enter the amount of quarters" << endl;
                    cin >> quarters;
                    cout << "Enter the amount of dimes" << endl;
                    cin >> dimes;
                    cout << "Enter the amount of nickels" << endl;
                    cin >> nickels;
                    cout << "Enter the amount of pennies" << endl;    
                    cin >> pennies;


                    // output if the player won or not
                    if (quarters * .25 + dimes * .1 + nickels * .05 + pennies * .01 == 1){
                        cout << "you won!";
                    }
                        else  if (quarters * .25 + dimes * .1 + nickels * .05 + pennies * .01 < 1){
                        cout << "you lose! That is less than one dollar!";
                        }
                            else if (quarters * .25 + dimes * .1 + nickels * .05 + pennies * .01 > 1){
                        cout << "you lose! That is more than one dollar!";
                            }
                    break;
                }
                case 9:{
                    //Declare Variables
                    int month, year;

                    //Prompt user for input
                    cout << "Enter a month and year to find the amount of days in that month" << endl;
                    cout << "Enter a month (1-12): ";
                    cin >> month;
                    cout << "Enter a year: ";
                    cin >> year;



                    //If statements - Output
                    if (month == 2){
                        if (year % 4 == 0)
                            cout << "29 Days";
                        else
                        cout << "28 Days";
                    }
                    else if (month == 1 || month == 3 || month == 5 || month == 7 || 
                        month == 8 || month == 10 || month == 12){
                        cout << "31 Days" << endl;
                    }
                    else if (month == 4 || month == 6 || month == 9 || month == 11){
                        cout << "30 Days" << endl;
                    }
                    break;
                }
                case 10:{
                   // Declare Variables
                    float books, points;

                    // Prompt
                    cout << "How many books did you buy this month?" << endl;
                    cin  >> books;

                    // Output
                    cout << "You earned ";

                    // Determine points earned
                    if (books == 1){
                        cout << "5 Points!";
                    }
                    else if (books == 2){
                        cout << "15 Points!";
                    }
                    else if (books == 3){
                        cout << "30 Points!";
                    }
                    else if (books >= 4){
                        cout << "60 Points!";
                    }
                    else {
                        cout << "0 Points!";
                    }
                    break;
                }
                
                default:{
                        cout<<"Exit?"<<endl;
                }
        };
    }while(choice <= 10  );   
    return 0;
}
