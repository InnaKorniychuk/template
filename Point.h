#pragma once

template <typename T>
class Point {
	
	T x, y;//���������� �����
	public:
	Point(T x, T y) {
		this->x = x;
		this->y = y;
	}
	Point() { x = 0; y = 0; }//����������� ��� ���������
	T getX() { return x; }
	T getY() { return y; }


};