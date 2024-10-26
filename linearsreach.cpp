#include<iostream>
using namespace std;
int linearsreach(int n, int r[],int key){
	for(int i=0;i<=n;i++){
		if(key==r[i]){
			return i;
		}
	}
	return -1;
}
int main(){
	int n;
	cout<<"enter a index";
	cin>>n;
	int r[n];
	cout<<"enter a num";
	for(int i=0;i<=n;i++){
		cin>>r[i];
	}
	int key;
	cout<<"enter a key";
	cin>>key;
	cout<<linearsreach(n,r,key);
	return 0;
	
}