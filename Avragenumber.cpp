/*Write a program to display the average of three numbers entered by the user by 
creating a class named 'Average' having a function to calculate and display the 
average.*/
#include<iostream>
using namespace std;

class Averagenumber {
public:
    int num1, num2, num3;

    void average() {
        int result =num1+num2+num3/3
    }

    void display() {
        cout << "The average of the 3 numbers is: " << average();
    }

    void inputs() {
        cout << "Enter num1: ";
        cin >> num1;
        cout << "Enter num2: ";
        cin >> num2;
        cout << "Enter num3: ";
        cin >> num3;
    }
};

int main() {
    Averagenumber A;

    A.inputs();

    A.display();

    return 0;
}

