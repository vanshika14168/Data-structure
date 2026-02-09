//create a node in a doubly link list
#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* back;

    public:
    node(int value,node* next1, node* back1){
        data=value;
        next=next1;
        back=back1;
    }

    public:
    node(int value){
        data=value;
        next=nullptr;
        back=nullptr;
    }
};

int main(){
    node* head=new node(23);
    cout<<head->back<<" "<<head->data<<" "<<head->next;
    return 0;
}