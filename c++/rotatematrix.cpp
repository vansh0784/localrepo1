// this problem is known as rotate matrix by 90 degree or ---> rotate image by 90 degree


/*  1   2   3              7   4   1
    4   5   6   ------->   8   5   2
    7   8   9              9   6   3
*/
#include<bits/stdc++.h>
using namespace std;
// in this case time complexity is O(n2) but space complexity is O(n2)
// space complexity is not as good so we have to optimize it .
void brute(int matrix[4][4], int row, int clmn){
    int ans[4][4];
    for(int i=0;i<row;i++){
        for(int j=0;j<clmn;j++){
            ans[i][j]=matrix[j][i];
        }
    }
    // printing the matrix;
    cout<<"RESULT"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<ans[i][j]<<"  ";
        }
        cout<<endl;
    }

}
void optimal(int mat[4][4], int row, int clmn){
    // In this approach we have to first find the transpose of the matrix
    // and then we have to reverse the transpose ... it optimize the space complexity O(n2) to O(1).
    // In this case time complexity is remained same as before
    cout<<"This answer is from optimal"<<endl;
    for(int i=0;i<row;i++){
        for(int j=i+1;j<clmn;j++){
            // transpose --- row converted into column
            // we use swap function for this
            swap(mat[i][j],mat[j][i]);
        }
    }
    // in this step we just reverse the rows .. only rows
    for(int i=0;i<row;i++){
        reverse(mat,mat+4);
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<mat[i][j]<<"  ";
        }
        cout<<endl;
    }

}
int main(){
    // create 2d array
    int arr[4][4];
    cout<<"Taking the input"<<endl;
    // taking the input (element)
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    brute(arr,4,4);
    optimal(arr,4,4);

}