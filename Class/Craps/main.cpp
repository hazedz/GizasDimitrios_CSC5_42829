/* 
 * File:   main.cpp
 * Author: Dimtirios Gizas 
 * Created on April 27th, 2016, 8:05 AM
 * purpose : Play the game of Craps 
 */

#include <iostream>//I/O
#include <cstdlib>//Rand and Set Random
#include <ctime>  //Utilize time to set the seed 


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //set the random number seed for variability
    srand (static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned int nThrows = 0, mxThrw = 0;
    unsigned short nGames = 36000;
    unsigned short win=0, lose=0;
    
    //Throw the Dice
    for(unsigned short game = 1; game <= nGames; game++){
    //Randomly generate the throw and the sum
        unsigned short die1 = rand() % 6 + 1; //[1,6]
        unsigned short die2 = rand() % 6 + 1; //[1,6]
        unsigned short sumDie = die1 + die2;  //[2,12]
        unsigned char cntThrw = 1;
        nThrows++;
        if(sumDie == 7 || sumDie == 11)win++;
        else if (sumDie == 2 || sumDie == 3 || sumDie == 12)lose++;
        else{
            //Declare Variables to end game
            bool thrwAgn = true;
            do{ 
                //Randomly generate the throw and the sum
                unsigned short die1 = rand() % 6 + 1; //[1,6]
                unsigned short die2 = rand() % 6 + 1; //[1,6]
                unsigned short sumDie2 = die1 + die2;  //[2,12]
                nThrows++;
                cntThrw++;
                if (mxThrw < cntThrw)mxThrw=cntThrw;
                if (sumDie == sumDie2){
                    win++;
                    thrwAgn=!thrwAgn;
                }
                else if (sumDie2 == 7){
                lose++;
                thrwAgn=!thrwAgn;
                }              
            }while(thrwAgn);
        } 
    }
 
  //output the results 
    cout << "The total number of Crap Games played = " << nGames << endl;
    cout << "Number of wins = " << win << endl;
    cout << "Number of loses = " << lose << endl;
    cout << "The total games = " << (win+lose) << endl;
    cout << "Percentage wins = " << 100.0f*win / nGames << "%" << endl;
    cout << "Percentage loses = " << 100.0f*lose / nGames << "%" << endl;
    cout << "The average throws per game = " << nThrows / nGames << endl;
    cout << "The Maximum number of throws in a game = " << mxThrw <<  endl; 
    
    return 0;
}
