//Write C++ program to display the diagonal elements of a given matrix.
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
     int R=sizeof(arr1)/sizeof(arr1[0]);
      int c=sizeof(arr1[0])/sizeof(arr1[0][0]);
      
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < c; j++) {
        	if(i==j){
        		cout<<"dagonal elements of matrix:"<<arr1[i][j]<<endl;
			}
        }
    }
    return 0;
	
	
}