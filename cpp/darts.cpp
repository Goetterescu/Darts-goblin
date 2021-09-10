#include <iostream>
#include <string>
#include <math.h>
using namespace std;


// Vars for setup
int players;
bool mode;

string p1, p2, p3, p4;
int s11, s12, s13;
int s21, s22, s23;
int s31, s32, s33;
int s41, s42, s43;

// Get info about amount of players and gamemode
void setup() {
    cout << "Players:  ";
    cin >> players;
    cout << endl << "Game mode (Regular[1]/Highscore[0]):  ";
    cin >> mode;
}

// Get the names of each player
void getnames() {
    cout << "Please name every Player:" << endl;
    // Do some switch bullshit to get every player name
    switch (players) {
    case 1:
    cout << "You are pretty lonely..." << endl;
    cin >> p1;
    break;
    case 2:
    cin >> p1;
    cin >> p2;
    break;
    case 3:
    cin >> p1;
    cin >> p2;
    cin >> p3;
    break;
    case 4:
    cin >> p1;
    cin >> p2;
    cin >> p3;
    cin >> p4;
    }
}







// Regular (standart rule) game
int regular() {
    // Not done yet!
    cout << endl << "ERROR: We are not done here" << endl;
    return 0;
}

// Highscore game
void highscore() {
    cout << "Highscore gamemode engaged with " << players << " players" << endl;
    getnames(); // Get the names of every player
    // Get the amount of rounds
    int rounds;
    cout << "Amount of rounds:  ";
    cin >> rounds;
    cout << endl;

    for (int i = 1; i <= rounds; i++) {

    switch (players) {
        case 1:
        s11=s12=s13= 0;
        cout << endl << "Scores for " << p1 << endl;
        cin >> s11;
        cin >> s12;
        cin >> s13;
        break;
    }
    cout << endl << p1 << " scored: " << s11+s12+s13;
    }
}



int main() {
    // Open
    cout << "####################" << endl;
    cout << "#  Welcome to my   #" << endl;
    cout << "#    Darts Game    #" << endl;
    cout << "####################" << endl;
    cout << " (c) Daniel Goetter " << endl; 
    cout << "        2021        " << endl << endl;
    // Ask for amount of players and game mode
    setup();
    if (players >= 5) { // Only 4 players can join the game
    cout << "You are too many players! Please select a smaller number of players..." << endl;
    return 0;
    }
    // Engage Gamemode
    if (mode == 1) {
        regular();
    }else if (mode == 0) {
        highscore();
    } else {
        cout << endl << "ERROR: Wrong Input" << endl;
    }


    cout << "END OF CODE" << endl;
    return 1;
}