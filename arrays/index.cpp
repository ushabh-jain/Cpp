//An array in C++ is a collection of elements of the same data type, stored in contiguous memory locations. It allows easy access to elements using indices.
#include<bits/stdc++.h>
using namespace std;
int subarray(vector<int> arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<" ";
        }
    }
}

int main(){
    vector<int>v={1,2,3,4};
    cout<<"subarray yeh hai : ";
    subarray(v);

}



// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }