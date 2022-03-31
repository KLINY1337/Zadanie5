#include <iostream>
#include "functions.h"
#include "random"
using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");

	cout << "������������ ������ �5 ����-13-21 ���������� �.�. ������� 23" << endl << endl;
	
	cout << "������� ���������� ��������� � ������ L:\n";
	int len1;
	cin >> len1;

	cout << "\n������� ���������� ��������� � ������ M:\n";
	int len2;
	cin >> len2;

	list l, m;

	cout << "\n��������������� ������ L: ";
	l.generate(len1);
	l.print();
	cout << "\n";

	cout << "\n��������������� ������ M: ";
	m.generate(len2);
	m.print();
	cout << "\n";

	cout << "�������� �������:\n1) ������� � ������� ������ LM\n2) ������� �� ������ M ��������� (����� ������ M - ����� ������ L) ���������\n0) ��������� ���������\n";
	int choice1;

	do {
		cin >> choice1;

		if (choice1 != 1 && choice1 != 2 && choice1 != 0) cout << "������� �������� ��������, ���������� �����.\n";
	} while (choice1 != 1 && choice1 != 2 && choice1 != 0);

	system("cls");

	switch (choice1) {

	case 1: {
		cout << "��������������� ������ LM:\n";
		list2 lm;
		lm.match(l, m);
		lm.print();
		cout << "\n";
		break; }

	case 2: {
		cout << "������ M ��� ��������� ���������: ";
		delete_M(l, m);
		m.print();
		cout << "\n\n";
		break; }

	case 0:
		return 0;
	}
	main();
}