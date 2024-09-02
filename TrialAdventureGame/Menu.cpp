#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "Functions.h"
#include "Variables.h"
using namespace std;

int score = 0, highScore = 0, level = 2, highLevel = 2;

void game();

void loadData(string filename) {
	ifstream in(filename);
	string line;
	getline(in, line);
	stringstream ss(line);
	ss >> score;
	ss.ignore();
	ss >> level;
	ss.ignore();
	ss >> highScore;
	ss.ignore();
	ss >> highLevel;
	cout << "Data Loaded Successfully" << endl;
}

void showMenu() {
	string filename = id + ".csv";
	loadData(filename);
start:
	system("cls");
	cout << "===============================================" << endl;
	cout << "            WELCOME TO ECO-TRIA" << endl;
	cout << "===============================================" << endl;
	cout << "Player Name: " << id << endl;
	cout << "Score: " << score << endl;
	cout << "Level: " << level-1 << endl;
	cout << "Highest Score: "<< highScore << endl;
	cout << "Highest Level: " << highLevel << endl;
	cout << "===============================================" << endl;
	cout << "1. Start Game" << endl;
	cout << "2. Reset Game" << endl;
	cout << "3. Save Game" << endl;
	cout << "4. Quit" << endl;
	cout << "===============================================" << endl;
	int choose;
	cin >> choose;
	switch (choose) {
	case 1:
		game();
		goto start;
	case 2:
		score = 0, level = 2;
		goto start;
	case 3:
	{
		ofstream out(filename);
		out << score << "," << level << "," << highScore << "," << highLevel << endl;
		cout << "File Saved Successfully.." << endl;
		out.close();
		goto start;
	}
	case 4:
		cout << "Quitting" << endl;
		break;
	default:
		cout << "Invalid option" << endl;
		break;
	}
}