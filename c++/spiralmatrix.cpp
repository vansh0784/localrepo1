//In this problem we have to print the matrixn in spiral format
/*     if a matrix is 4*4
left\---------------right
top  \
 |     1    2   3  4
 |     12  13  14  5
 |     11  16  15  6
 |     10  9    8  7
bottom
*/
#include<bits/stdc++.h>
using namespace std;
void optimal(int matrix[4][4], int row, int clmn){
    int left=0,right=clmn-1;
    int top=0,bottom=row-1;
    vector<int>ans;
    while(top<=bottom && left<=right){
        //left to right -------->
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);
        }
        top++;
       // right to bottom (downwards)
        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        // right to bottom <-------
        if(top<=bottom)    {
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        //               ^
        // bottom to top |
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);

            }
        left++;
        }

    }
    for(auto it:ans){
        cout<<it<<" ";
    }
}
int main(){
    int mat[4][4];
    cout<<"Enter the input";
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>mat[i][j];
        }
    }
    optimal(mat,4,4);
}