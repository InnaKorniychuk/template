#include<iostream>
#include "windows.h"
using namespace std;
#include "Rhombus.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Rhombus<int> figureInt = Rhombus<int>(0, 0, 4, 4, 9);//�������� ��������� ����� �� ��������
	cout << "-------��������� ���� � int ����������--------" << endl;
	cout << "������� �����: " << figureInt.CalculateSide() << endl;
	cout << "�������� �����: " << figureInt.Perimert() << endl;
	cout << "����� �����: " << figureInt.Area() << endl << endl;
	cout << "-------������� ��������� ����� � ��������--------" << endl;
	figureInt.ChangeRhombus(1, 1, 16, 16, 25);
	cout << "������� �����: " << figureInt.CalculateSide() << endl;
	cout << "�������� �����: " << figureInt.Perimert() << endl;
	cout << "����� �����: " << figureInt.Area() << endl << endl;

	cout << "-------��������� ����� ���� � double ����������--------" << endl;
	Rhombus<double> figureDouble = Rhombus<double>(0, 0, 4.5, 4.5, 9.7);
	cout << "������� �����: " << figureDouble.CalculateSide() << endl;
	cout << "�������� �����: " << figureDouble.Perimert() << endl;
	cout << "����� �����: " << figureDouble.Area() << endl << endl;
	cout << "-------������� ��������� ����� � ��������--------" << endl;
	figureDouble.ChangeRhombus(1.1, 1.6, 16.4, 16.1, 25.5);
	cout << "������� �����: " << figureDouble.CalculateSide() << endl;
	cout << "�������� �����: " << figureDouble.Perimert() << endl;
	cout << "����� �����: " << figureDouble.Area() << endl << endl;
}
