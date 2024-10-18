#include<iostream>
using namespace std;
// Write C++ program to add two integer values and print the output with descriptive 
//message.
int main(){
	int num1;
	int num2;
	cout<<"Enter a number1:";
	cin>>num1;
	cout<<"Enter a number2:";
	cin>>num2;
	int result = num1 + num2;
    cout << "The sum of the two numbers is: " << result << endl;
    return 0;
	
}