//find largest element of array/vector
#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    void largest_element(vector<int> &v){
        int n=v.size();
        int max=v[0];
        for(int i=0; i<n; i++){
            if(v[i]>max){
                max=v[i];
            }
            
        }

        cout<<"maximum element of vector is:"<<max<<endl;
        return;
    }
};

int main(){

    vector<int> v = {3,3,6,1};

    solution s;
    s.largest_element(v);


    return 0;
}