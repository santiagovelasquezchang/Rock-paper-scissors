#include <iostream>
#include <string>
using namespace std;

/*
Rock, Paper, Scissors simple game
*/
int main() {

    string options[3] = {"Rock", "Paper", "Scissors"};
    int user = 0;
    int computer = 0;
    int n = sizeof(options) / sizeof(options[0]);  // Get the number of elements in the array

    // Seed the random number generator
    srand(time(NULL));

    string user_choice = "";
    
    //Best of 3
    for(int i = 0; i < 10; i++) {
        if(user==2 || computer == 2) {
            break;
        }
        cout << "Enter Rock, Paper, or Scissors: " << endl;
        cin>>user_choice;
        int computer_choice = rand() % n; // Generate a random number between 0 and
        if(user_choice == "Rock") {
            if(options[computer_choice] == "Rock") {
                cout << "Computer chose Rock. It's a tie!" << endl;
            } else if(options[computer_choice] == "Paper") {
                cout << "Computer chose Paper. You lose!" << endl;
                computer++;
            } else {
                cout << "Computer chose Scissors. You win!" << endl;
                user++;
            }
        } else if(user_choice == "Paper") {
            if(options[computer_choice] == "Rock") {
                cout << "Computer chose Rock. You win!" << endl;
                user++;
            } else if(options[computer_choice] == "Paper") {
                cout << "Computer chose Paper. It's a tie!" << endl;
            } else {
                cout << "Computer chose Scissors. You lose!" << endl;
                computer++;
            }
        } else if(user_choice == "Scissors") {
            if(options[computer_choice] == "Rock") {
                cout << "Computer chose Rock. You lose!" << endl;
                computer++;
            } else if(options[computer_choice] == "Paper") {
                cout << "Computer chose Paper. You win!" << endl;
                user++;
            } else {
                cout << "Computer chose Scissors. It's a tie!" << endl;
            }
        } else {
            cout << "Invalid input. Try again." << endl;
        }
    } 
    if(user == 2){
            cout << "You win the game!" << endl;
        }else{
            cout << "You lose the game!" << endl;
        }
            
}


