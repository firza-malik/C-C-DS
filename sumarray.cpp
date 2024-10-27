#include<iostream>
using namespace std;
int main(){
	int a1[]={1,4,5,8,9,43};
	int a2[]={3,5,6,23,5,7};
	int size=8;
	int sum;
	for(int i=0;i<size;i++){
		sum+=(a1[i]+a2[i]);	
	}
	cout<<"sum of integar two arrays:"<<sum;
	return 0;
}