//find the largest element of the array
#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    int largest_element(vector<int> &v){
        int n=v.size();
        int largest=v[0];
        for(int i=0; i<n; i++){
            if(v[i]>largest){
                largest=v[i];
            }
        }
        return largest;
    }
};
int main(){
    
    vector<int> v={1,2,90,-44,78};


    solution S;
    cout<<"largest element of the vector is:"<<S.largest_element(v);

    return 0;
}