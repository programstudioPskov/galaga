
#include <iostream>
#include <windows.h>
#include <string>
#include <random>
#include <cstdlib>
#include <vector>

/*

___I_________I____
\_|I|       |I| _/
  \_          _/
    \_      _/
      \    /
       |  |
       \  /
        \/
*/

using namespace std;

int V_P = 60, SH_P = 237, R = 82, L = 85;
vector<int> vec;
int inter;
int po = 0;
int win = 0;

#include <windows.h>

int menu() {
    // первая строка песни Санса
    int frequency[] = { 261, 261, 392, 349, 329, 293, 261 };
    int duration[] = { 500, 500, 1000, 500, 500, 500, 1000 };
    int notesCount = sizeof(frequency) / sizeof(frequency[0]);

    for (int i = 0; i < notesCount; i++) {
        Beep(frequency[i], duration[i]);
    }

    return 0;
}

int maini(int speed) {
    cout << "game\n";
    bool running = true;
    //int patron = [];
    while (running) {
        if (GetAsyncKeyState(VK_LEFT)) {
            //system("cls");
            Beep(1000, 500);
            R -= speed, L -= speed;
        }

        else if (GetAsyncKeyState(VK_RIGHT)) {
            //system("cls");
            Beep(1000, 500);
            R += speed, L += speed;
        }

        else if (GetAsyncKeyState(VK_ESCAPE)) {
            running = false;
        }
        else if (GetAsyncKeyState(VK_SPACE)) {
            //running = false;
            system("PAUSE");
        }
        system("cls");
        cout << "\n";
        for (int SH = 0; SH < SH_P; SH++) {
            cout << "_";
        }

        for (int i = 0; i < SH_P; i++) {
            if (i > R + 9 && i < L + 9) {
                cout << "____I________I____\n";
                break;

            }
            else
            {
                cout << " ";
            }
        }
        for (int i = 0; i < SH_P; i++) {
            if (i > R + 9 && i < L + 9) {
                cout << "\\_ |I|      |I| _/\n";
                break;

            }
            else
            {
                cout << " ";
            }
        }
        for (int i = 0; i < SH_P; i++) {
            if (i > R + 9 && i < L + 9) {
                cout << "  \\___      ___/  \n";
                break;

            }
            else
            {
                cout << " ";
            }
        }
        for (int i = 0; i < SH_P; i++) {
            if (i > R + 9 && i < L + 9) {
                cout << "      \\    /      \n";
                break;

            }
            else
            {
                cout << " ";
            }
        }
        for (int i = 0; i < SH_P; i++) {
            if (i > R + 9 && i < L + 9) {
                cout << "       |  |       \n";
                break;

            }
            else
            {
                cout << " ";
            }
        }
        for (int i = 0; i < SH_P; i++) {
            if (i > R + 9 && i < L + 9) {
                cout << "       \\  /       \n";
                break;

            }
            else
            {
                cout << " ";
            }
        }
        for (int i = 0; i < SH_P; i++) {
            if (i > R + 9 && i < L + 9) {
                cout << "        \\/        \n";
                break;

            }
            else
            {
                cout << " ";
            }
        }
        int U = 0;

        for (int V = 0; V < V_P - 8; V++) {
            if (V == U) {
                for (int i = 0; i < SH_P; i++) {
                    if (i > R + 17 && i < L + 17) {
                        cout << "|";

                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
            U++;
            cout << "\n";
        }
        random_device rd;
        mt19937 generator(rd());
        uniform_int_distribution<int> distribution(0, 237);
        int randomNumber = distribution(generator);
        for (int SH = 0; SH < SH_P - 6; SH++) {
            if (SH == randomNumber) {
                vec.push_back(randomNumber);
            }
        }

        for (int SH = 0; SH < SH_P; SH++) {
            auto result = find(vec.begin(), vec.end(), SH);
            if (result != vec.end()) {
                cout << "$$$$$$";
                SH + 4;
            }
            else {
                cout << "_";
            }
        }
        cout << "\n очков - " << win;
        //Sleep(0.1);

    }
    return 0;
}

void loading() {
    for (int i = 0; i <= 100; i++) {
        cout << " Loading(" << i << "%)" << "\r";
        Sleep(50);
    }
    cout << endl;
}

//main() - это основная функция 
int main1() {
    setlocale(LC_ALL, "ru-ru");
    menu();
    cout << "\nдобро пожаловать в игру, для управления используйте стрелочки\n\n";
    Sleep(2000);
    for (int i = 0; i <= 100; i++) {
        cout << " Loading(" << i << "%)" << "\r";
        Sleep(50);
    }
    cout << endl;
    system("cls");
    cout << "\n\nзаполните настройки игры(мы зададим пару вопросов)\nвведите скорость(символов в секунду(рекомендую 13 или 17)) - ";
    int speed;
    cin >> speed;
    maini(speed);
    return 0;
}