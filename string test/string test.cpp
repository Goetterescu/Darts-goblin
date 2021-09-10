#include <iostream>
#include <math.h>
using namespace std;

char t1, t2, t3;
int s1, s2, s3;
int p1, p2, p3;
int mode; // Mode for single, double or tribble calculation on darts.


void getscore() {
	cout << endl << "1:   ";
	cin >> t1;
	while (t1 != 's' && t1 != 'd' && t1 != 't') {
		cout << endl << "ERROR: Wrong prefix for score. Use either 's','d' or 't'" << endl << "Use only lowercase!" << endl;
		cout << endl << "1:   ";
		cin >> t1;
	}
	cin >> s1;
	
	cout << endl << "2:   ";
	cin >> t2;
	while (t2 != 's' && t2 != 'd' && t2 != 't') {
		cout << endl << "ERROR: Wrong prefix for score. Use either 's','d' or 't'" << endl << "Use only lowercase!" << endl;
		cout << endl << "2:   ";
		cin >> t2;
	}
	cin >> s2;
	
	cout << endl << "3:   ";
	cin >> t3;
	while (t3 != 's' && t3 != 'd' && t3 != 't') {
		cout << endl << "ERROR: Wrong prefix for score. Use either 's','d' or 't'" << endl << "Use only lowercase!" << endl;
		cout << endl << "3:   ";
		cin >> t3;
	}
	cin >> s3;
}

void calc() {
	switch (t1) {
		case 's':
			mode = 1;
			break;
		case 'd':
			mode = 2;
			break;
		case 't':
			mode = 3;
			break;
		default:
			break;
	}
	p1 = mode*s1;
	
	switch (t2) {
		case 's':
			mode = 1;
			break;
		case 'd':
			mode = 2;
			break;
		case 't':
			mode = 3;
			break;
		default:
			break;
	}
	p2 = mode*s2;
	
	switch (t3) {
		case 's':
			mode = 1;
			break;
		case 'd':
			mode = 2;
			break;
		case 't':
			mode = 3;
			break;
		default:
			break;
	}
	p3 = mode*s3;
	
	
	cout << endl << "Calculation is done!" << endl;
}

	int main() {
		cout << "Welcome to my program!" << endl << "   v0.1" << endl;
		getscore();
		
		
		cout << endl << "Shots:   " << t1 << ", " << t2 << ", " << t3 << endl;
		cout << "         " << s1 << ", " << s2 << ", " << s3 << endl;
		
		
		calc();
		int player = p1+p2+p3;
		cout << "Score:   " << player << endl;
		
		return 0;
	}
