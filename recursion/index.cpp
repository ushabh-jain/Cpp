#include<iostream>
using namespace std;

// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*fact(n-1);
// }

int gcd(int a,int b){
    if(b==0) return a;

    return gcd(b,b%a);
}


int fibb(int n){
    if(n==0||n==1){
        return n;
    }
    return fibb(n-1)+fibb(n-2);
}



//Recursive BINARY SEARCH : O(log(n))
// class Solution {
// public:
    
//     int solve(vector<int>& nums, int l, int r, int target) {
//         if(l > r)
//             return -1;
        
//         int mid = l + (r-l)/2;
        
//         if(nums[mid] == target)
//             return mid;
//         else if(nums[mid] < target)
//             return solve(nums, mid+1, r, target);
//         else
//             return solve(nums, l, mid-1, target);
//     }
    
//     int search(vector<int>& nums, int target) {
//         int n = nums.size();
        
//         return solve(nums, 0, n-1, target);
//     }
// };



int main(){
    int n;
    cin>>n;

    cout<<fibb(n);

}

//backtracking is nothing just a fancy name for recursion it just "do->explore->undo"