#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	void Input()
	{
		cin >> x >> y;
	}
	void Show() {
		cout << x << "\t" << y << endl;
	}
	int GetX() // гетери - 
	{
		return x;
	}
	void SetX(int _x) // сетери - 
	{
		if (_x >= 0)
			x = _x;
	}
	Point Add(Point b)
	{
		Point rez;
		rez.x = x + b.x;
		rez.y = y + b.y;
		return rez;
	}
	void Init(int _x, int _y) {
		x = _x; y = _y;
	}
};

int main()
{
	Point a;
	//a.Input();
	a.Init(2, 3);
	Point b;
	b.Init(3, 4);
	//b.Input();
	Point c = a.Add(b);
	c.Show();
	//a.Show();
	//a.SetX(4);
	//cout << "X = " << a.GetX() << endl;
}
// Инкапсуляция объединяет поля и функции (методы) в один класс. 
// Появляется состояние объекта в виде закрытой части
// И интерфейс класса в виде открытой
// Т.е. с техн. точки зрения класс разбивается на 2 части
// Реализация (private, protected) интерфейс - public. 

// Закрываем реализацию класс (в основном поля) для подмены в любой момент.
// Т.е. при изменении реализации, клиент ничего непочувствует.
// Интерфейс не меняется!!!