#include "Header.h"
#include <conio.h>
#include<iostream>
using namespace std;

void menu()
{
	cout << "1. �������� ������� � �������\n";
	cout << "2. �������� ������� �� �������\n";
	cout << "3. ���������� ������� �� �������\n";
	cout << "4. ����� �������\n";
	cout << "5. �����\n";
}

int main()
{
	setlocale(LC_ALL, "RUS");
	Queue a;
	int b;
	bool flag = true;
	while (flag)
	{
		menu();
		switch (_getch()) 
		{
			case '1':
				cout << "�������� �������: ";
				cin >> b;
				a.Push(b);
				break;
			case '2':
				a.Pop(b) ? cout << "���������� ������� " << b << endl : cout << "������� �����\n";
				break;
			case '3':
				a.Peek(b) ? cout << "��������� ������� " << b << endl : cout << "������� �����\n";
				break;
			case '4':
				b = a.GetSize();
				cout << "����� �������: " << b << endl;
				break;
			case '5':
				flag = false;
				break;

		}
	}

}