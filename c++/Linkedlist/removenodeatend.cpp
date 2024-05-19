// In this problem a value of N is given we have to delete that node at the end
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
Node* carr2LL(int a[], int n){
    Node* head=new Node(a[0]);
    Node* mover=head;
    for(int i=1;i<n;i++){
        Node* temp=new Node(a[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
Node* approach1(Node* head,int n){
    // this code has the time complexity is O(2N) and the space complexity is O(1).
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    temp=head;
    int a=cnt-n;
    while(temp!=NULL){
        if(a==1){
            break;
        }
        else if(a==0){
            Node* n=head->next;
            head->next=nullptr;
            delete head;
            return n;
        }
        a--;
        temp=temp->next;
    }
    Node* d=temp->next;
    temp->next=temp->next->next;
    d->next=nullptr;
    delete d;
    return head;
}
Node* approach2(Node* head, int n){
    Node* f=head;
    Node* s=head;
    int c=n;
    while(f->next!=NULL){
        c--;
        if(c){
            f=f->next;
        }
        else if(c==0){
            f=f->next;
            s=s->next;
        }
    }
    Node* p=s->next;
    s->next=s->next->next;
    p->next=nullptr;
    delete p;
    return head;

}
int main(){
    int arr[5]={1,2,3,4,5};
    int n;
    cout<<"Enter value of N";
    cin>>n;
    Node* head=carr2LL(arr,5);
    head=approach2(head,n);
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
}