/*Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.
A subarray is a contiguous non-empty sequence of elements within an array.
Example 1
Input: nums = [2, 3, 5, -2, 7, -4]
Output: 15

Explanation:
The subarray from index 0 to index 4 has the largest sum = 15*/

#include<iostream>
#include<vector>
using namespace std;
class Max{
    public:
    int max_sum(vector<int> &v){
        int n=v.size();
        int max_sum=INT16_MIN;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                int sum=0;

                for(int k=i; k<=j; k++){
                    sum+=v[k];
                    
                }
                 max_sum=max(max_sum,sum);
            }
        }

        return max_sum;
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

    Max M;
    cout<<"maximum sum is :"<<M.max_sum(v);

    return 0;
}