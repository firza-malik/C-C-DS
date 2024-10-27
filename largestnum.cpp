#include<iostream>
using namespace std;


int main(){
	int number[]={1,4,5,6,78,4,34,8};
	int max= number[0];
	int length=sizeof(number)/sizeof(number[0]);
	for(int i=0;i<length;i++){
		if(max<number[i]){
			max = number[i];
		}
		
	}
	cout<<"the max number in array "<<max;
	return 0;
}