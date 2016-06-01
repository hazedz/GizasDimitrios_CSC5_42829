/* 
 * File:   main.cpp
 * Author: Dimtirios Gizas 
 * Created on May 1st, 2016, 10:52 AM
 * Purpose : PROJECT 1: BOSS BATTLE 
 */
//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
//User Libraries

//Global Constants

//Function Prototype
    void boss(int); 
    void mage(int);
    void knight(int); 
    void BossBM(int, int, int);
    void BossBK(int, int, int);
//Execution Starts Here
int main(int argc, char** argv) {
    //Set up random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables 
    
    int chrChoice; // Pick 1 or 2 to pick class 
    char strChoice;// To start game or end
    int healthM = 400; //The mage's max health
    int healthK = 500; //the knight's max health
    int healthB = 1000;  //the boss' max health 
    int BattleHP;
     
    cout << "This game is a boss battle." << endl; 
    
    cout << "If you want to start the game, press any key and hit enter." << endl;
    cout << "If you don't want to start press n to quit the game." << endl; 
    cin >> strChoice; // To start the game or to quit it before playing.
    
    if (strChoice == 'n'){
        cout << "You have ended the game" << endl; 
        return 0;
    } 
    cout << "Before the game can start you know need to pick a class" << endl;
    cout << "To see the Mage class stats enter 1" << endl;
    cout << "To see the Knight Class stats enter 2" << endl;
    cout << "If you want to see the stats of the boss enter 3" << endl;
    cout << "To pick the Mage class for the battle enter 4" << endl;
    cout << "To pick the Knight class for the battle enter 5" << endl;
    do{
    cin >> chrChoice;
    
    switch(chrChoice){
        case 1 : mage(healthM); break;
        case 2 : knight(healthK); break;
        case 3 : boss(healthB); break;
        case 4 : BossBM (BattleHP, healthM, healthB); break;
        case 5 : BossBK (BattleHP, healthK, healthB); break;
        default:{
            cout << "Exit" << endl;
        }
    };
    }while (chrChoice <= 3 );   
    return 0;
}
void mage (int healthM){

    cout << "The Mage Class uses magic damage to the boss" << endl;
    cout << "The Mage's max stats are: " << endl;
    cout << "Health: " << healthM << endl;
    return ;
}
void knight (int healthK) {

    cout << "The Knight class use a sword" << endl;
    cout << "The Knight's max stats are: " << endl;
    cout << "Health: " << healthK << endl;
}

void boss (int healthB) {
    
    cout << "The boss you will be face is named Iudex Gundyr" << endl;
    cout << "The boss uses a sword to attack and does not use an type of resource to attack. " << endl;
    cout << "The bosses max health is: " << healthB << endl; 
} 
void BossBM (int BattleHP, int healthM, int healthB){
    //Declare Variables
    char start;
    BattleHP = healthM;
   //Stating and Asking if you want to start
    cout << "You selected the Mage Class and the battle now begins." << endl;
    cout << "BOSS: Index Gunyr" << endl;
    cout << "Heath: " << healthB << endl;
    cout <<""
         <<""<<endl;
    cout << "YOUR CLASS: Mage" << endl;
    cout << "Health : " << BattleHP << endl;
    cout << "Press x to start fight." << endl;
    cin >> start;
    //Boss Battle
        while(healthB > 0 && BattleHP > 0)
    {

        int damageC = rand()%125+50;
        healthB = healthB -damageC;
        
        cout <<"You send a magic spell at the boss dealing "<< damageC <<" point of damage."<<endl;
        cout << "The Boss' current HP is " << healthB << endl;

        int damageB = rand()%25+30;
        BattleHP = BattleHP-damageB;
        cout << "Boss attacked you for " << damageB << " damage."<<endl;
        cout << "The Mage's current HP is " << BattleHP << endl;
        cout << endl;
        }if (healthB <= 0 && BattleHP > 0) {
            cout << "Congratulations you beat the boss." << endl;
        }else if (healthB > 0 && BattleHP <= 0) {
            cout << "You have died." << endl;
            cout <<   "GAME OVER" << endl;
        
        }else if (healthB <= 0 && BattleHP <= 0){
            cout << "Draw" << endl;
            cout << "GAME OVER" << endl;
        } 

}

void BossBK (int BattleHP, int healthK, int healthB){
    //Declare Variables
    char start;
    BattleHP = healthK;
   //Stating and Asking if you want to start
    cout << "You selected the Mage Class and the battle now begins." << endl;
    cout << "BOSS: Index Gunyr" << endl;
    cout << "Heath: " << healthB << endl;
    cout <<""
         <<""<<endl;
    cout << "YOUR CLASS: Knight" << endl;
    cout << "Health : " << BattleHP << endl;
    cout << "Press x to start fight." << endl;
    cin >> start;
    //Boss Battle
        while(healthB > 0 && BattleHP > 0)
    {

        int damageC = rand()%125+50;
        healthB = healthB -damageC;
        
        cout <<"You swing your sword at the boss and deal "<< damageC <<" points of damage."<<endl;
        cout << "The Boss' current HP is " << healthB << endl;

        int damageB = rand()%35+30;
        BattleHP = BattleHP-damageB;
        cout << "Boss attacked you for " << damageB << " damage."<<endl;
        cout << "The Knight's current HP is " << BattleHP << endl;
        cout << endl;
        }if (healthB <= 0 && BattleHP > 0) {
            cout << "Congratulations you beat the boss." << endl;
        }else if (healthB > 0 && BattleHP <= 0) {
            cout << "You have died." << endl;
            cout <<   "GAME OVER" << endl;
        
        }else if (healthB <= 0 && BattleHP <= 0){
            cout << "Draw" << endl;
            cout << "GAME OVER" << endl;
        } 
}