//element uthao aur uski shi jagah daalo
// TC->O(N^2)
// SC->O(1)

#include<bits/stdc++.h>
using namespace std;
int insertion_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }

}

int main(){
     int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++) cin>>arr[i];
    insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}