#include<iostream>
//. Write C++ program to convert temperature from centigrade to Fahrenheit.
using namespace std;
class converttemperature{
public:
	float  centigrade,Fahrenheit;
	
public:
    void inputs() {
        cout << "Enter a temperature in centigrade: ";
        cin >> centigrade;
    }
    void converter() {
        Fahrenheit = (centigrade * 9 / 5) + 32;
    }
    void display() {
        cout << "Temperature from centigrade to Fahrenheit is: " << Fahrenheit << "F" << endl;
    }
};
int main(){
	converttemperature c;
	c.inputs();
	c.converter();
	c.display();
	return 0;
}