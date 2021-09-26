#include <iostream>
#include <string>
#include <math.h>
using namespace std;


// Vars for setup
int players;
bool mode;
int rounds = 20; // Amount of rounds for each game-cycle
int current_round; // Counter for the current game-cycle

int i; 
int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0; // Total player score

// Player names
string p1, p2, p3, p4;

// Used for the score input
char t1, t2, t3; // temp var for the multiplier
int s1, s2, s3; // temp var for the score
int boni1, boni2, boni3; // Multiplier

// Arrays for round scores
int p1s[25], p2s[25], p3s[25], p4s[25];

// Endscore for each player
int p1end, p2end, p3end, p4end;

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

void getscore() {
	cout << endl << "1:   ";
	cin >> t1;
	while (t1 != 's' && t1 != 'd' && t1 != 't') {
		cout << endl << "ERROR: Wrong prefix for score. Use either 's','d' or 't'" << endl << "Use only lowercase!" << endl;
		cout << endl << "1:   ";
		cin >> t1;
	}
    switch (t1) {
        case 's':
        boni1 = 1;
        break;
        case 'd':
        boni1 = 2;
        break;
        case 't':
        boni1 = 3;
        break;
    }
	cin >> s1;
	
	cout << endl << "2:   ";
	cin >> t2;
	while (t2 != 's' && t2 != 'd' && t2 != 't') {
		cout << endl << "ERROR: Wrong prefix for score. Use either 's','d' or 't'" << endl << "Use only lowercase!" << endl;
		cout << endl << "2:   ";
		cin >> t2;
	}
    switch (t2) {
        case 's':
        boni2 = 1;
        break;
        case 'd':
        boni2 = 2;
        break;
        case 't':
        boni2 = 3;
        break;
    }
	cin >> s2;
	
	cout << endl << "3:   ";
	cin >> t3;
	while (t3 != 's' && t3 != 'd' && t3 != 't') {
		cout << endl << "ERROR: Wrong prefix for score. Use either 's','d' or 't'" << endl << "Use only lowercase!" << endl;
		cout << endl << "3:   ";
		cin >> t3;
	}
    switch (t3) {
        case 's':
        boni3 = 1;
        break;
        case 'd':
        boni3 = 2;
        break;
        case 't':
        boni3 = 3;
        break;
    }
	cin >> s3;
}

void playone() {
    getscore();
    p1s[current_round] += s1*boni1;
    p1s[current_round] += s2*boni2;
    p1s[current_round] += s3*boni3;
    cout << endl << p1 << " has scored " << p1s[current_round] << " points!" << endl;
    sum1 += p1s[current_round]; // Add up the total score (same for each player)
    cout << p1 << " has scored a total of " << sum1 << " points!" << endl;
}
void playtwo() {
    getscore();
    p2s[current_round] += s1*boni1;
    p2s[current_round] += s2*boni2;
    p2s[current_round] += s3*boni3;
    cout << endl << p2 << " has scored " << p2s[current_round] << " points!" << endl;
    sum2 += p2s[current_round];
    cout << p2 << " has scored a total of " << sum2 << " points!" << endl;
}
void playthree() {
    getscore();
    p3s[current_round] += s1*boni1;
    p3s[current_round] += s2*boni2;
    p3s[current_round] += s3*boni3;
    cout << endl << p3 << " has scored " << p3s[current_round] << " points!" << endl;
    sum3 += p3s[current_round];
    cout << p3 << " has scored a total of " << sum3 << " points!" << endl;
}
void playfour() {
    getscore();
    p4s[current_round] += s1*boni1;
    p4s[current_round] += s2*boni2;
    p4s[current_round] += s3*boni3;
    cout << endl << p4 << " has scored " << p4s[current_round] << " points!" << endl;
    sum4 += p4s[current_round];
    cout << p4 << " has scored a total of " << sum4 << " points!" << endl;
}








// Regular (standart rule) game
int regular() {
    // Not done yet! Add this feature when you feel like it...
    cout << endl << "ERROR: We are not done here" << endl;
    return 0;
}

// Highscore game
void highscore() {
    cout << "Highscore gamemode engaged with " << players << " players" << endl;
    getnames(); // Get the names of every player
    // Removed the feature where we ask for the amount of rounds
    cout << "The current avabile amount of rounds is 20" << endl;

    for (current_round = 1; current_round <= rounds; current_round++) {
    cout << endl << "Begining of round " << current_round << endl;
    switch (players) {
        case 1:
        playone();
        break;
        case 2:
        playone();
        playtwo();
        break;
        case 3:
        playone();
        playtwo();
        playthree();
        break;
        case 4:
        playone();
        playtwo();
        playthree();
        playfour();
        break;
    }
    cout << "End of this round..." << endl;
    }
}

// Get info about amount of players and gamemode
void setup() {
    cout << "Players:  ";
    cin >> players;

    if (players >= 5) { // Only 4 players can join the game
    cout << "You are too many players! Please select a smaller number of players..." << endl;
    setup();
    } else if (players != 1 && players != 2 && players != 3 && players != 4) {
    cout << "Wrong input! Please use any number from 1-4" << endl;
    setup();
    }

    cout << endl << "Game mode (Regular[1]/Highscore[0]):  ";
    cin >> mode;

    // Engage Gamemode
    if (mode == 1) {
        regular();
    }else if (mode == 0) {
        highscore();
    } else {
        cout << endl << "ERROR: Wrong Input" << endl;
        setup();
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

    /* Removed this for loop which was used to calculate the total score. It is not used now, we are adding up the total score after every round...
    for(i = 0; i<rounds ; i++){
        sum1 += p1s[i];
        }
    for(i = 0; i<rounds ; i++){
        sum2 += p2s[i];
        }
    for(i = 0; i<rounds ; i++){
        sum3 += p3s[i];
        }
    for(i = 0; i<rounds ; i++){
        sum4 += p4s[i];
        }
    */

    switch (players) {
        case 1:
        cout << "Score for " << p1 << ": " << sum1 << endl;
        break;

        case 2:
        cout << "Score for " << p1 << ": " << sum1 << endl;
        cout << "Score for " << p2 << ": " << sum2 << endl;
        break;

        case 3:
        cout << "Score for " << p1 << ": " << sum1 << endl;
        cout << "Score for " << p2 << ": " << sum2 << endl;
        cout << "Score for " << p3 << ": " << sum3 << endl;
        break;

        case 4:
        cout << "Score for " << p1 << ": " << sum1 << endl;
        cout << "Score for " << p2 << ": " << sum2 << endl;
        cout << "Score for " << p3 << ": " << sum3 << endl;
        cout << "Score for " << p4 << ": " << sum4 << endl;
        break;
    }
    
    cout << "END OF CODE" << endl;
    return 1;
}

// The endscore is not correct. check "for" system in line 226