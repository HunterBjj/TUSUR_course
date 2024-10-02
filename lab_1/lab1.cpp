/*
    Номер группы 317, факультет Доп. Образование.
    Разработчики программы Урманов Артём Александрович.
    Номер Лабораторной работы 1.
*/

#include <iostream>

using namespace std;


// Вычисляет скорость прямолинейного движения (по расстоянию и времени).
int calc_speed(int s, int t) {  
    return s / t;
}


// Вычисляет ускорение (по начальной скорости, конечной скорости и времени).
int calc_boost(int v1, int v0, int t) { 
    return (v1 - v0) / t
}


int main()
{
    int a, b, S;

    while((!int(a) && !int(b)) && (a < 0 && b < 0)) { // Проверка на ввод положительного числа.
        cout << "Введите значение стороны a (м):" << endl;
        cin >> a;
        cout << "Введите значение стороны b (м):" << endl;
        cin >> b;
    }

    S = a * b; 

    cout << "Площадь прямоугольника S = " << S << " (м)" << endl;

    return 0;
}


