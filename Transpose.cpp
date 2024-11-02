//. Write a C++ program to Transpose Matrix.
#include <iostream>
using namespace std;
int main() { 	
    int  r=3,c=3,Matrix[r][c] ,trans[r][c];
    cout<<"enter a 3x3 Matrix:"<<endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j <c; j++) {
        	cout << "Element [" << i << "][" << j  << "]: ";
            cin>> Matrix[i][j] ;
        }
    }
    cout<<"3x3 matrix: " <<endl;  
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
           cout<<Matrix[i][j]<< " ";
        }
        cout << endl;
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
        	
            trans[j][i]= Matrix[i][j] ;
        }
    }
    cout<<"transpose of matrix: " <<endl;  
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
           cout<<trans[i][j]<< " ";
        }
        cout << endl;
    }
     return 0;
}