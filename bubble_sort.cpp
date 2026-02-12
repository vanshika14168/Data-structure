/*write a bubble sort program*/
#include<iostream>
#include<vector>
using namespace std;

void bubble_sort(vector<int> &v){
    int n=v.size();
    for(int i=0; i<n-1; i++){
        for(int j=0;j<n-i-1; j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
    return;
}

int main(){

    int n;
    cout<<"enter the size of vector:";
    cin>>n;

    vector<int> v(n);
    cout<<endl<<"enter the "<<n<<" element of vector:";
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }

    bubble_sort(v);
    cout<<endl<<"sorted vector is:"<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }


    return 0;
}