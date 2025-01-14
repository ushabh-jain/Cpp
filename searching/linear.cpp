//TIME COMPLEXITY -> O(N);
//SPACE COMPLEXITY -> O(1);
//Linear search is a simple algorithm that sequentially checks each element of the array until the desired element is found or the end of the array is reached.


#include<bits/stdc++.h>
using namespace std;

int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;

}
int main(){
    int arr[5]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 3;
    int result = linearsearch(arr,n,key);
    if(result != -1){
        cout<<"milgyaa"<<endl;
    }
    else{
        cout<<"nahi milaa"<<endl;
    }


}