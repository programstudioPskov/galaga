#include <iostream> 
#include <windows.h> 
#include <string> 

using namespace std;

void main() {
	setlocale(LC_ALL, "ru-ru");
	int V = 25, S = 122;
	int x = 70, y = 5;
	int prog = 0;
	while (prog != 1)
	{
		if (GetAsyncKeyState(VK_LEFT)) {
			x -= 3;
		}
		else if (GetAsyncKeyState(VK_RIGHT)) {
			x += 3;
		}
		system("cls");
		cout << "__________________________________________________________________________________________________________________________";
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
			else {
				cout << "\n";
			}
		}
		cout << "__________________________________________________________________________________________________________________________";

	}
	
}
