//convert a array into doubly link list

#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* back;

    public:
    node(int value){
        data=value;
        next=nullptr;
        back=nullptr;
    }

    public:
    node(int value,node* next1,node* back1){
        data=value;
        next=next1;
        back=back1;
    }
};

node* Array_to_doubly_LL(vector<int> &array){
    node* head=new node(array[0]);
    node* previous=head;
    for(int i=1; i<array.size(); i++){
        node* temp=new node(array[i],nullptr,previous);
        previous->next=temp;
        previous=temp;
    }
    return head;
}


int main(){

    vector<int> array={1,2,3,4,5};
    node* head=Array_to_doubly_LL(array);
    node* temp=head;
    while(temp){
        cout<<temp->back<<" "<<temp->data<<" "<<temp->next<<"   ";
        temp=temp->next;
    }

    return 0;
}