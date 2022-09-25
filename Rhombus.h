#pragma once
#include<cmath>
#include "Point.h"
template <typename T>
class Rhombus {
	public:
		double x, y;
	Point<T> points[5];//�����
	double side, diagonal1,diagonal2;
	//Rhombus(T x1, Ty1, Tx2, T y2, T diag) {
	//	x = (x1 + x2) / 2;
	//	y = (y1 + y2) / 2;
	//	c1(((x1 + x2) / 2), ((y1 + y2) / 2));
	//	double l = diag / 2;
	//}

	void CalculatePoints(T x1, T y1, T x2, T y2, T diagonal)//���������� ���� �� �����
	{
		if (diagonal > 0) {
			double m = sqrt(pow(diagonal, 2) / (1 + 1 / pow(((y2 - y1) / (x2 - x1)), 2)));//������ �������� �������

			points[0] = Point<T>(x2 - m, y2 + m);// ���������� ���� ����������� ����� � �������� �������
			points[2] = Point<T>(x2 + m, y2 - m);
			points[4] = Point<T>((x1 + x2) / 2, (y1 + y2) / 2);
		}
	}
	Rhombus(T xA, T yA, T xC, T yC, T diagonal)// ����������� ������ �� ��������� ����� �� ��������
	{
		if (diagonal > 0) {//����������, �� �������� ����� �� ����, ���� �� �� �������� � ��������
			diagonal2 = diagonal;
			points[1] = Point<T>(xA, yA);//������������ �� ���� �����
			points[3] = Point<T>(xC, yC);
			CalculatePoints(xA, yA, xC, yC, diagonal);
			diagonal1 = sqrt(pow((points[1].getX() - points[3].getX()), 2) + pow((points[1].getY() - points[3].getY()), 2));//������ �������� ���� �������
		}
		else {
			exit(0);
		}
	} 

	T CalculateSide()
	{
		return side = sqrt(pow((points[1].getX() - points[0].getX()), 2) + pow((points[1].getY() - points[0].getY()), 2));//������ ������� �����
	}

	T Perimert() { return side * 4; }//������ �������� �����
	T Area() { return diagonal1 * diagonal2 / 2; }//������ ����� ����� �� ����� ������������ ��������� �� �������� ���� �������
	void ChangeRhombus(T xB, T yB, T xD, T yD, T diagonal)
	{
		if (diagonal > 0) {
			diagonal1 = diagonal;
			points[1] = Point<T>(xB, yB);
			points[3] = Point<T>(xD, yD);
			CalculatePoints(xB, yB, xD, yD, diagonal);//������ ���������� �� ���� �����
			diagonal2 = sqrt(pow((points[0].getX() - points[2].getX()), 2) + pow((points[0].getY() - points[2].getY()), 2));//������ ��� ���� ��������
		}
		else {
			exit(0);
		}
	}
};