#include <iostream>
using namespace std;
//Write a C++ program to deletes ITEM from Bottom of the array. Print all elements of 
//the array
int main(){
	int num[]={2,4,5,7,9,6};
	int size= 6;
	for(int i=0;i<size;i++){
		cout<<"index: "<<i<<" value: "<<num[i]<<endl;
	}
	if (size == 0) {
        cout << "Array is empty, cannot delete any item." << endl;
        return 0;
    }
    size--;
    cout << "Array after deleting the last item: "<<endl;
    for (int i = 0; i < size; i++) {
    	cout<<"index: "<<i<<" value: "<<num[i]<<endl;
	}
	return 0;
}
	