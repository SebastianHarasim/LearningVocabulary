#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Polish");



	string tab_polish[5];
	string tab_english[5];
	string word_polish;
	int end = 0;
	int wybor = 1;

	
	do {
		for (int i = 0; i <= 4; i++) {
			cout << "______________________________________________" << endl;
			cout << "|                                             |" << endl;
			cout << "|                    WORD " << i + 1 << "                   |" << endl;
			cout << "|_____________________________________________|" << endl << endl;
			cout << "        Polish       ";
			cin >> tab_polish[i];
			cout << endl;
			cout << "        English      ";
			cin >> tab_english[i];
			Sleep(500);
			system("cls");
		}


		system("cls");

		while (wybor == 1) {

			for (int i = 0; i <= 4; i++) {
				cout << "______________________________________________" << endl;
				cout << "|                                             |" << endl;
				cout << "|                    WORD " << i + 1 << "                   |" << endl;
				cout << "|_____________________________________________|" << endl << endl;
				cout << endl;
				cout << "              " << tab_english[i] << " - ";
				cin >> word_polish;
				system("cls");
				if (tab_polish[i] == word_polish) {
					cout << "______________________________________________" << endl;
					cout << "|                                             |" << endl;
					cout << "|                    True :)                  |" << endl;
					cout << "|_____________________________________________|" << endl << endl;
					cout << endl;
					cout << "              " << tab_english[i] << " - " << tab_polish[i];
					Sleep(1200);
					end++;
					if (end == 5) {
						i = 5;
					}

				}
				else {
					cout << "______________________________________________" << endl;
					cout << "|                                             |" << endl;
					cout << "|                   False :(                  |" << endl;
					cout << "|_____________________________________________|" << endl << endl;
					cout << endl;
					cout << "              " << tab_english[i] << " - " << tab_polish[i];
					Sleep(1200);
				}


				system("cls");
			}
			if (end == 5) {
				cout << endl;
				cout << "Brawo umiesz już wszystkie słówka !!!" << endl << endl;
				cout << "          Retry -- 1" << endl;
				cout << "          End -- 2" << endl;
				cin >> wybor;
				system("cls");
			}
			else {
				cout << endl;
				cout << "Musisz jeszcze trochę poćiwczyć !!!" << endl << endl;
				cout << "Uczeń : 'lenic się lenic'" << endl;
				cout << "Lenin : 'uczyć się uczyć'" << endl << endl;

				cout << "          Retry -- 1" << endl;
				cout << "          End -- 2" << endl;
				cin >> wybor;
				system("cls");
				

			}
			end = 0;
		}
	} while (wybor == 1);
	

}
