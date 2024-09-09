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
	int GetX() // ������ - 
	{
		return x;
	}
	void SetX(int _x) // ������ - 
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
// ������������ ���������� ���� � ������� (������) � ���� �����. 
// ���������� ��������� ������� � ���� �������� �����
// � ��������� ������ � ���� ��������
// �.�. � ����. ����� ������ ����� ����������� �� 2 �����
// ���������� (private, protected) ��������� - public. 

// ��������� ���������� ����� (� �������� ����) ��� ������� � ����� ������.
// �.�. ��� ��������� ����������, ������ ������ �������������.
// ��������� �� ��������!!!