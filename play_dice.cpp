/* 
Dylan Shu
Dice Game Code
Add your name here */
    
#include <iostream>
#include <cstdlib>  // contains the rand() and srand() function 
#include <ctime>    // time() function
using namespace std;


int main()
{
    srand(time(0)); // initialize random seed generator to current time: 
					// needed to generate a different sequence of random numbers
					// each time you run your program

    // Add your code to play the dice game here
    cout << "Welcome" << endl;
    char start_game; 
    cout << "Do you want to play? (Y/N) ";
    cin >> start_game;

    while(start_game == 'Y' || start_game == 'y')
  {
        int dice1 = rand() % 6+1,
            dice2 = rand() % 6+1;
        int sum_dice = dice1 + dice2;
        cout << "The sum of the dices are " << sum_dice << endl;
        if(sum_dice == 7 || sum_dice == 11)
            {
                cout << "You win!" << endl;
            }
        else if(sum_dice == 2 || sum_dice == 3 || sum_dice == 12)
            {
                cout << "You lose." << endl;
            }
        else
            {
                int point = sum_dice;
                cout << "Your point is " << point << endl;
                bool not_win = false;
                bool not_loss = false;
                while(not_win  && not_loss)
                {
                    int dice1 = rand() % 6+1,
                        dice2 = rand() % 6+1;
                    int sum_dice = dice1 + dice2;
                    cout << "You rolled " << sum_dice << " your point is " << point << endl;
                    if(sum_dice != point)
                    {
                        not_win = false;
                    }
                    else if(sum_dice = 7)
                    {
                        not_loss = false;
                    }
                }
                if(not_win = true)
                {    
                    cout << "You lose." << endl;
                }
                else
                {
                    cout << "You win!" << endl;
                }
            }
            cout << "Do you want a new question? (Y/N) ";
            cin >> start_game;
  
  }
    
}


