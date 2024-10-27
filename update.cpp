//Write a C++ program to updates an element at the given index.
#include <iostream>
using namespace std;
int main(){
	int num[]={2,4,5,7,9,6,8};
	int size= 6;
	int index;
	cout<<"enter a index number to updates an element (0 to "<<size<<"):"<<endl;
	cin>>index;
	if(index>size||index<0){
	  cout << "Invalid index." << endl;
	}
	int e;
	cout<<"enter  a element to updates an element: "<<endl;
	cin>>e;
	num[index]=e;
	cout<<"after update n element at the given index: "<<endl;
	for(int i=0;i<size;i++){
		cout<<"index: "<<i<<" value: "<<num[i]<<endl;
	}
	return 0;
}