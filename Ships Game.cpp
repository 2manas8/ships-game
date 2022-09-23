#include <iostream>
using namespace std;

void atk() {
	bool ships[4][4] = {
		{0,0,1,1},
		{1,0,0,1},
		{0,1,0,0},
		{0,0,0,1}
	};
	int r, c;
	int h = 0;
	int t = 0;
	while (h < 4) {
		cout << "\n\nEnter the longitude (between 0 to 3) ";
		cin >> r;
		cout << "Enter the latitude (between 0 to 3) ";
		cin >> c;
		t++;
		if (ships[r][c]) {
			ships[r][c] = 0;
			cout << "Great job! That was a hit!";
			h++;
		}
		else {
			cout << "Miss! You will get it next time!";
		}
		if (t == 10) {
			break;
		}
	}
	if (h == 4) {
		cout << "\nVictory! Successfully protected our base!";
		cout << "\nWe shot " << t << " missiles.";
	}
	else {
		cout << "\n\nWe are out of missiles, Sir! We have to abort the mission!";
	}
}

int main() {
	char d;
	cout << "\n\nCommander! The base is under attack!";
	cout << "\nPress 'y' to take command or 'n' to hand over the duty to someone responsible." << "\n";
	cin >> d;
	if (d == 'y') {
		cout << "We are ready for your orders, Sir!";
		atk();
	}
	else if (d == 'n') {
		cout << "Captain Underpants has taken the command! I'll excuse myself, Sir.";
	}
	else {
		cout << "Enter a valid command.";
		main();
	}
	return 0;
}