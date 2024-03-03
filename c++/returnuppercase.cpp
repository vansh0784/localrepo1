// Here in this problem we have to change the lowercase character to uppercase
#include<iostream>
using namespace std;
void chng_to_upper(char c){
    char compute=(c-'a')+'A';
    cout<<c<<" is change into " <<compute<<endl;
}
int main(){
    char ch;
    cout<<"Enter the character ";
    cin>>ch;
    chng_to_upper(ch);
}