#include <string>
#include <iostream>
#include <cmath>
using namespace std;





//Print the roullette table into players terminal
void RouletteTable(){

    cout << endl << endl << endl;
    cout << " _____________________________ "
        << "\n|              ___            |"  
        << "\n|             |   |           |"
        << "\n|             |   |           |"
        << "\n|             |___|           |"
        << "\n|                             |"        
        << "\n|_____________________________|_________ "
        << "\n|         |         |         |         |"  
        << "\n|    1    |    2    |    3    |  *LOW*  |"
        << "\n|         |         |         |         |" 
        << "\n|_________|_________|_________|  1 - 18 |"
        << "\n|         |         |         |         |            ________________"  
        << "\n|    4    |    5    |    6    |         |           /   The Wheel.   \\"
        << "\n|         |         |         |         |          /  ______________  \\" 
        << "\n|_________|_________|_________|_________|         |  |              |  |"
        << "\n|         |         |         |         |         |  |              |  |"  
        << "\n|    7    |    8    |    9    | *EVEN*  |         |  |______________|  |"
        << "\n|         |         |         |         |         |   ______________   |" 
        << "\n|_________|_________|_________|         |         |  |              |  |"
        << "\n|         |         |         |         |         |  |              |  |"  
        << "\n|    10   |    11   |    12   |         |         |  |______________|  |"
        << "\n|         |         |         |         |         |                    |"  
        << "\n|_________|_________|_________|_________|          \\   Total $        /"
        << "\n|         |         |         |         |           \\________________/"  
        << "\n|    13   |    14   |    15   |  *RED*  |"
        << "\n|         |         |         |         |" 
        << "\n|_________|_________|_________|         |"
        << "\n|         |         |         |         |"  
        << "\n|    16   |    17   |    18   |         |"
        << "\n|         |         |         |         |" 
        << "\n|_________|_________|_________|_________|"
        << "\n|         |         |         |         |"  
        << "\n|    19   |    20   |    21   | *BLACK* |"
        << "\n|         |         |         |         |" 
        << "\n|_________|_________|_________|         |"
        << "\n|         |         |         |         |"  
        << "\n|    22   |    23   |    24   |         |"
        << "\n|         |         |         |         |" 
        << "\n|_________|_________|_________|_________|"
        << "\n|         |         |         |         |"  
        << "\n|    25   |    26   |    27   |  *ODD*  |"
        << "\n|         |         |         |         |" 
        << "\n|_________|_________|_________|         |"
        << "\n|         |         |         |         |"  
        << "\n|    28   |    29   |    30   |         |"
        << "\n|         |         |         |         |" 
        << "\n|_________|_________|_________|_________|"
        << "\n|         |         |         |         |"  
        << "\n|    31   |    32   |    33   | *HIGH*  |"
        << "\n|         |         |         |         |" 
        << "\n|_________|_________|_________| 19 - 36 |"
        << "\n|         |         |         |         |"  
        << "\n|    34   |    35   |    36   |         |"
        << "\n|         |         |         |         |" 
        << "\n|_________|_________|_________|_________|"
        << "\n|   2:1   |   2:1   |   2:1   |"
        << "\n|_________|_________|_________|";
}

void RouletteMenu(){

    cout << "Hello and welcome to Roulette!" << endl << endl;
    cout << "Please choose from the menu below." << endl;
    cout << "-------------------------------------" << endl;
    cout << "| 1. Get to spinning!        2. Quit|" << endl;
    cout << "-------------------------------------" << endl << endl; 
}

int getPlayerChoice(){
    
    int playerChoice;
    cout << "Would you like to spin again (1) or quit for now (2)?" << endl;
    cin >> playerChoice;
    return playerChoice;

}

//returns true or false depending if player wants to play the game
bool RouletteGame(int gameChoice){

       char rouletteChoice = " ";


    
        while(gameChoice == 1){

        cout << "You have " << playerMoneyAmount << "'s!";

        
            cout << "Welcome to Roulette, test your evenly spaced luck on this spinning wheel!" << endl;
            cout << "What do you want to bet on: " << endl << endl;
            cout << "Choices: " << endl;
            cout << "- Choose a number displayed on the board." <<endl;
            cout << "- Choose between black [B] or white [W]." << endl;
            cout << "- Choose between even [E] or odd [O]." << endl;
            cout << "- Choose between low [L] or high [H]." << endl;

            
            RouletteTable();





            


            


            



        
    }

}





int main(){


    int gameChoice = 0;
    float playerMoneyAmount = 50;

    RouletteMenu();

    



    
    
    



    return 0;
}
