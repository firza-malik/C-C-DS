//3. Write C++ program to build simple calculator using switch case statement.
#include<iostream>
using namespace std;
int main(){
	int num1,num2,result;
	cout<<"enter a num1:";
	cin>>num1;
	cout<<"enter a num2:";
	cin>>num2;
	char opt;
	cout<<"enter a opt(*,+,-,/):";
	cin>>opt;
	switch(opt){
		case '*':
		result=num1*num2;
		cout<<"multiplication  num1 and num2 is:"<<result<<endl;
		break;
		case '-':
		result=num1-num2;
		cout<<"subtraction  num1 and num2 is:"<<result<<endl;
		break;
		case '+':
		result=num1+num2;
		cout<<"sum  num1 and num2 is:"<<result<<endl;
		break;
		case '/':
	    double result=num1/num2;
		cout<<"divide  num1 and num2 is:"<<result<<endl;
		break;
		default:
            printf("Invalid operator\n");
            return 1;
	}
	return 0;
}