#include<bits/stdc++.h>
using namespace std;
void mark_row(int i, int j, int c[i][j],int row){
    for(int i=0;i<n;i++){
        if(c[i][j]!=0){
            c[i][j]=-1;
        }
    }
}
void mark_column(int j, int i, int d[i][j],int column){
    for(int j=0;j<n;j++){
        if(d[i][j]!=-1){
            d[i][j]=-1;
        }
    }
}
void brute(int arr[row][column], int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j]==0){
                mark_row(i,j,arr,row);
                mark_column(j,i,arr,column);
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
    // printing the matrix
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<arr[i][j]<<"  ";
            cout<<endl;
        }
        cout<<endl;
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
    brute(matrix,row,column);
}