//Write a C++ program to deletes ITEM from lOC given by user of the array. Print all 
//elements of the array
#include <iostream>
using namespace std;
int main(){
	int num[]={2,4,5,7,9,6};
	int size= 6;
	for(int i=0;i<size;i++){
		cout<<"index: "<<i<<" value: "<<num[i]<<endl;
	}
	int r;
	cout << "Enter the index of the element to remove (0 to " << size - 1 << "): ";
    cin >> r;
	if(r>size||r<0){
	  cout << "Invalid index." << endl;
	}
	cout << "Array after removing element at index " << r << ": "<<endl;
	for(int i=r;i<size-1;i++){
		num[i] = num[i + 1];
	}
	size--;
	for(int i=0;i<size;i++){
		cout<<"index: "<<i<<" value: "<<num[i]<<endl;
	}
	
	return 0;	
}