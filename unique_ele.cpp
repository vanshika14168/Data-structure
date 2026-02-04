/*Given an array of nums of n integers.
 Every integer in the array appears twice except one integer. Find the number that appeared once in the array.
Example 1
Input : nums = [1, 2, 2, 4, 3, 1, 4]
Output : 3

Explanation : The integer 3 has appeared only once.*/
#include<iostream>
using namespace std;
class Ones_Element{
    public:
    void unique_element(int array[],int size){
        int n =size;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(array[i]==array[j]){
                    array[i]=array[j]=-1;
                }
            }
        }

        for(int i=0; i<n; i++){
            if(array[i]>0){
                cout<<array[i];
            }
        }
        return;
    }
};
int main(){

    int n;
    cout<<"enter the size of array:";
    cin>>n;

    int array[n];
    cout<<"enter the "<<n<<" element of array:";
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    cout<<endl<<"element which comes only ones in the array is:";
    Ones_Element O;
    O.unique_element(array,n);
    
    return 0;
}