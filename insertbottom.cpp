//Write a C++ program to insert new ITEM at Bottom of the array. Print all elements 
//of the array.
#include <iostream>
using namespace std;

int main() {
    int capacity;
    cout << "Enter the array capacity: ";
    cin >> capacity;
    int num[capacity] = {1, 3, 4, 5, 6, 7, 8, 8}; 
    int size = 9;
    if (size >= capacity) {
        cout << "Array is full, cannot insert new item." << endl;
    } else {
        int newItem;
        cout << "Enter the new item to insert at the bottom: ";
        cin >> newItem;

        num[size] = newItem; 
        size++; 
    }


    for (int i = 0; i < size; i++) {
        cout << "Index " << i << " value " << num[i] << endl;
    }

    return 0;
}
