#include <iostream>
#include <string>
#include "Variables.h"
#include "Functions.h"

void pause(int);

void game() {
	if (maxLevel == 1) {
		cout << "Max Level Reached... Reset The Game" << endl;
		pause(2);
	}
	else {
		switch (level) {
		case 1:
		{
			int invalid = 1, back = 0;
			while (invalid) {
				system("cls");
				cout << "======================================================================" << endl;
				cout << "Player Name: " << id << endl;
				cout << "Score: " << score << endl;
				cout << "Level: " << level << endl;
				cout << "Highest Score: " << highScore << endl;
				cout << "Highest Level: " << highLevel << endl;
				cout << "======================================================================" << endl;
				cout << "You went for a trip to a forest. While walking by a certain place," << endl
					 << "you found a person cutting down trees. What would be your reaction?" << endl
					 << "1. Politely ask the person why they are cutting down the trees and" << endl
					 << "   suggest they stop if it's not necessary" << endl
					 << "2. Watch for a while and then leave without saying anything" << endl
					 << "3. Ignore the person and continue walking without paying attention." << endl
					 << "4. Get angry and yell at the person to stop immediately." << endl;
				cout << "======================================================================" << endl;
				int reply;
				cin >> reply;
				if (reply == 1) {
					cout << "Perfect Answer" << endl
						 << "This option balances assertiveness with respect, " << endl
						 << "making it the most effective and appropriate reaction in this scenario." << endl;
					score += 50;
					level++;
					cout << "Score: " << score << endl;
					invalid = 0;
					pause(5);
					int opt, invalid2 = 1;
					cout << "1. Next Level" << endl;
					cout << "2. Back to the menu" << endl;
					while(invalid2){
						cin >> opt;
						if (opt == 1) {
							invalid2 = 0;
						}
						else if (opt == 2) {
							invalid2 = 0;
							back = 1;
						}
					}
				}
				else if (reply == 2) {
					cout << "Partially Correct Answer," << endl
						 << "It shows some level of concern or curiosity about what's happening," << endl 
						 << "but it doesn't involve taking any action to address the situation." << endl 
						 << "It's better than completely ignoring the situation, but it's not as" << endl 
						 << "effective as engaging with the person to understand or potentially stop" << endl 
						 << "the harmful activity." << endl;
					score += 25;
					cout << "Score: " << score << endl;
					level++;
					invalid = 0;
					pause(5);
					int opt, invalid2 = 1;
					cout << "1. Next Level" << endl;
					cout << "2. Back to the menu" << endl;
					while (invalid2) {
						cin >> opt;
						if (opt == 1) {
							invalid2 = 0;
						}
						else if (opt == 2) {
							invalid2 = 0;
							back = 1;
						}
					}
				}
				else if (reply == 3) {
					cout << "Wrong Answer," << endl
						 << "This option indicates a failure to recognize or address a potentially" << endl
						 << "important issue." << endl;
					score += 0;
					cout << "Score: " << score << endl;
					level++;
					invalid = 0;
					pause(5);
					int opt, invalid2 = 1;
					cout << "1. Next Level" << endl;
					cout << "2. Back to the menu" << endl;
					while (invalid2) {
						cin >> opt;
						if (opt == 1) {
							invalid2 = 0;
						}
						else if (opt == 2) {
							invalid2 = 0;
							back = 1;
						}
					}
				}
				else if (reply == 4) {
					cout << "Negative Answer," << endl
						 << "This option indicates a failure to recognize or address a potentially" << endl
						 << "important issue." << endl;
					score -= 25;
					cout << "Score: " << score << endl;
					level++;
					invalid = 0;
					pause(5);
					int opt, invalid2 = 1;
					cout << "1. Next Level" << endl;
					cout << "2. Back to the menu" << endl;
					while (invalid2) {
						cin >> opt;
						if (opt == 1) {
							invalid2 = 0;
						}
						else if (opt == 2) {
							invalid2 = 0;
							back = 1;
						}
					}
				}
				else {
					cout << "Incorrect option... Try again";
					pause(2);
				}

				if (highLevel < level) {
					highLevel = level;
				}

				if (highScore < score) {
					highScore = score;
				}
			}
			if (back) {
				break;
			}
		}
		case 2:
		{
			int invalid = 1, back = 0;
			while (invalid) {
				system("cls");
				cout << "======================================================================" << endl;
				cout << "Player Name: " << id << endl;
				cout << "Score: " << score << endl;
				cout << "Level: " << level << endl;
				cout << "Highest Score: " << highScore << endl;
				cout << "Highest Level: " << highLevel << endl;
				cout << "======================================================================" << endl;
				cout << "You are on a beach, and you found a used plastic bottle randomly thrown." << endl
					 << "What will you do with the bottle?" << endl
					 << "1. Pick up the bottle and throw it in the trash bin" << endl
					 << "2. Leave the bottle where it is and walk away" << endl
					 << "3. Pick up the bottle and dispose of it in a nearby recycling bin" << endl
					 << "4. Throw the bottle into the ocean to get it out of the way" << endl;
				cout << "======================================================================" << endl;
				int reply;
				cin >> reply;
				if (reply == 3) {
					cout << "Perfect Answer" << endl
						 << "This response reflects a strong commitment to environmental stewardship," << endl
						 << "and is the ideal action to take in this situation" << endl;
					score += 50;
					level++;
					cout << "Score: " << score << endl;
					invalid = 0;
					pause(5);
					int opt, invalid2 = 1;
					cout << "1. Next Level" << endl;
					cout << "2. Back to the menu" << endl;
					while (invalid2) {
						cin >> opt;
						if (opt == 1) {
							invalid2 = 0;
						}
						else if (opt == 2) {
							invalid2 = 0;
							back = 1;
						}
					}
				}
				else if (reply == 1) {
					cout << "Partially Correct Answer," << endl
						<< "This response is responsible but could be improved by opting for recycling" << endl
						<< "which is a more sustainable choice." << endl;
					score += 25;
					cout << "Score: " << score << endl;
					level++;
					invalid = 0;
					pause(5);
					int opt, invalid2 = 1;
					cout << "1. Next Level" << endl;
					cout << "2. Back to the menu" << endl;
					while (invalid2) {
						cin >> opt;
						if (opt == 1) {
							invalid2 = 0;
						}
						else if (opt == 2) {
							invalid2 = 0;
							back = 1;
						}
					}
				}
				else if (reply == 2) {
					cout << "Wrong Answer," << endl
						 << "This response reflects indifference and fails to address the problem," << endl
						 << "making it the incorrect choice." << endl;
					score += 0;
					cout << "Score: " << score << endl;
					level++;
					invalid = 0;
					pause(5);
					int opt, invalid2 = 1;
					cout << "1. Next Level" << endl;
					cout << "2. Back to the menu" << endl;
					while (invalid2) {
						cin >> opt;
						if (opt == 1) {
							invalid2 = 0;
						}
						else if (opt == 2) {
							invalid2 = 0;
							back = 1;
						}
					}
				}
				else if (reply == 4) {
					cout << "Negative Answer," << endl
						 << "This response is highly irresponsible and harmful," << endl
						 << "making it the most negative choice in this scenario." << endl;
					score -= 25;
					cout << "Score: " << score << endl;
					level++;
					invalid = 0;
					pause(5);
					int opt, invalid2 = 1;
					cout << "1. Next Level" << endl;
					cout << "2. Back to the menu" << endl;
					while (invalid2) {
						cin >> opt;
						if (opt == 1) {
							invalid2 = 0;
						}
						else if (opt == 2) {
							invalid2 = 0;
							back = 1;
						}
					}
				}
				else {
					cout << "Incorrect option... Try again";
					pause(2);
				}

				if (highLevel < level) {
					highLevel = level;
				}

				if (highScore < score) {
					highScore = score;
				}
			}
			if (back) {
				break;
			}
		}
		case 3:
		{
			int invalid = 1, back = 0;
			while (invalid) {
				system("cls");
				cout << "======================================================================" << endl;
				cout << "Player Name: " << id << endl;
				cout << "Score: " << score << endl;
				cout << "Level: " << level << endl;
				cout << "Highest Score: " << highScore << endl;
				cout << "Highest Level: " << highLevel << endl;
				cout << "======================================================================" << endl;
				cout << "Every day on your way to school, you spot a growing plant." << endl
					 << "Since no one was looking after it, it was on the verge of dying. " << endl
					 << "What would be your reaction to it?" << endl
					 << "1. Pull the plant out since it's going to die anyway." << endl
					 << "2. Feel sorry for the plant but continue walking without doing anything." << endl
					 << "3. Tell someone about the plant and ask them to take care of it." << endl
					 << "4. Start watering the plant every day to help it grow" << endl;
				cout << "======================================================================" << endl;
				int reply;
				cin >> reply;
				if (reply == 4) {
					cout << "Perfect Answer" << endl
						 << "This response is the most effective and nurturing choice," << endl
						 << "reflecting a strong sense of environmental stewardship." << endl;
					score += 50;
					level++;
					cout << "Score: " << score << endl;
					invalid = 0;
					pause(5);
					int opt, invalid2 = 1;
					cout << "1. Next Level" << endl;
					cout << "2. Back to the menu" << endl;
					while (invalid2) {
						cin >> opt;
						if (opt == 1) {
							invalid2 = 0;
						}
						else if (opt == 2) {
							invalid2 = 0;
							back = 1;
						}
					}
				}
				else if (reply == 3) {
					cout << "Partially Correct Answer," << endl
						<< "This response is thoughtful but lacks the direct involvement" << endl
						<< "that would guarantee the plant's survival, making it a partially correct choice." << endl;
					score += 25;
					cout << "Score: " << score << endl;
					level++;
					invalid = 0;
					pause(5);
					int opt, invalid2 = 1;
					cout << "1. Next Level" << endl;
					cout << "2. Back to the menu" << endl;
					while (invalid2) {
						cin >> opt;
						if (opt == 1) {
							invalid2 = 0;
						}
						else if (opt == 2) {
							invalid2 = 0;
							back = 1;
						}
					}
				}
				else if (reply == 2) {
					cout << "Wrong Answer," << endl
						 << "This response shows awareness but fails to address the problem," << endl
						 << "making it the incorrect choice." << endl;
					score += 0;
					cout << "Score: " << score << endl;
					level++;
					invalid = 0;
					pause(5);
					int opt, invalid2 = 1;
					cout << "1. Next Level" << endl;
					cout << "2. Back to the menu" << endl;
					while (invalid2) {
						cin >> opt;
						if (opt == 1) {
							invalid2 = 0;
						}
						else if (opt == 2) {
							invalid2 = 0;
							back = 1;
						}
					}
				}
				else if (reply == 1) {
					cout << "Negative Answer," << endl
						 << "This response is the most harmful and negative choice," << endl
						 << "as it directly leads to the plant's demise." << endl;
					score -= 25;
					cout << "Score: " << score << endl;
					level++;
					invalid = 0;
					pause(5);
					int opt, invalid2 = 1;
					cout << "1. Next Level" << endl;
					cout << "2. Back to the menu" << endl;
					while (invalid2) {
						cin >> opt;
						if (opt == 1) {
							invalid2 = 0;
						}
						else if (opt == 2) {
							invalid2 = 0;
							back = 1;
						}
					}
				}
				else {
					cout << "Incorrect option... Try again";
					pause(2);
				}

				if (highLevel < level) {
					highLevel = level;
				}

				if (highScore < score) {
					highScore = score;
				}
			}
			if (back) {
				break;
			}
		}
		case 4:
		{
			int invalid = 1, back = 0;
			while (invalid) {
				system("cls");
				cout << "======================================================================" << endl;
				cout << "Player Name: " << id << endl;
				cout << "Score: " << score << endl;
				cout << "Level: " << level << endl;
				cout << "Highest Score: " << highScore << endl;
				cout << "Highest Level: " << highLevel << endl;
				cout << "======================================================================" << endl;
				cout << "You went to the park to play with your friends." << endl
					 << "You found that someone has left the water tap open," << endl
					 << "resulting in continuous flow of water from the tap." << endl
					 << "What would you do in this situation?" << endl
					 << "1. Turn off the tap immediately to stop the water wastage." << endl
					 << "2. Tell a park worker or an adult nearby about the open tap and ask them to turn it off." << endl
					 << "3. Ignore the open tap and continue playing with your friends." << endl
					 << "4. Leave the tap running because it's not your responsibility." << endl;
				cout << "======================================================================" << endl;
				int reply;
				cin >> reply;
				if (reply == 1) {
					cout << "Perfect Answer" << endl
						 << "This response is the most effective and responsible choice," << endl
						 << "reflecting a strong commitment to environmental stewardship and problem-solving skills." << endl;
					score += 50;
					level++;
					cout << "Score: " << score << endl;
					invalid = 0;
					pause(5);
					int opt, invalid2 = 1;
					cout << "1. Next Level" << endl;
					cout << "2. Back to the menu" << endl;
					while (invalid2) {
						cin >> opt;
						if (opt == 1) {
							invalid2 = 0;
						}
						else if (opt == 2) {
							invalid2 = 0;
							back = 1;
						}
					}
				}
				else if (reply == 2) {
					cout << "Partially Correct Answer," << endl
						<< "This response shows awareness and concern but lacks the immediacy and" << endl
						<< "direct action that would make it the most effective choice," << endl
						<< "making it partially correct." << endl;
					score += 25;
					cout << "Score: " << score << endl;
					level++;
					invalid = 0;
					pause(5);
					int opt, invalid2 = 1;
					cout << "1. Next Level" << endl;
					cout << "2. Back to the menu" << endl;
					while (invalid2) {
						cin >> opt;
						if (opt == 1) {
							invalid2 = 0;
						}
						else if (opt == 2) {
							invalid2 = 0;
							back = 1;
						}
					}
				}
				else if (reply == 3) {
					cout << "Wrong Answer," << endl
						 << "This response is careless and fails to address an obvious problem," << endl
						 << "making it the incorrect choice in this situation." << endl;
					score += 0;
					cout << "Score: " << score << endl;
					level++;
					invalid = 0;
					pause(5);
					int opt, invalid2 = 1;
					cout << "1. Next Level" << endl;
					cout << "2. Back to the menu" << endl;
					while (invalid2) {
						cin >> opt;
						if (opt == 1) {
							invalid2 = 0;
						}
						else if (opt == 2) {
							invalid2 = 0;
							back = 1;
						}
					}
				}
				else if (reply == 4) {
					cout << "Negative Answer," << endl
						 << "This response is harmful and reflects a negative attitude" << endl
						 << "toward environmental stewardship and shared responsibility." << endl;
					score -= 25;
					cout << "Score: " << score << endl;
					level++;
					invalid = 0;
					pause(5);
					int opt, invalid2 = 1;
					cout << "1. Next Level" << endl;
					cout << "2. Back to the menu" << endl;
					while (invalid2) {
						cin >> opt;
						if (opt == 1) {
							invalid2 = 0;
						}
						else if (opt == 2) {
							invalid2 = 0;
							back = 1;
						}
					}
				}
				else {
					cout << "Incorrect option... Try again";
					pause(2);
				}

				if (highLevel < level) {
					highLevel = level;
				}

				if (highScore < score) {
					highScore = score;
				}
			}
			if (back) {
				break;
			}
		}
		case 5:
		{
			int invalid = 1, back = 0;
			while (invalid) {
				system("cls");
				cout << "======================================================================" << endl;
				cout << "Player Name: " << id << endl;
				cout << "Score: " << score << endl;
				cout << "Level: " << level << endl;
				cout << "Highest Score: " << highScore << endl;
				cout << "Highest Level: " << highLevel << endl;
				cout << "======================================================================" << endl;
				cout << "You're on a drive with your dad for a trip, and you got stuck in a traffic jam." << endl
					 << "Your dad kept the car's engine running." << endl
					 << "What would you do?" << endl
					 << "1. Keep quiet and let your dad decide what to do about the engine." << endl
					 << "2. Get upset and argue with your dad about leaving the engine running." << endl
					 << "3. Suggest to your dad that turning off the engine might save fuel and reduce pollution" << endl 
					 << "   while you're stuck in traffic" << endl
					 << "4. Ignore the situation and continue using your phone or listening to music." << endl;
				cout << "======================================================================" << endl;
				int reply;
				cin >> reply;
				if (reply == 3) {
					cout << "Perfect Answer" << endl
						 << "This response demonstrates responsibility and environmental awareness," << endl
						 << "making it the most effective choice in this situation." << endl;
					score += 50;
					maxLevel = 1;
					cout << "Score: " << score << endl;
					invalid = 0;
					pause(5);
					int opt, invalid2 = 1;
					cout << "1. Next Level" << endl;
					cout << "2. Back to the menu" << endl;
					while (invalid2) {
						cin >> opt;
						if (opt == 1) {
							invalid2 = 0;
						}
						else if (opt == 2) {
							invalid2 = 0;
							back = 1;
						}
					}
				}
				else if (reply == 1) {
					cout << "Partially Correct Answer," << endl
						<< "This response is respectful but lacks the proactive approach" << endl
						<< "that could lead to a better outcome, making it partially correct." << endl;
					score += 25;
					cout << "Score: " << score << endl;
					maxLevel = 1;
					invalid = 0;
					pause(5);
					int opt, invalid2 = 1;
					cout << "1. Next Level" << endl;
					cout << "2. Back to the menu" << endl;
					while (invalid2) {
						cin >> opt;
						if (opt == 1) {
							invalid2 = 0;
						}
						else if (opt == 2) {
							invalid2 = 0;
							back = 1;
						}
					}
				}
				else if (reply == 4) {
					cout << "Wrong Answer," << endl
						 << "This response fails to engage with the situation," << endl
						 << "making it the incorrect choice." << endl;
					score += 0;
					cout << "Score: " << score << endl;
					maxLevel = 1;
					invalid = 0;
					pause(5);
					int opt, invalid2 = 1;
					cout << "1. Next Level" << endl;
					cout << "2. Back to the menu" << endl;
					while (invalid2) {
						cin >> opt;
						if (opt == 1) {
							invalid2 = 0;
						}
						else if (opt == 2) {
							invalid2 = 0;
							back = 1;
						}
					}
				}
				else if (reply == 2) {
					cout << "Negative Answer," << endl
						 << "This approach is counterproductive and can create a negative atmosphere," << endl
						 << "making it the least effective choice." << endl;
					score -= 25;
					cout << "Score: " << score << endl;
					maxLevel = 1;
					invalid = 0;
					pause(5);
					int opt, invalid2 = 1;
					cout << "1. Back to the menu" << endl;
					while (invalid2) {
						cin >> opt;
						if (opt == 1) {
							invalid2 = 0;
							back = 1;
						}
					}
				}
				else {
					cout << "Incorrect option... Try again";
					pause(2);
				}

				if (highLevel < level) {
					highLevel = level;
				}

				if (highScore < score) {
					highScore = score;
				}
			}
			if (back) {
				break;
			}
		}
		}
	}
}