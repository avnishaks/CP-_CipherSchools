#include<bits/stdc++.h>
using namespace std;
//Efficient solution
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
    int low = arr[0][0], high = arr[row - 1][col - 1];
    if(search<low||search>high){
        found = false;
    }
    int i = 0, j = col - 1;
    while(i<col&&j>=0){
        if(arr[i][j]==search){
            found = true;
            break;
        }
        if(arr[i][j]>search){
            j--;
        }
        else{
            i++;
        }
    }
    if(found==true){
        cout << "Yes" << endl;
        cout << i << " " << j;
    }
    else{
        cout << "No" << endl;
    }
}