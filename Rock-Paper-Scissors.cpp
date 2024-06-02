#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(nullptr));

    // to print out the choices to  the user

    cout << "Let's play a game of Rock-Paper-Scissors!\n";
    cout << "Choose wisely in order to win\n";
    cout << "1.Rock\n";
    cout << "2.Paper\n";
    cout << "3.Scissors\n";

    // choice of the user 
    int userChoice, computerChoice;

    cout << "Make your choice( 1 - 3 )\n ";
    cin >> userChoice;

    // if the choice isn't in the range

    if( userChoice < 1 || userChoice > 3 ){
        cout << "You have to choose from the numbers 1 through 3\n";
        cin >> userChoice;
        
        return 1;
    }

    computerChoice = rand()  % 3 + 1;
    cout << "Computer chooses: ";
    switch ( computerChoice ){

        case 1:
            cout << "Rock\n";
            break;

        case 2:
            cout << "Paper\n";
            break;

        case 3:
            cout << "Scissors\n";
            break;

    }

    if ( userChoice == computerChoice ){
        cout << "The game ends in a tie\n";   
    }
    else if ((userChoice == 1 && computerChoice == 3) || (userChoice == 2 && computerChoice == 1) || (userChoice == 3 && computerChoice == 2)){
        cout << "You win\n";
    }else{
        cout << "Computer wins\n";
    }


    return 0;
}