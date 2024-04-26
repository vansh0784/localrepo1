// In this approach we have an string of size n we have to just check that the string is palindrome or not (by RECURSION)
#include<bits/stdc++.h>
using namespace std;
bool optimal(char s[],int l,int h){
    // base case
    if(l>=h) return true;
    // some calculation
    if(s[l]!=s[h]) return false;
    // recursive call

    return optimal(s,l++,h--);

}
int main(){
    int n;
    cout<<"Enter the size of string";
    cin>>n;
    char str[n];
    cin>>str;
    bool ans=optimal(str,0,n-1);
    if(ans==true) cout<<"Yes, it is palindrome";
    else cout<<"No, it's not a palindrome";
    return 0;

}