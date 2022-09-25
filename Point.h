#pragma once

template <typename T>
class Point {
	
	T x, y;//координати точки
	public:
	Point(T x, T y) {
		this->x = x;
		this->y = y;
	}
	Point() { x = 0; y = 0; }//конструктор без параметрів
	T getX() { return x; }
	T getY() { return y; }


};