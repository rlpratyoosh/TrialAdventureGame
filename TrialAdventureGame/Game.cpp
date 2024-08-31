#include <iostream>
#include <string>
#include "Variables.h"
#include "Functions.h"

void pause(int);

void game() {
	system("cls");
	if (level == 10) {
		cout << "Max Level Reached... Reset The Game" << endl;
	}
	else {
		switch (level) {
		case 1:
		{
			int invalid = 1;
			while (invalid) {
				cout << "You enter a dense forest. You walk for a while and notice"
					<< " a plastic wrapper randomly thrown on the way. What do you do?" << endl
					<< "1. Pickup the bottle" << endl
					<< "2. Ignore it and move on" << endl;
				int reply;
				cin >> reply;
				if (reply == 1) {
					cout << "Correct Answer" << endl;
					score += 50;
					level++;
					cout << "Score: " << score << endl;
					invalid = 0;
					pause(2);
				}
				else if (reply == 2) {
					cout << "Incorrect Answer" << endl
						<< "You need to pick up all wast randomly thrown on streets" << endl;
					score -= 25;
					cout << "Score: " << score << endl;
					level++;
					invalid = 0;
					pause(2);
				}
				else {
					cout << "Incorrect option... Try again";
					pause(2);
				}

				if (highScore < score) {
					highScore = score;
				}
			}
		}
		}
	}
}