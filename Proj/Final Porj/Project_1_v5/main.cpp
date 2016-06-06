/* 
 * File:   main.cpp
 * Author: Dimtirios Gizas 
 * Created on June 1st, 2016, 10:52 AM
 * Purpose : PROJECT 2: BOSS BATTLE Improved
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
    void BossBM(int, int, int, int, int,const int, int[]);
    void BossBK(int, int, int, int, int,const int, int[]);
//Execution Starts Here
int main(int argc, char** argv) {
    //Set up random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables 
    int d8, md8; //Dice roll for the player and boss
    int roll; //To roll the dice 
    const int SIZE = 12;
    int array [SIZE] = {91, 111, 143, 73, 98, 164, 21, 43, 55, 19, 38, 45};
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
        case 4 : BossBM (BattleHP, healthM, d8, md8, healthB, SIZE, array); break;
        case 5 : BossBK (BattleHP, healthK, d8, md8, healthB, SIZE, array); break;
        default:{
            cout << "Exit" << endl;
        }
    };
    }while (chrChoice <= 3 );   
    return 0;
}
void mage (int healthM){

    cout << "" << endl;
    cout << "The Mage Class uses magic damage to the boss" << endl;
    cout << "When attacking the boss you deal 3 forms of spell damage " << endl;
    cout << "Light: 73" <<endl;
    cout << "Medium: 98" <<endl;
    cout << "Heavy: 164" <<endl;
    cout << "And each attack is multiplied by 3" << endl;
    cout << "The Mage's max stats are: " << endl;
    cout << "Health: " << healthM << endl;
    cout << "Now type in 2 to see Knight class or 3 to see the Boss' stats" << endl;
    cout << "Or if you want to pick this class type in 4" << endl;   
    return ;
}
void knight (int healthK) {

    cout << "" << endl;
    cout << "The Knight class use a sword" << endl;
    cout << "When attacking the boss you deal 3 forms of damage " << endl;
    cout << "Light: 91" <<endl;
    cout << "Medium: 111" <<endl;
    cout << "Heavy: 143" <<endl;
    cout << "And each attack is multiplied by 3" <<endl;
    cout << "The Knight's max stats are: " << endl;
    cout << "Health: " << healthK << endl;
    cout << "Now type in 1 to see Mage class or 3 to see the Boss' stats" << endl;
    cout << "Or if you want to pick this class type in 5" << endl;        

}

void boss (int healthB) {
    
    cout << "" << endl;
    cout << "The boss you will be face is named Iudex Gundyr" << endl;
    cout << "The boss uses a sword to attack to attack. " << endl;
    cout << "Depending on what class you choose he deals a certain amount of damage in forms of 3 attacks." << endl;
    cout << "The bosses max health is: " << healthB << endl;
    cout << "Now either type in 1 to see Mage class or 2 to see Knight class." << endl;
    cout << "Or type in 4 to pick the Mage class or 5 to pick the Knight class." << endl;       
} 
void BossBM (int BattleHP, int healthM, int d8, int md8, int healthB, const int SIZE, int array[]){
    
    //Declare Variables
    char start;
    int damageB;
    BattleHP = healthM;
   
    //Stating and Asking if you want to start
    cout << "You selected the Mage Class and the battle now begins." << endl;
    cout << "BOSS: Index Gunyr" << endl;
    cout << "Heath: " << healthB << endl;
    cout <<""
         <<""<<endl;
    cout << "YOUR CLASS: Mage" << endl;
    cout << "Health : " << BattleHP << endl;
    cout << "Now to start the fight" << endl;

    //Boss Battle
    while(healthB > 0 && BattleHP > 0){
    srand(static_cast<unsigned int>(time(0)));
    d8 = rand()%8+1;
    md8 = rand()%8+1; 
    cout << "Press x to roll to attack." << endl;
    cin >> start;
      
    if (d8 <= 2){
     cout << "You Miss your attack " << endl;
    }
             else if (d8 <= 4){
                 damageB = array[3]*3;
                 healthB = healthB - damageB;
             cout << "You did " << damageB <<  endl;
             }
             else if (d8 <= 6){
                 damageB = array[4]*3;
                 healthB = healthB - damageB;
             cout << "You did " << damageB << endl;
             }
             else if (d8 <= 8){
                 damageB = array[5]*3;
                 healthB = healthB - damageB;
             cout << "You did " << damageB << endl;
             }   
    cout << healthB << " Boss HP" << endl;
    cout << BattleHP << " Your HP" << endl;
    
        if (healthB <= 0){
        cout << "Congratulations you beat the boss." << endl; 
        return;
        }
        else if (BattleHP <= 0){
            cout << "You lost game over." << endl;
            return;
        }
    
    cout << "Press x to roll for the bosses attack." << endl;
    cin >> start;    
    if (md8 <= 2){      
         cout << "The boss missed his attack " << endl;
    }

             else if (md8 <= 4){
                 damageB = array[9]*3;
                 BattleHP = BattleHP - damageB;
             cout << "He did " << damageB <<  endl;
             }
             else if (md8 <= 6){
                 damageB = array[10]*3;
                 BattleHP = BattleHP - damageB;
             cout << "He did " << damageB << endl;
             }
             else if (md8 <= 8){
                 damageB = array[11]*3;
                 BattleHP = BattleHP - damageB;
             cout << "He did " << damageB << endl;
             }   
    cout << healthB << " Boss HP" << endl;
    cout << BattleHP << " Your HP" << endl;
    
        if (healthB <= 0){
        cout << "Congratulations you beat the boss." << endl; 
        return;
        }
        else if (BattleHP <= 0){
            cout << "You lost game over." << endl;
            return;
        }       
    }
}

void BossBK (int BattleHP, int healthK, int d8, int md8, int healthB, const int SIZE, int array[]){
    
    //Declare Variables
    char start;
    int damageB;
    BattleHP = healthK;
  
    //Stating and Asking if you want to start
    cout << "You selected the Mage Class and the battle now begins." << endl;
    cout << "BOSS: Index Gunyr" << endl;
    cout << "Heath: " << healthB << endl;
    cout <<""
         <<""<<endl;
    cout << "YOUR CLASS: Knight" << endl;
    cout << "Health : " << BattleHP << endl;
    cout << "Now to start the fight" << endl;

    //Boss Battle
    while(healthB > 0 && BattleHP > 0){
    srand(static_cast<unsigned int>(time(0)));
    d8 = rand()%8+1;
    md8 = rand()%8+1;    
    cout << "Press x to roll to attack." << endl;
    cin >> start;
       
    if (d8 <= 2){           
     cout << "You Miss your attack " << endl;
    }
             else if (d8 <= 4){
                 damageB = array[0]*3;
                 healthB = healthB - damageB;
             cout << "You did " << damageB <<  endl;
             }
             else if (d8 <= 6){
                 damageB = array[1]*3;
                 healthB = healthB - damageB;
             cout << "You did " << damageB << endl;
             }
             else if (d8 <= 8){
                 damageB = array[2]*3;
                 healthB = healthB - damageB;
             cout << "You did " << damageB << endl;
             }   
    cout << healthB << " Boss HP" << endl;
    cout << BattleHP << " Your HP" << endl;
    
        if (healthB <= 0){
        cout << "Congratulations you beat the boss." << endl; 
        return;
        }
        else if (BattleHP <= 0){
            cout << "You lost game over." << endl;
            return;
        }
    
    cout << "Press x to roll for the bosses attack." << endl;
    cin >> start;
       
    if (md8 <= 2){           
     cout << "The boss missed his attack " << endl;
    }
             else if (md8 <= 4){
                 damageB = array[6]*3;
                 BattleHP = BattleHP - damageB;
             cout << "He did " << damageB <<  endl;
             }
             else if (md8 <= 6){
                 damageB = array[7]*3;
                 BattleHP = BattleHP - damageB;
             cout << "He did " << damageB << endl;
             }
             else if (md8 <= 8){
                 damageB = array[8]*3;
                 BattleHP = BattleHP - damageB;
             cout << "He did " << damageB << endl;
             }    
    cout << healthB << " Boss HP" << endl;
    cout << BattleHP << " Your HP" << endl;
    
        if (healthB <= 0){
        cout << "Congratulations you beat the boss." << endl; 
        return;
        }
        else if (BattleHP <= 0){
            cout << "You lost game over." << endl;
            return;
        }        
    }
}