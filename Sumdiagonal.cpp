//. Write a C++ program to Find Sum of Diagonal Elements of Matrix
#include <iostream>
using namespace std;
int main(){
	int arr1[3][3];
	cout << "Enter elements of the first 3x3 array:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr1[i][j];
        }
    }
    int sum;
     int R=sizeof(arr1)/sizeof(arr1[0]);
      int c=sizeof(arr1[0])/sizeof(arr1[0][0]);
      
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < c; j++) {
        	if(i==j){
        	cout<<"dagonal elements of matrix:"<<arr1[i][j]<<endl;
        	 sum+= arr1[i][j];
			}
        }
    }
    cout<<"sum of diagonal element:" <<sum;
    return 0;
	
	
}