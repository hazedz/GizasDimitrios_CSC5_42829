/* 
 * File:   main.cpp
 * Author: Dimitrios Gizas
 *Created on May 11th, 2016 8:19am
 * Purpose: Grading Program
 */

//system Libraries
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

//User Libraries
  
//Global Constants 
  
//Function Prototypes 
void prntAry(char [], int , int);
int rdFile(char [], char []);
int score (char [], int, char [], int );

//Execution Begins Here!
  
       
int main(int argc, char** argv) {

    //declare variables 
    const int SIZE=100;
    char answers[SIZE];
    char user[SIZE];
    
    //open the file
    char fnAns[] = "AnswerKey.dat";
    int nAnswers = rdFile(fnAns,answers);
    char fnUsr[] = "UserAnswers.dat";
    int nUser = rdFile(fnUsr,user);

    
    //Print the Array
    cout <<"The Answer Key" << endl;
    prntAry(answers, nAnswers, 10);
    cout <<"The User's Answers" << endl;
    prntAry(user, nUser, 10);
    
    //Calculate the results 
    int results = score(answers, nAnswers, user, nUser);
    cout << "Score = " << results << " right -> "
            << 1.0f*results/nAnswers*100 << "%" << endl;
    
   
    return 0;
}

int score (char a[], int nA, 
        char u[], int nU){
    //Calculate the results
        int results = 0;
    for (int ques=0; ques<nA&&ques<nU;ques++){
        if(a[ques]==u[ques])results++;
    }
        return results;

}

    void prntAry(char a[], int nInA, int perLine){
        //loop and output the array
        cout << endl;
        for (int i = 0; i < nInA;i++){
            cout <<a[i] << " ";
            if(i%perLine == (perLine-1))cout << endl;
        }
    }
    
int rdFile(char fn[], char dat[]){

    //declare variables 
    ifstream ansKey;
    
    //open the file
    ansKey.open (fn);
    
    //read from the file
    int n=0;
    while(ansKey>>dat[n]){
        n++;
    }
    
    //Close the file 
    ansKey.close();
    
    //return the size
    return n;
}

