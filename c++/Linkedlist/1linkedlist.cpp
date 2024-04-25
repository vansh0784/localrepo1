#include<bits/stdc++.h>
using namespace std;
struct Node{
        int data;
        Node* next;
        Node(int data1,Node* next1)
        {
            data=data1;
            next=next1;
        }
};
int main(){

    vector<int>arr={2,5,8,7};
    // We can intialise the linked list by the two methods
    // 1. is by using a variable of struct datatype nd then passing values in it
    Node x=Node(arr[1],nullptr);
    cout<<x.data;
    cout<<endl;
    // 2. is by using a constructor(New) keyword.
    Node* y= new Node(arr[0],nullptr);
    cout<<y->data;
    return 0;
}
