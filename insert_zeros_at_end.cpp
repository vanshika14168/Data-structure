/*input: nums = [0, 1, 4, 0, 5, 2]
Output: [1, 4, 5, 2, 0, 0]
insert zeros at the end*/

#include<iostream>
using namespace std;
class Zeros{
    public:
    void insert_zeros(int array[],int size){
        int n=size;
        int left_ptr=0;
        int right_ptr=n-1;
        while(left_ptr<=right_ptr){
            if(array[left_ptr]==0 && array[right_ptr]>0){
                swap(array[left_ptr],array[right_ptr]);
                left_ptr++;
                right_ptr--;
            }
            else if(array[left_ptr]>0){
                left_ptr++;
            }
            else if (array[right_ptr]==0)
            right_ptr--;
        }
        for(int i=0; i<n; i++){
            cout<<array[i]<<" ";
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

    Zeros Z;
    Z.insert_zeros(array,n);

    return 0;
}