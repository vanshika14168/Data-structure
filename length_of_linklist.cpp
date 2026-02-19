#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node *next;

    node(int value){
        data=value;
        next=NULL;
    }
};

node* Array_to_LL(vector<int> &v){
    node* head=new node(v[0]);
    node* mover=head;
    for(int i=1; i<v.size(); i++){
        node* temp=new node(v[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int Length_of_LL(node* head){
    int counter=0;
    node* temp=head;
    while(temp){
        //cout<<temp->data<<" "<<temp->next<<"  ";
        temp=temp->next;
        counter++;
    }
    return counter;

}

int main(){

    vector<int> v={1,2,3,4,5,6};
    node* head=Array_to_LL(v);
    node* temp=head;
    while(temp){
        cout<<temp->data<<" "<<temp->next<<"  ";
        temp=temp->next;
    }

    cout<<endl;
    cout<<"length of Link List is:"<<Length_of_LL(head);

    return 0;
}