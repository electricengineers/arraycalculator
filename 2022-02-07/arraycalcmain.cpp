#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Array.h"

int main() {
	Array integers1(7);
	Array integers2;

	cout << "�迭 integer1 �� ũ�� : "
		<< integers1.getSize()
		<< "\n�ʱ�ȭ ���� �迭 : \n" << integers1;

	cout << "�迭 integer2 �� ũ�� : "
		<< integers2.getSize()
		<< "\n�ʱ�ȭ ���� �迭 : \n" << integers2;

	cout << "\n 17�� ���� �Է�: " << endl;
	cin >> integers1 >> integers2;

	cout << "�Է� �� �迭 ���� : \n"
		<< "integers1:\n" << integers1
		<< "integers2:\n" << integers2;

	cout << "\n�� : integers1 != integers2" << endl;

	if (integers1 != integers2)
		cout << " integers1 �� integers2 �� not equal" << endl;

	Array integers3(integers1);
	cout << "�迭 integer3 �� ũ�� : "
		<< integers3.getSize()
		<< "\n�ʱ�ȭ ���� �迭 : \n" << integers3;

	cout << "integers2 �� integers1 �� assign" << endl;
	integers1 = integers2;

	cout << "integers1: \n" << integers1
		<< "integers2: \n" << integers2;
	cout << "\n�� : integers1 == integers2" << endl;
	if (integers1 == integers2)
		cout << " integers1 �� integers2 �� equal" << endl;

	cout << "\nintegers1[5] : " << integers1[5];

	cout << "\n\n1000 �� integers1[5] �� assign" << endl;
	integers1[5] = 1000;

	cout << "integers1 : \n" << integers1;

	cout << "\n1000 �� integers1[15] �� �Ҵ� �õ�" << endl;
	integers1[15] = 1000;
	return 0;
}