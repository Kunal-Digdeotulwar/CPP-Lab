//============================================================================
// Name        : Question3.cpp
// Author      : Kunal Digdeotulwar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
    int num = 10;

    int *ptr = &num;
    int &ref = num;

    cout << "Initial value: " << num << endl;

    *ptr = 20;
    cout << "After modifying using pointer: " << num << endl;

    ref = 30;
    cout << "After modifying using reference: " << num << endl;

    return 0;
}
