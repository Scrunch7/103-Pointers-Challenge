#pragma once

int numOne;
int numTwo;

int arr[5], i, sum = 0;
int* ptr;

int arr2[5], x;
int* p = arr2;

using std::cout;
using std::cin;
using std::endl;

void swapCode(int* first, int* second) {

    int temp;

    temp = *first;
    *first = *second;
    *second = temp;

}

void printTop() {
    cout << "Enter the numbers : " << endl;
    cin >> numOne;
    cin >> numTwo;

    cout << "Before swap, a = " << numOne << "\tmemory address = " << &numOne << endl;
    cout << "             b = " << numTwo << "\tmemory address = " << &numTwo << "\n\n";
}

void swap() {
    swapCode(&numOne, &numTwo);
}

void printBottom() {
    cout << "After swap,  a = " << numOne << "\tmemory address = " << &numOne << endl;
    cout << "             b = " << numTwo << "\tmemory address = " << &numTwo << endl;
}

//---------------------

void challenge2() {

    cout << "Enter any 5 numbers :";
    for (i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    ptr = arr;
    for (i = 0; i < 5; i++) {
        sum = sum + *(ptr + i);
    }

    cout << "\nSum of array elements :" << sum;
}

//---------------------

void challenge3() {
    
    cout << "Enter five numbers separated by space:";
    cin >> *p >> *(p + 1) >> *(p + 2) >> *(p + 3) >> *(p + 4);
    cout << "Your entered numbers in reverse order are:\n";
    for (x = 4; x >= 0; x--)
        cout << *(p + x) << endl;
}