#include <iostream>
//Write a C++ program to add two 2-dimensional arrays
using namespace std;
#include <iostream>
using namespace std;

int main() {
    int arr[2][4] = {{2, 4, 6, 7}, {5, 6, 7, 8}};
    int arr2[2][4] = {{1, 2, 3, 4}, {4, 3, 2, 1}};
    int result[2][4];  
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            result[i][j] = arr[i][j] + arr2[i][j];
        }
    }
      int rows = sizeof(arr) / sizeof(arr[0]);
      int columns = sizeof(arr[0]) / sizeof(arr[0][0]);
    
    cout << "Sum of the 2D arrays:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
