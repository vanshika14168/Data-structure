//remove duplicate from sorted array/vector
#include<iostream>
#include<vector>
using namespace std;
class duplicate{
    public:
    void check_duplicate(vector<int> &v){
        int n=v.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(v[i]==v[j])
                v[i]=v[j]=-1;
            }
        }

        cout<<"elements after removing duplicate:";
        for(int i=0; i<n; i++){
            if(v[i]>0){
                cout<<v[i]<<" ";
            }
        }
        return;
    }
};

int main(){

    int n;
    cout<<"enter the size of vector:";
    cin>>n;

    vector<int> v(n);
    cout<<"enter "<<n<<" element of vector:";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    duplicate D;
    D.check_duplicate(v);


    return 0;
}