//Write a C++ program to multiply two integer 3-dimensional arrays and print the 
//output array.
#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

int main() {
    int R = 3, C = 3, F = 3;
    int arr1[R][C][F], arr2[R][C][F], result[R][C][F];
    cout << "Enter elements of the first 3x3x3 array:\n";
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            for (int k = 0; k < F; k++) {
                cin >> arr1[i][j][k];
            }
        }
    }

    cout << "Enter elements of the second 3x3x3 array:\n";
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            for (int k = 0; k < F; k++) {
                cin >> arr2[i][j][k];
            }
        }
    }
  
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            for (int k = 0; k < F; k++) {
                result[i][j][k] = arr1[i][j][k] * arr2[i][j][k];
            }
        }
    }

    cout << "Result of element multiplication of the two 3-dimensional arrays:\n";
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            for (int k = 0; k < F; k++) {
                cout << "result[" << i << "][" << j << "][" << k << "] = " << result[i][j][k] << endl;
            }
        }
    }

    return 0;
}
