#include <iostream>
#include <conio.h>
#include <string.h>
#include <dos.h>
#include <ctype.h>
using namespace std;

int main() {
	char account[50][20], password[50][8], name[50][20];
	double balance[50];
	char rep, user_rep[20];
	int state, accounts = 0, running = 1, system_running, set_run;
	double money;
	do {
		clrscr();
		cout << "WELCOME TO THE BANK\n[1] Sign In\n[2] Sign Up\n[3] Exit\n";
		rep = getch();
		switch (rep) {
			case '1':
				clrscr();
				if (accounts == 0) {
					cout << "No accounts found...";
					delay(1000);
					break;
				}
				cout << "Signing in..." << endl
					 << "Enter username: ";
				cin >> user_rep;
				for (int x = 0; x < accounts; x++) {
					if (strcmp(user_rep, account[x]) == 0) {
						clrscr();
						cout << "Account found..." << endl;
						break;
					}
				}
				if (x == accounts) {
					cout << "Account not found...";
					delay(1000);
					break;
				}
				cout << "Enter username: " << account[x] << endl
					 << "Enter the account password: ";
				cin >> user_rep;
				if (strcmp(user_rep, password[x]) == 0) {
					clrscr();
					cout << "Success, welcome back " << name[x] << "!" << endl
						 << "Enter username: " << account[x] << endl
						 << "Enter the account password: " << password[x];
					delay(1000);
					system_running = 1;
					while (system_running) {
						clrscr();
						cout << name[x] << "'s Bank Account" << endl
							 << "Balance: $" << balance[x] << endl
							 << "[1] Deposit" << endl
							 << "[2] Withdraw" << endl
							 << "[3] Settings" << endl
							 << "[4] Exit";
						rep = getch();
						switch (rep) {
							case '1':
								clrscr();
								cout << "DEPOSITING" << endl
									 << "How much money do you want to deposit: ";
								cin >> money;
								balance[x] += money;
								cout << "Depositing";
								for (int a = 1; a <= 3; a++) {
									cout << ".";
									delay(600);
								}
								cout << endl << "Succesfully deposited $" << money;
								delay(1000);
								break;
							case '2':
								clrscr();
								if (balance[x] == 0) {
									cout << "You have no money cuh!";
									delay(1000);
									break;
								}
								do {
									clrscr();
									cout << "WITHDRAWING" << endl
										 << "How much money do you want to withdraw: ";
									cin >> money;
								} while (money > balance[x]);
								balance[x] -= money;
								cout << "Withdrawing";
								for (a = 1; a <= 3; a++) {
									cout << ".";
									delay(600);
								}
								cout << endl << "Succesfully withdrawed $" << money;
								delay(1000);
								break;
							case '3':
								clrscr();
								cout << "SETTING CONFIRMATION" << endl
									 << "Enter your password: ";
								cin >> user_rep;
								if (strcmp(user_rep, password[x]) == 0) {
									set_run = 1;
								}
								else {
									break;
								}
								while (set_run) {
									clrscr();
									cout << "SETTINGS" << endl
										 << "[1] Name" << endl
										 << "[2] Username" << endl
										 << "[3] Password" << endl
										 << "[4] Exit";
									rep = getch();
									switch (rep) {
										case '1':
											clrscr();
											cout << "CHANGING NAME" << endl
												 << "Current name: " << name[x] << endl
												 << "Change? [Y/N]";
											rep = tolower(getch());
											if (rep == 'y') {
												do {
													do {
														clrscr();
														cout << "CHANGING NAME" << endl
															 << "Enter new name [2 - 10]: ";
														cin >> user_rep;
													} while (strlen(user_rep) < 2 || strlen(user_rep) > 10);
													clrscr();
													cout << "CHANGING NAME" << endl
														 << "Is '" << user_rep << "' correct? [Y/N]";
													rep = tolower(getch());

												} while (rep != 'y');
												strcpy(name[x], user_rep);
											}
											break;
										case '2':
											clrscr();
											cout << "CHANGING USERNAME" << endl
												 << "Current username: " << account[x] << endl
												 << "Change? [Y/N]";
											rep = tolower(getch());
											if (rep == 'y') {
												do {
													do {
														clrscr();
														cout << "CHANGING USERNAME" << endl
															 << "Enter new username [8 - 20]: ";
														cin >> user_rep;
													} while (strlen(user_rep) < 8 || strlen(user_rep) > 20);
													clrscr();
													cout << "CHANGING USERNAME" << endl
														 << "Is '" << user_rep << "' correct? [Y/N]";
													rep = tolower(getch());
												} while (rep != 'y');
												strcpy(account[x], user_rep);
											}
											break;
										case '3':
											clrscr();
											cout << "CHANGING PASSWORD" << endl
												 << "Current password: " << password[x] << endl
												 << "Change? [Y/N]";
											rep = tolower(getch());
											if (rep == 'y') {
												do {
													do {
														clrscr();
														cout << "CHANGING PASSWORD" << endl
															 << "Enter new password [4 - 8]: ";
														cin >> user_rep;
													} while (strlen(user_rep) < 4 || strlen(user_rep) > 8);
													clrscr();
													cout << "CHANGING PASSWORD" << endl
														 << "Is '" << user_rep << "' correct? [Y/N]";
													rep = tolower(getch());
												} while (rep != 'y');
												strcpy(password[x], user_rep);
											}
											break;
										case '4':
											clrscr();
											cout << "Exiting";
											for (int x = 1; x <= 3; x++) {
												cout << ".";
												delay(600);
											}
											set_run = 0;
											break;
									}
								}
								break;
							case '4':
								clrscr();
								cout << "Exiting";
								for (int x = 1; x <= 3; x++) {
									cout << ".";
									delay(600);
								}
								delay(500);
								system_running = 0;
								break;
						}
					}
				}
				else {
					cout << "Wrong password";
					delay(1000);
				}
				break;
			case '2':
				clrscr();
				do {
					do {
						clrscr();
						cout << "SIGNING UP" << endl
							 << "Please enter a new username [8 - 20]: ";
						cin >> account[accounts];
					} while (strlen(account[accounts]) < 8 || strlen(account[accounts]) > 20);
					clrscr();
					cout << "SIGNING UP" << endl
						 << "Is '" << account[accounts] << "' correct? [Y/N]";
					rep = tolower(getch());
				} while (rep != 'y');
				do {
					do {
						clrscr();
						cout << "SIGNING UP" << endl
							 << "Please enter a new password [4 - 8]: ";
						cin >> password[accounts];
					} while (strlen(password[accounts]) > 8 || strlen(password[accounts]) < 4);
					clrscr();
					cout << "SIGNING UP" << endl
						 << "Is '" << password[accounts] << "' correct? [Y/N]";
					rep = tolower(getch());
				} while (rep != 'y');
				do {
					do {
						clrscr();
						cout << "SIGNING UP" << endl
							 << "Please enter your name [2 - 10]: ";
						cin >> name[accounts];
					} while (strlen(name[accounts]) < 2 || strlen(name[accounts]) > 10);
					clrscr();
					cout << "SIGNING UP" << endl
						 << "Is '" << name[accounts] << "' correct? [Y/N]";
					rep = tolower(getch());
				} while (rep != 'y');
				balance[accounts] = 0;
				clrscr();
				cout << "Welcome to the CUH Bank, " << name[accounts] << "!" << endl
					 << "Please remember your username and password!";
				delay(3000);
				accounts++;
				break;
			case '3':
				running = 0;
				break;
			case '4':
				clrscr();
					for (x = 0; x < accounts; x++) {
					cout << account[x] << endl << password[x] << endl;
				}
				getch();
		}
	} while (running == 1);
	clrscr();
	cout << "Exiting";
	for (int x = 1; x <= 3; x++) {
		cout << ".";
		delay(600);
	}
	return 0;
}