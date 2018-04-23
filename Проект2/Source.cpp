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
		/*cout << "введите номер задания или для выхода нажмите - 0: ";
		cin >> nz;
		cout << "\n";*/
		int pos, num;
		Vector v1(10);
		nz = 1;
		switch (nz) {
		case 1: {
			cout << "1. добавление нового значения в конец дин. массива\n";
			cout << "\nвведите любое число: "; cin >> num;
			v1.pushBack(num);
			v1.print();
		} 
		case 2: {
			cout << "\n\n2.добавление в указанную позицию\n";
			cout << "\nвведите позицию: "; cin >> pos;
			cout << "введите любое число: "; cin >> num;
			v1.pushPos(pos, num);
			v1.print();
		}
		case 3: {
			cout << "\n\n3.удаление из указанной позиции\n";
			cout << "\nвведите позицию: "; cin >> pos;
			v1.deletePos(pos);
			v1.print();
		}
		case 4: {
			cout << "\n\n4.изменение значения в указанной позиции\n";
			cout << "\nвведите позицию: "; cin >> pos;
			cout << "введите любое число: "; cin >> num;
			v1.at(pos) = num;
			v1.print();
		}
		case 5: {
			cout << "\n\n5.возврат значения из указанной позиции\n";
			cout << "\nвведите позицию: "; cin >> pos;
			cout << "введите любое число: "; cin >> num;
			v1.returnInPos(pos,num);
			v1.print();
		}
		}

		cout << "\n\nхотите продолжить?1/0 ";
		cin >> nz;
		if (nz == 1)
			system("cls");
	} while (nz > 0);

system("pause");
}