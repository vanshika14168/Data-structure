/*Given an array of integers nums and an integer target. Return the indices(0 - indexed) of two elements in nums such that they add up to target.
Each input will have exactly one solution, and the same element cannot be used twice.
Example 1
Input: nums = [1, 6, 2, 10, 3], target = 7
Output: [0, 1]

Explanation:
nums[0] + nums[1] = 1 + 6 = 7*/

#include<iostream>
#include<vector>
using namespace std;

class Index{
    public:
    vector<int> Target_index(vector<int> &v,int target){
        int n=v.size();
        vector<int> ans;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(v[i]+v[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return {-1,-1};
    }
};


int main(){

    int n;
    cout<<"enter the size of vector:";
    cin>>n;

    vector<int> v(n);
    cout<<"enter the "<<n<<" element of vector:";
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }
    int target;
    cout<<"enter the target sum value:";
    cin>>target;

    Index I;
    vector<int>ans=I.Target_index(v,target);
    cout<<"index of target sum ("<<target<<") is:["<<ans[0]<<","<<ans[1]<<"]"<<endl;
    
    return 0;
}