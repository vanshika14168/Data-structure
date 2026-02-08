//search an element in a linklist
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

node* Array_to_LL(vector<int>v){
    node* head=new node(v[0]);
    node* mover=head;
    for(int i=1; i<v.size(); i++){
        node* temp=new node(v[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int Search_element(node* head,int ele){
    node* temp=head;
    while(temp){
        if(temp->data==ele);
        return 1;
        temp=temp->next;
    }
    return 0;
}

int main(){

    vector<int>v={1,2,3,4,5,6};
    node* head=Array_to_LL(v);
    node* temp=head;
    while(temp){
        cout<<temp->data<<" "<<temp->next<<"  ";
        temp=temp->next;
    }
    cout<<endl;

    int ele;
    cout<<"enter the element search in linklist:";
    cin>>ele;
    
    cout<<"is element present in the linklist:"<<Search_element(head,ele);


   return 0;
}