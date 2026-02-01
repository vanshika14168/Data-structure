/*INSERTION SORT*/
#include<iostream>
#include<vector>
using namespace std;
void insertion_sort(vector<int> &v){
    int n=v.size();
    for(int i=1; i<n; i++){
        int current_ele=v[i];

        //find the correct position for our current element
        int j=i-1;
        while(j>=0 && v[j]>current_ele){
            v[j+1]=v[j];
            j--;
        }
        //insert current element
        v[j+1]=current_ele;
    }
    return;


}
int main(){

    int n;
    cout<<"enter the size of vector:";
    cin>>n;

    vector<int>v(n);
    cout<<"enter the elemnt of vector:";
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }

    cout<<endl<<"sorted vector is:";
    insertion_sort(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    return 0;
}