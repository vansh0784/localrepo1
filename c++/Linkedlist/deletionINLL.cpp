// In this problem we have to perform deletion and insertion in Linked list int 4 ways
/*  --- head
    --- position
    --- value
    --- last
*/
// All these deletion algorithm are of the same time complexity is O(N) and the space complexity is O(1).
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
Node* cnvrtarr2LL(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
Node* deleteHead(Node* head){
    //edge case-- what if the linked list has one node
    if(head->next== NULL) return head;
    Node*temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node* deletetail(Node* head){
    // edge case -- what if the linked list has one node
    if(head->next==NULL || head==NULL) return NULL;
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}
Node* deletek(Node* head,int k){
    // edge case -- if the head=null or linked list has only 1 node
    if(k==1){
        // we have to delete the head
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    int cnt=0;
    Node* temp=head;
    Node* p=NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            p->next=p->next->next;
            free(temp);
            break;

        }
        p=temp;
        temp=temp->next;
    }
    return head;

}
Node* removeval(Node* head, int k){
    // edge case
    if(head==NULL) return head;
    if(head->data==k){
        Node*temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    Node* temp=head;
    Node* p=NULL;
    while(temp!=NULL){
        if(temp->data==k){
            p->next=p->next->next;
            free(temp);
            break;
        }
        p=temp;
        temp=temp->next;
    }
    return head;

}
int main(){
    vector<int>arr={2,4,6,8,10};
    int k;
    cout<<"Enter the Value  ";
    cin>>k;
    Node* head=cnvrtarr2LL(arr);
    head=removeval(head,k);
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    return 0;
}