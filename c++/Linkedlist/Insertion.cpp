// In this part we do insertion techniques in the linked list
/*  --- head
    --- position
    --- value
    --- last
*/
#include<bits/stdc++.h>
using namespace std;
// creating a node
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};
Node* arr2LL(int a[], int size){
    Node* head=new Node(a[0],nullptr);
    Node* mover=head;
    for(int i=1;i<size;i++){
        Node* temp=new Node(a[i],nullptr);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
Node* inserthead(Node* head){
    Node* temp=new Node(0,head);
    return temp;

}
Node* inserttail(Node* head){
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    Node* tail=new Node(10,nullptr);
    temp->next=tail;
    return head;
}
Node* insertk(Node* head,int k){
    if(head==NULL) return NULL;
    if(k==1){
        // we have to insert the element at head
        Node* temp=new Node(11,nullptr);
        temp->next=head;
        return temp;
    }
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        if(cnt==k-1){
            Node* x=new Node(11,nullptr);
            x->next=temp->next;
            temp->next=x;
            return head;

        }

        temp=temp->next;
    }
    return head;
}
Node* insertval(Node* head, int val,int n){
    if(head==NULL) return NULL;
    if(head->data==val){
        return new Node(val,nullptr);

    }
    else return head;
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        if(cnt==(n-1)){
            Node* x=new Node(val,temp->next);
            temp->next=x;
            break;
            return head;
        }
        temp=temp->next;
    }
    return head;
}
int main(){
    int arr[5]={1,3,5,7,9};
    Node* head=arr2LL(arr,5);
    int k,n;
    cin>>k>>n;
    head=insertval(head,k,n);
    // traversing
    Node*temp=head;
    while(temp!=NULL){
        cout<< temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}