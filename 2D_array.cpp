/* basic of 2D array*/
#include<iostream>
using namespace std;
/*int main(){
    
    int n;
    cout<<"enter the number of rows:";
    cin>>n;

    int m;
    cout<<"enter the number of columns:";
    cin>>m;

    cout<<endl<<"enter the element of array";
    int array[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>array[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;

    }

    return 0;
}*/
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter rows no.:";
    cin>>n;
    cout<<"enter column no.:";
    cin>>m;

    int array[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<"enter "<<i<<j<<" element:";
            cin>>array[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}