#include<bits/stdc++.h>
using namespace std;
int main(){
    int row, col;
    cin >> row >> col;
    int arr[row][col];
    for (int i = 0; i < row;i++){
        for (int j = 0; j < col;j++){
            cin >> arr[i][j];
        }
    }
    int search;
    cout << "Enter the search value" << "\n";
    cin >> search;
    bool found = false;
    for (int i = 0; i < row;i++){
        for (int j = 0; j < col;j++){
            if(arr[i][j]==search){
                found = true;
            }
        }
    }
    cout << found << endl;
}