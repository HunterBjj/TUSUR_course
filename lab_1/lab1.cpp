/*
    Номер группы 317, факультет Доп. Образование.
    Разработчики программы Урманов Артём Александрович.
    Номер Лабораторной работы 1.
*/

#include <iostream>
#include <iomanip>

using namespace std;

void print() {
    cout << "*****" << setw(20) << "ТУСУР" << setw(20) << "*****" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "\n";
        if(i == 5) {
            cout.width(51);
            cout<<" Факультет: Доп. Образование " << endl;
            cout.width(50);
            cout<< "Группа: 317" << endl;
            cout.width(51);
            cout<< "Урманов Артём\n" << endl;
            if(i == 10) {

            }
        }
    }
    cout << setw(25) << "ТУСУР 2024" << setw(25) << endl;

}

int calc_speed(int s, int t) {
    return s / t;
}

int calc_boost(int v1, int v0, int t) {
    return (v1 - v0) / t;
}


int main()
{
    int a, b, S;

    while((!int(a) && !int(b)) && (a < 0 && b < 0)) { // Проверка на ввод положительного числа.
        cout << "Введите значение стороны a (м):" << endl;
        cin >> a;
        cin.ignore(32767, '\n'); // Функция игнорируюет символы кроме \n
        cout << "Введите значение стороны b (м):" << endl;
        cin >> b;
        cin.ignore(32767, '\n');
    }

    S = a * b; // Площадь прямоугольника.

    cout << "Площадь прямоугольника S = " << S << " (м)" << endl;
    print();

    return 0;
}


