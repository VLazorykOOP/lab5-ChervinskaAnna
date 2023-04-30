// OOPLab5T.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <conio.h>
using namespace std;

// Ваші файли загловки 
//
#include "Lab5Exmaple.h"
int main()
{
    std::cout << " Lab #5  !\n";
    //  Код виконання завдань
    //  Головне меню завдань
    //  Функції та класи можуть знаходитись в інших файлах проекту

	char ch;
	do {
		cout << "\nSelect Task: \n";
		cout << "    1.  Task1 \n";
		cout << "    2.  Task2 \n";
		cout << "    3.  Task3 \n";
		cout << "    4.  Exit \n";

		ch = _getch();
		switch (ch) {
		case '1': Task1(); break;
		case '2': Task2(); break;
		case '3': Task3(); break;
		}
	} while (ch != '4');

}
