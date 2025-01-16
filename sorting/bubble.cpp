//kuch nhi hai bss adjacent ke sath compare krke max ko peeche fek do y
// TC->O(N^2)
// SC->O(1)
#include<bits/stdc++.h>
using namespace std;

int bubble_sort(int arr[],int n){
    //hum i tak jaa rhe hai n-1 se isliye decrement jruri hai
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int main(){
     int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++) cin>>arr[i];
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}