/*Given an integer array nums of size n, return the majority element of the array.
The majority element of an array is an element that appears more than n/2 times in the array. The array is guaranteed to have a majority element.
Example 1
Input: nums = [7, 0, 0, 1, 7, 7, 2, 7, 7]

Output: 7*/

#include<iostream>
#include<vector>
using namespace std;
class Element{
    public:
    int max_index_ele(vector<int> &v){
        int n=v.size();
        for(int i=0; i<n; i++){
            int count=0;
            for(int j=0; j<n; j++){
                if(v[j]==v[i]){
                    count++;
                }
            }
            if(count>n/2){
                return v[i];
            }
        }
        return -1;
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

    Element E;
    int c=E.max_index_ele(v);
    cout<<"the element which comes more  then the half part of vector is:"<<c<<endl;
    
    
    return 0;
}