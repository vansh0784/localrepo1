// In this problem we have to add the two numbers but the twist is that the no.s are passing via linked list in reverse order and we have to compute the the result and add it in the other linked list in reverse order
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
    public:
    Node(int data1,Node* n){
        data=data1;
        next=n;
    }
};
Node* carr2LL(vector<int>brr){
    Node* head=new Node(brr[0]);
    Node* temp=head;
    for(int i=1;i<brr.size();i++){
        Node* mover=new Node(brr[i]);
        temp->next=mover;
        temp=mover;
    }
    return head;
}
Node* add(Node* head1,Node* head2){
    int carry=0;
    Node* t1=head1;
    Node* t2=head2;
    Node* dum=new Node(-1);
    Node* cur=dum;
    while(t1!=NULL || t2!=NULL){
        int sum=0;
        if(t1!=NULL) sum=carry+sum+t1->data;
        if(t2!=NULL) sum=carry+sum+t2->data;
        Node* N=new Node(sum%10);
        carry=sum/10;
        cur->next=N;
        cur=cur->next;
        if(t1!=NULL) t1=t1->next;
        if(t2!=NULL) t2=t2->next;

    }
    if(carry){
        Node* N=new Node(carry);
        cur->next=N;
    }
    return dum->next;


}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
}
int main(){
    vector<int>arr={2,4,6};
    vector<int>brr={4,5,9,9};
    Node* h1=carr2LL(arr);
    Node* h2=carr2LL(brr);
    Node * N=add(h1,h2);
    print(N);
    return 0;

}