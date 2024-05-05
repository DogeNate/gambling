#include <stdio.h>     
#include <stdlib.h>   
#include <time.h> 
#include <chrono>
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <thread>

int main() {
	int random;
	int number;
	int diffuculty;
	char again = 'Y';
	double money;
	double bet;
	char game;

	using namespace std::chrono_literals;
	std::cout << "********************* CASINO *********************\n";
	std::cout << "You will start with your chosen amount of money and play a verity of diffrent diffuculty games of your choice.\n";

	const auto start = std::chrono::high_resolution_clock::now();
	std::this_thread::sleep_for(1s);
	const auto end = std::chrono::high_resolution_clock::now();
	const std::chrono::duration<double, std::milli> elapsed = end - start;

	do {
		std::cout << "How much money would you like to start with (1 - 10000): ";
		std::cin >> money;
	} while (money >= 10001 || money <= 0);
	

	

		do {
			std::cout << "What would you like the diffuculty of your game to be (1-10): ";
			std::cin >> diffuculty;
			do {
				std::cout << "How much would you like to bet: ";
				std::cin >> bet;
			} while (bet > money);

			money = money - bet;

			switch (diffuculty) {
			case 1:
				srand(time(NULL));
				random = rand() % 2 + 1;
				std::cout << "With this option you have a 50-50 chance to loose your money or increase it 1.5 times the amount\n";
				std::cout << "What number do you want to pick 1-2: ";
				std::cin >> number;

				if (number == random) {
					std::cout << "You won!!!\n";
					bet = bet * 1.5;
					money = money + bet;
					std::cout << "You now have " << money << "$\n";
				}
				else {
					std::cout << "You lost\n";
					const auto start = std::chrono::high_resolution_clock::now();
					std::this_thread::sleep_for(1s);
					const auto end = std::chrono::high_resolution_clock::now();
					const std::chrono::duration<double, std::milli> elapsed = end - start;
					std::cout << "You now have " << money << "$\n";
				}
				break;
			case 2:
				srand(time(NULL));
				random = rand() % 3 + 1;
				std::cout << "With this option you have a 1 and 3 chance to double your money!!! \n";
				std::cout << "What number do you want to pick (1-3): ";
				std::cin >> number;

				if (number == random) {
					std::cout << "You won!!!\n";
					bet = bet * 2;
					money = money + bet;
					std::cout << "You now have " << money << "$\n";
				}
				else {
					std::cout << "You lost\n";
					const auto start = std::chrono::high_resolution_clock::now();
					std::this_thread::sleep_for(1s);
					const auto end = std::chrono::high_resolution_clock::now();
					const std::chrono::duration<double, std::milli> elapsed = end - start;
					std::cout << "You now have " << money << "$\n";
				}

				break;
			case 3:
				srand(time(NULL));
				random = rand() % 4 + 1;
				std::cout << "In this option you have a 1 and 4 chance to increase your money by 2.5 TIMES THE AMOUNT!!!";
				std::cout << "What number would you like to use (1-4): ";
				std::cin >> number;

				if (number == random) {
					std::cout << "You won!!!\n";
					bet = bet * 2.5;
					money = money + bet;
					std::cout << "You now have " << money << "$\n";
				}
				else {
					std::cout << "You lost\n";
					const auto start = std::chrono::high_resolution_clock::now();
					std::this_thread::sleep_for(1s);
					const auto end = std::chrono::high_resolution_clock::now();
					const std::chrono::duration<double, std::milli> elapsed = end - start;
					std::cout << "You now have " << money << "$\n";
				}
				break;
			case 4:
				srand(time(NULL));
				random = rand() % 5 + 1;
				std::cout << "In this option you will have a 1 and 5 chance to TRIPLE your money!!!";
				std::cout << "What number would you like to select (1-5): ";
				std::cin >> number;

				if (number == random) {
					std::cout << "You won!!!\n";
					bet = bet * 3;
					money = money + bet;
					std::cout << "You now have " << money << "$\n";
				}
				else {
					std::cout << "You lost\n";
					const auto start = std::chrono::high_resolution_clock::now();
					std::this_thread::sleep_for(1s);
					const auto end = std::chrono::high_resolution_clock::now();
					const std::chrono::duration<double, std::milli> elapsed = end - start;
					std::cout << "You now have " << money << "$\n";
				}
				break;
			case 5:
				srand(time(NULL));
				random = rand() % 6 + 1;
				std::cout << "In this option you will have a 1 and 6 chance to increase your money by 3.5 TIMES!!!";
				std::cout << "Please pick a number (1-6): ";
				std::cin >> number;

				if (number == random) {
					std::cout << "You won!!!\n";
					bet = bet * 3.5;
					money = money + bet;
					std::cout << "You now have " << money << "$\n";
				}
				else {
					std::cout << "You lost\n";
					const auto start = std::chrono::high_resolution_clock::now();
					std::this_thread::sleep_for(1s);
					const auto end = std::chrono::high_resolution_clock::now();
					const std::chrono::duration<double, std::milli> elapsed = end - start;
					std::cout << "You now have " << money << "$\n";
				}
				break;
			case 6:
				srand(time(NULL));
				random = rand() % 7 + 1;
				std::cout << "In this option you will have a 1 and 7 chance QUADRUPLE your money!!!";
				std::cout << "Pick a number that ranges from 1 to 7: ";
				std::cin >> number;

				if (number == random) {
					std::cout << "You won!!!\n";
					bet = bet * 4;
					money = money + bet;
					std::cout << "You now have " << money << "$\n";
				}
				else {
					std::cout << "You lost\n";
					const auto start = std::chrono::high_resolution_clock::now();
					std::this_thread::sleep_for(1s);
					const auto end = std::chrono::high_resolution_clock::now();
					const std::chrono::duration<double, std::milli> elapsed = end - start;
					std::cout << "You now have " << money << "$\n";
				}
				break;
			case 7:
				srand(time(NULL));
				random = rand() % 8 + 1;
				std::cout << "In this option you will have a 1 and 8 chance to multiply your money by 4 and a half!!!";
				std::cout << "Please pick a number that ranges from 1 and 8: ";
				std::cin >> number;

				if (number == random) {
					std::cout << "You won!!!\n";
					bet = bet * 4.5;
					money = money + bet;
					std::cout << "You now have " << money << "$\n";
				}
				else {
					std::cout << "You lost\n";
					const auto start = std::chrono::high_resolution_clock::now();
					std::this_thread::sleep_for(1s);
					const auto end = std::chrono::high_resolution_clock::now();
					const std::chrono::duration<double, std::milli> elapsed = end - start;
					std::cout << "You now have " << money << "$\n";
				}
				break;
			case 8:
				srand(time(NULL));
				random = rand() % 9 + 1;
				std::cout << "In this option you will have a 1 and 9 chance to QUINTUPLE your money!!!";
				std::cout << "Choose a number 1 through 9: ";
				std::cin >> number;

				if (number == random) {
					std::cout << "You won!!!\n";
					bet = bet * 4;
					money = money + bet;
					std::cout << "You now have " << money << "$\n";
				}
				else {
					std::cout << "You lost\n";
					const auto start = std::chrono::high_resolution_clock::now();
					std::this_thread::sleep_for(1s);
					const auto end = std::chrono::high_resolution_clock::now();
					const std::chrono::duration<double, std::milli> elapsed = end - start;
					std::cout << "You now have " << money << "$\n";
				}
				break;
			case 9:
				srand(time(NULL));
				random = rand() % 10 + 1;
				std::cout << "In this option you will have a 1 and 10 chance to increase you money by 5 and a half TIMES!!!";
				std::cout << "Please enter a number 1 - 10: ";
				std::cin >> number;

				if (number == random) {
					std::cout << "You won!!\n";
					bet = bet * 5.5;
					money = money + bet;
					std::cout << "You now have " << money << "$\n";
				}
				else {
					std::cout << "You lost\n";
					const auto start = std::chrono::high_resolution_clock::now();
					std::this_thread::sleep_for(1s);
					const auto end = std::chrono::high_resolution_clock::now();
					const std::chrono::duration<double, std::milli> elapsed = end - start;
					std::cout << "You now have " << money << "$\n";
				}
				break;
			case 10:
				srand(time(NULL));
				random = rand() % 11 + 1;
				std::cout << "In this option you will have a 1 and 11 chance to SEXTUPLE your money!!!";
				std::cout << "Enter a number that ranges from 1 and 11: ";
				std::cin >> number;

				if (number == random) {
					std::cout << "You won!!!\n";
					bet = bet * 1.5;
					money = money + bet;
					std::cout << "You now have " << money << "$\n";
				}
				else {
					std::cout << "You lost\n";
					const auto start = std::chrono::high_resolution_clock::now();
					std::this_thread::sleep_for(1s);
					const auto end = std::chrono::high_resolution_clock::now();
					const std::chrono::duration<double, std::milli> elapsed = end - start;
					std::cout << "You now have " << money << "$\n";
				}
				break;
			default:
				std::cout << "Please choose a number from 1-10 next time :)\n";
			}
			std::cout << "**************************************************\n";
			if (money <= 0) {
				std::cout << "You ran out of money!\n";
				again = 'N';
			}
		} while (again == 'Y');
	}
	

