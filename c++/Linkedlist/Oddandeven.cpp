// In this part we have to arrange the linked list data in some manner ... means the odd indexes are grouped together and same as even
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
Node* carr2LL(vector<int>brr){
    Node* head=new Node(brr[0]);
    Node* mover=head;
    for(int i=1;i<brr.size();i++){

        Node* temp=new Node(brr[i]);
        mover->next=temp;
        mover=temp;

    }
    return head;

}
Node* OandE1(Node* head){
    //this code has the time complexity is O(2N) and the space complexity is O(N).
    vector<int>ans;
    Node* temp=head;
    while(temp!=NULL && temp->next!=NULL){
        ans.push_back(temp->data);
        temp=temp->next->next;
    }
    if(temp)ans.push_back(temp->data);
    temp=head->next;
    while(temp!=NULL && temp->next!=NULL){
        ans.push_back(temp->data);
        temp=temp->next->next;
    }
    if(temp)ans.push_back(temp->data);
    int i=0;
    temp=head;
    while(temp!=NULL){
        temp->data=ans[i];
        i++;
        temp=temp->next;
    }
    return head;
}
Node* OandE2(Node*head){
    // this code has the time complexity is of O(N) and the space complexity is O(1).
    Node* eh=head->next;
    Node*even=head->next;
    Node*odd=head;
    while(even->next!=NULL && even!=NULL){
        odd->next=odd->next->next;
        odd=odd->next;
        even->next=even->next->next;
        even=even->next;
    }
    odd->next=eh;
    return head;
}
int main(){
    vector<int>arr={1,2,3,4,5,6};
    Node* head=carr2LL(arr);
    Node* temp=OandE2(head);
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;

    }
    return 0;

}