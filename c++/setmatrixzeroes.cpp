#include<bits/stdc++.h>
using namespace std;
void mark_row(int i){
    for(int i=0;i<n;i++){
        if(arr[i][j]!=0){
            arr[i][j]=-1;
        }
    }
}
void mark_column(int j){
    for(int i=0;i<n;i++){
        if(arr[][j])
    }
}
void brute(int arr[row][column], int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]==0){
                mark_row(i,j);
                mark_column(j,i);
            }
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]==-1){
                arr[i][j]=0;
            }

        }
    }
}
int main(){
    // taking the input
    int row,column;
    cout<<"enter the row and column";
    cin>>row>>column;
    int matrix[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>matrix[i][j];
        }
    }
    // brute approach
    brute(matrix,row,column)
}