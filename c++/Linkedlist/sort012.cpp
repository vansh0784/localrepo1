// In this problem we have to sort the linked list in given format
// 0 --> 1 --> 2
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* carr2LL(vector<int>arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
Node* sorting(Node* head){
    // This code has the time complexity is O(2N) and the space complexity is O(1).
    Node* temp=head;
    int cnt0=0,cnt1=0,cnt2=0;
    while(temp!=NULL){
        if(temp->data==0) cnt0++;
        else if(temp->data==1) cnt1++;
        else cnt2++;
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(cnt0){
            temp->data=0;
            cnt0--;
        }
        else if(cnt1){
            temp->data=1;
            cnt1--;
        }
        else{
            temp->data=2;
            cnt2--;
        }
        temp=temp->next;
    }
    return head;
}
// This code has the time complexity is O(N) and the space complexity is O(1).
Node* sorting2(Node* head){
    Node*temp=head;
    Node* n0H=new Node(-1);
    Node* n0=n0H;
    Node* n1H=new Node(-1);
    Node* n1=n1H;
    Node* n2H=new Node(-1);
    Node* n2=n2H;
    while(temp!=NULL){
        if(temp->data==0){
            Node* n=new Node(temp->data);
            n0->next=n;
            n0=n;
        }
        else if(temp->data==1){
            Node* m=new Node(temp->data);
            n1->next=m;
            n1=m;
        }
        else{
            Node* p=new Node(temp->data);
            n2->next=p;
            n2=p;
        }
        temp=temp->next;
    }
    n0->next=n1H->next;
    n1->next=n2H->next;
    return n0H->next;;
}
int main(){
    vector<int>ans={1,2,0,1,1,0,2};// 0 0 1 1 1 2 2
    Node* head=carr2LL(ans);
    head=sorting2(head);
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    return 0;

}