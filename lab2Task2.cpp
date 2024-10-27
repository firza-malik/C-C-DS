#include<iostream>
using namespace std;
 int main(){
 	int num[]={4,5,67,7,9,23,2,45};
 	int length=sizeof(num)/sizeof(num[0]);
 	for(int i=length;i>0;i--){
 		num[i]=num[i-1];
	} 
	num[0]=8;
	length++;
	cout << "Array elements: "<<"\n";
	for(int a :num){
		cout<<a<<"\n";
	}
	return 0;
 	
 }