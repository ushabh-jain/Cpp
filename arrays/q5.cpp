//Longest Subarray with Sum K


#include<bits/stdc++.h>
using namespace std;
int subarraysum(vector<int>& arr,int k){
    int l = 0, r = 0;
    int sum = 0;
    int maxi = 0;
    int n = arr.size();
    while(r<n){
        sum += arr[r];
        while(l<=r && sum > k){
            sum -= arr[l];
            l++;
        }
        if(sum == k){
            maxi = max(maxi,r-l+1);
        }
        r++;
        
    }
    return maxi;
}
int main(){
int n,k;
cin >> n >>k;
vector<int> arr(n);
for(int i = 0; i < n; i++) {
    cin >> arr[i];
}
    cout<<subarraysum(arr,k)<<endl;

}



// #include<bits/stdc++.h>
// using namespace std;
// int subarraysum(vector<int>& arr,int k){
//     int l = 0, r = 0;
//     int sum = arr[0];
//     int maxi = 0;
//     int n = arr.size();
//     while(r<n){
//         if(r<n) sum += arr[r];
//         while(l<=r && sum > k){
//             sum -= arr[l];
//             l++;
//         }
//         if(sum == k){
//             maxi = max(maxi,r-l+1);
//         }
//         r++;
        
//     }
//     return maxi;
// }
// int main(){
// int n,k;
// cin >> n,k;
// vector<int> arr(n);
// for(int i = 0; i < n; i++) {
//     cin >> arr[i];
// }
//     cout<<subarraysum(arr,k)<<endl;

// }