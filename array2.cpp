//check if array is sorted or not
#include<iostream>
#include<vector>
using namespace std;
class sorted{
    public:
    void check_sorted(vector<int> &v){
        int n=v.size();
        bool flag = true;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(v[i]>v[j]){
                    flag=false;
                }
            }
        }
        if(flag==true){
            cout<<"given vector is sorted:"<<endl;
        }
        else{
            cout<<"given vector is not sorted:"<<endl;
        }
        return;
    }
};

int main(){
    
    int n;
    cout<<"enter the size of vector:";
    cin>>n;

    vector<int> v(n);
    cout<<"enter the "<<n<<" element of vector:";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    sorted S;
    S.check_sorted(v);

    return 0;
}