#include<iostream>
#include "windows.h"
using namespace std;
#include "Rhombus.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Rhombus<int> figureInt = Rhombus<int>(0, 0, 4, 4, 9);//передаємо протилежні точки та діагональ
	cout << "-------Створюємо ромб з int значеннями--------" << endl;
	cout << "Сторона ромба: " << figureInt.CalculateSide() << endl;
	cout << "Периметр ромба: " << figureInt.Perimert() << endl;
	cout << "Площа ромба: " << figureInt.Area() << endl << endl;
	cout << "-------Змінюємо протилежні точки і діагональ--------" << endl;
	figureInt.ChangeRhombus(1, 1, 16, 16, 25);
	cout << "Сторона ромба: " << figureInt.CalculateSide() << endl;
	cout << "Периметр ромба: " << figureInt.Perimert() << endl;
	cout << "Площа ромба: " << figureInt.Area() << endl << endl;

	cout << "-------Створюємо новий ромб з double значеннями--------" << endl;
	Rhombus<double> figureDouble = Rhombus<double>(0, 0, 4.5, 4.5, 9.7);
	cout << "Сторона ромба: " << figureDouble.CalculateSide() << endl;
	cout << "Периметр ромба: " << figureDouble.Perimert() << endl;
	cout << "Площа ромба: " << figureDouble.Area() << endl << endl;
	cout << "-------Змінюємо протилежні точки і діагональ--------" << endl;
	figureDouble.ChangeRhombus(1.1, 1.6, 16.4, 16.1, 25.5);
	cout << "Сторона ромба: " << figureDouble.CalculateSide() << endl;
	cout << "Периметр ромба: " << figureDouble.Perimert() << endl;
	cout << "Площа ромба: " << figureDouble.Area() << endl << endl;
}
