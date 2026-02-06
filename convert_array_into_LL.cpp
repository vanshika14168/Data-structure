//conver array into link list
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

node* Array_to_linklist(vector<int> &arr){
    node* head=new node(arr[0]);
    node* mover=head;
    for(int i=1; i<arr.size(); i++){
        node* temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int main(){

    vector<int> arr={78,2,3,4};
    node* head = Array_to_linklist(arr);
    cout<<head->data<<" "<<head->next;

    return 0;
}