#include <iostream>
#include <thread>
#include <chrono>
#include "Functions.h"
#include "Variables.h"
using namespace std;

void pause(int second) {
	this_thread::sleep_for(chrono::seconds(second));
}

bool login();
void showMenu();

int main() {
	system("color E");
	bool login_check = login();
	if (login_check) {
		showMenu();
	}
	return 0;
}