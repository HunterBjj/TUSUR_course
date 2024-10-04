/*
    Номер группы 317, факультет Доп. Образование.
    Разработчики программы Урманов Артём Александрович.
    Номер Лабораторной работы 1.
*/


#include <iostream>
#include <iomanip>

using namespace std;

void print_name() {
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
        }
    }
    cout << setw(25) << "ТУСУР 2024" << setw(25) << endl;
}


float calc_radius(int a){
    return a / (2 * 3,14);
}


int calc_speed(int s, int t) {
    return s / t;
}


int calc_boost(int v1, int v0, int t) {
    return (v1 - v0) / t;
}


int main()
{
    int a, b, t, S, select;

    cout << " Введите 1, если хотите скорость прямолинейного движения. \n 2 если вычислить ускорение. \n 3 вычислить радиус круга. \n 4 Вывести имя. \n" << endl;
    cin >> select;

    if(select == 4) {
        print_name();
        return 0;
    }

    while((!int(a) && !int(b)) && (a < 0 && b < 0)) { // Проверка на ввод положительного числа.

        cout << "Введите значение элемента:" << endl;
        cin >> a;
        cin.ignore(32767, '\n'); // Функция игнорируюет символы кроме
        cout << "Введите значение второго элемента, если он необходим:" << endl;
        cin >> b;
        cin.ignore(32767, '\n');
        cout << "Введите значение времени, если оно необходимо:" << endl;
        cin >> t;
        cin.ignore(32767, '\n');

        if (select == 1) {
            int res = calc_speed(a, b);

            cout << "Cкорость прямолинейного движения v = " << res << " (м)" << endl;
        }
        else if (select == 2) {
            int res = calc_boost(a, b, t);

            cout << " Ускорение = " << res << endl;
        }
        else if (select == 3) {
            float res = calc_radius(a);

            cout << "Радиус круга R = " << res << " (cм)" << endl;
        }
        else {
            cout << "Вы выбрали невеный параметр";
        }
    }

    return 0;
}


