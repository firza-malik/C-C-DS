#include <iostream>
using namespace std;

int main() {
    int a; 
    cout << "Enter the array capacity: ";
    cin >> a;

    int num[a] = {1, 3, 2, 5, 6, 7, 5};
    int size = 7; 

    if (size >= a) {
        cout << "Array is full, cannot insert new item." << endl;
        return 0;
    }

    int loc;
    cout << "Enter the location to insert the new item (0 to " << size << "): ";
    cin >> loc;

    if (loc < 0 || loc > size) {
        cout << "Invalid location." << endl;
        return 0;
    }

    int newItem;
    cout << "Enter the new item: ";
    cin >> newItem;

    for (int i = size; i > loc; i--) {
        num[i] = num[i - 1];
    }

    num[loc] = newItem;
    size++;

    for (int i = 0; i < size; i++) {
        cout << "Index: " << i << " Value: " << num[i] << endl;
    }

    return 0;
}
