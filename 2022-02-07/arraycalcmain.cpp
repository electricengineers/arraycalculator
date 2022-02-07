#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Array.h"

int main() {
	Array integers1(7);
	Array integers2;

	cout << "배열 integer1 의 크기 : "
		<< integers1.getSize()
		<< "\n초기화 후의 배열 : \n" << integers1;

	cout << "배열 integer2 의 크기 : "
		<< integers2.getSize()
		<< "\n초기화 후의 배열 : \n" << integers2;

	cout << "\n 17개 정수 입력: " << endl;
	cin >> integers1 >> integers2;

	cout << "입력 후 배열 내용 : \n"
		<< "integers1:\n" << integers1
		<< "integers2:\n" << integers2;

	cout << "\n평가 : integers1 != integers2" << endl;

	if (integers1 != integers2)
		cout << " integers1 과 integers2 는 not equal" << endl;

	Array integers3(integers1);
	cout << "배열 integer3 의 크기 : "
		<< integers3.getSize()
		<< "\n초기화 후의 배열 : \n" << integers3;

	cout << "integers2 를 integers1 에 assign" << endl;
	integers1 = integers2;

	cout << "integers1: \n" << integers1
		<< "integers2: \n" << integers2;
	cout << "\n평가 : integers1 == integers2" << endl;
	if (integers1 == integers2)
		cout << " integers1 과 integers2 는 equal" << endl;

	cout << "\nintegers1[5] : " << integers1[5];

	cout << "\n\n1000 을 integers1[5] 에 assign" << endl;
	integers1[5] = 1000;

	cout << "integers1 : \n" << integers1;

	cout << "\n1000 을 integers1[15] 에 할당 시도" << endl;
	integers1[15] = 1000;
	return 0;
}