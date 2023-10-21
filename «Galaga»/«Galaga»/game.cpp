#include <iostream> 
#include <windows.h> 
#include <string> 

using namespace std;

void main() {
	setlocale(LC_ALL, "ru-ru");
	int V = 39, S = 122;
	int x = 70, y = 2;
	int x1 = rand() %119 - 3, y1 = 36;
	int prog = 0;
	int aster = 0;
	while (prog != 1)
	{
		if (GetAsyncKeyState(VK_LEFT)) {
			x -= 3;
		}
		else if (GetAsyncKeyState(VK_RIGHT)) {
			x += 3;
		}
		system("cls");
		cout << "________________________________________________________________________________________________________________________________________________________________________";
		for (int i = 0; i < V; i++) {
			if (i == y) {
				for (int re = 0; re < S; re++) {
					if (re == x) {
						cout << "*****";
					}
					else {
						cout << " ";
					}
				}
			}
			else if (i == y1) {
				if (y1 - 1 == y && x1 == x | x1 == x+1 | x1 == x+2 | x1 == x + 3) {
					aster += 1;
					x1 = rand() % 119 - 3;
					y1 = 36;
				}
				else if (i == 2) {
					x1 = rand() % 119 - 3;
					y1 = 36;
				}
				else {
					for (int re = 0; re < S; re++) {
						if (re == x1) {
							cout << "()";
						}
						else {
							cout << " ";
						}
					}
				}
				y1 -= 1;
			}
			else {
				cout << "\n";
			}
		}
		cout << "________________________________________________________________________________________________________________________________________________________________________";
		cout << "\n\nочков - " << aster;
	}
	
}
