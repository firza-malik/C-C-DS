#include<iostream>
using namespace std;
//if you enter a num make sure number is sorted
int BinarySreach(int r[],int n,int key){
	int s=0;
	int e=n;
	while(s<=e){
		int mid=(s+e)/2;
		if(r[mid]==key){
			return mid;
		}else if(r[mid]>key){
			e=mid-1;
		}
		else{
			s=mid+1;
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
	cout<<BinarySreach(r,n,key);
	return 0;
	
}