// In this problem we have an array which shows the total no. of days require to particular flower to bloom and we have to make a bouqet with their adjacent flowers ... no. of bouquets and no. of adjacent flowers we have to take is given
// In case number of bouqet * no. of adjacent flower is greater than size of the array ... we have to return -1 ... which ,eans we can't form bouqet from these array
#include<bits/stdc++.h>
// The time complexity of Brute force is O((maxi-mini)*N)
int minA(int d[], int n){
    int m=d[0];
    for(int i=0;i<n;i++){
        if(m>d[i]){
            m=d[i];
        }
    }
    return m;
}
int maxA(int c[],int n){
    int m=c[0];
    for(int i=0;i<n;i++){
        if(c[i]>m){
            m=c[i];
        }
    }
    return m;
}
bool possible(int b[], int day, int n, int m){
    int cnt=0,noOfb=0;
    for(int i=0;i<8;i++){
        if(b[i]<=day){
            cnt++;
        }
        else{
            noOfb+=(cnt/n);
            cnt=0;
        }
    }
    noOfb+=(cnt/n);
    if(noOfb>=m) return true;
    else return false;
}
int brute(int a[], int size, int n, int m){
    int mini=minA(a,size);
    int maxi=maxA(a,size);
    for(int i=mini;i<=maxi;i++){
        if(possible(a,i,n,m)==true){
            return i;

        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the No. of Bouqets ";
    cin>>n;
    int m;
    cout<<"Enter the adjacent flowers for bouqet ";
    cin>>m;
    int arr[8]={7,7,7,7,13,11,12,7};
    int ans=brute(arr,8,n,m);
    cout<<"This answer comes from Brute"<<endl;
    cout<<"Answer is "<<ans<<endl;
    return 0;
}