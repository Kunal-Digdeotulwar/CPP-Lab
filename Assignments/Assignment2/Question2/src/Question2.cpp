//============================================================================
// Name        : Question2.cpp
// Author      : Kunal Digdeotulwar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "Inside swapByValue: a = " << a << " b = " << b << endl;
}

void swapByAddress(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "Inside swapByAddress: a = " << *a << " b = " << *b << endl;
}

void swapByReference(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "Inside swapByReference: a = " << a << " b = " << b << endl;
}

int main() {
	int x = 10, y = 20;

	cout << "Original values: x = " << x << " y = " << y << endl;

	swapByValue(x, y);
	cout << "After swapByValue: x = " << x << " y = " << y << endl;

	swapByAddress(&x, &y);
	cout << "After swapByAddress: x = " << x << " y = " << y << endl;

	swapByReference(x, y);
	cout << "After swapByReference: x = " << x << " y = " << y << endl;

	return 0;
}
