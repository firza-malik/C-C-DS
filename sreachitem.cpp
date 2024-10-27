//Write a C++ program to searches an element using the given index or by the value
#include <iostream>
using namespace std;
int main(){
	int num[]={2,4,5,7,9,6};
	int size=6;
	
	int s;
	cout<<"enter a index number to to searches an element(0 to " << size  << "):";
	cin>>s;
	if(size<s||s<0){
		cout << "Invalid index." << endl;
	}
	cout<<"index: "<<s<<" value: "<<num[s]<< endl;
	
	cout<<"all element in array:"<<endl;
	for(int i=0;i<size;i++){
		cout<<"index: "<<i<<" value: "<<num[i]<<endl;
	}
}