//============================================================================
// Name        : Question4.cpp
// Author      : Kunal Digdeotulwar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
    int *arr = new int[5];

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter value : " <<endl;
        cin >> arr[i];
    }

    cout << "Array values: ";

    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    delete[] arr;

    return 0;
}
