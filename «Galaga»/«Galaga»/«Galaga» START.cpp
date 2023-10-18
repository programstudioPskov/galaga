// «Galaga» - это старая игра про космические стрелялки
//system("chcp 65001 && cls");
#include <iostream> 
#include <windows.h> 
#include <string> 

using namespace std;

//loading() - это функция загрузки 
void loading1() {
    for (int i = 0; i <= 100; i++) {
        cout << " Loading(" << i << "%)" << "\r";
        Sleep(50);
    }
    cout << endl;
}

//main() - это основная функция 
int main1() {
    setlocale(LC_ALL, "ru-ru");
    int level;
    cout << "добро пожаловать в игру, для управления используйте стрелочки\n\n";
    Sleep(2000);
    for (int i = 0; i <= 100; i++) {
        cout << " Loading(" << i << "%)" << "\r";
        Sleep(50);
    }
    cout << endl;
    system("cls");
    cout << "\n\nзаполните настройки игры(мы зададим пару вопросов)\nвыберите уровень сложности\n1 - простой\n2 - средний\n3 - сложный\n введите цифру вашего выбора - ";
    cin >> level;
    return 0;
}
