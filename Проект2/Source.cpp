#include <iostream>
#include<string>
#include <locale>
#include"vector.h"


using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	short nz;
	do {
		/*cout << "������� ����� ������� ��� ��� ������ ������� - 0: ";
		cin >> nz;
		cout << "\n";*/
		int pos, num;
		Vector v1(10);
		nz = 1;
		switch (nz) {
		case 1: {
			cout << "1. ���������� ������ �������� � ����� ���. �������\n";
			cout << "\n������� ����� �����: "; cin >> num;
			v1.pushBack(num);
			v1.print();
		} 
		case 2: {
			cout << "\n\n2.���������� � ��������� �������\n";
			cout << "\n������� �������: "; cin >> pos;
			cout << "������� ����� �����: "; cin >> num;
			v1.pushPos(pos, num);
			v1.print();
		}
		case 3: {
			cout << "\n\n3.�������� �� ��������� �������\n";
			cout << "\n������� �������: "; cin >> pos;
			v1.deletePos(pos);
			v1.print();
		}
		case 4: {
			cout << "\n\n4.��������� �������� � ��������� �������\n";
			cout << "\n������� �������: "; cin >> pos;
			cout << "������� ����� �����: "; cin >> num;
			v1.at(pos) = num;
			v1.print();
		}
		case 5: {
			cout << "\n\n5.������� �������� �� ��������� �������\n";
			cout << "\n������� �������: "; cin >> pos;
			cout << "������� ����� �����: "; cin >> num;
			v1.returnInPos(pos,num);
			v1.print();
		}
		}

		cout << "\n\n������ ����������?1/0 ";
		cin >> nz;
		if (nz == 1)
			system("cls");
	} while (nz > 0);

system("pause");
}