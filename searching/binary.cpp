//binary search sorted array pr hi hove

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int left,int right,int key){
    while(left<=right){
        int mid = left+(right-left)/2; // yeh isliye kiya because l and r bda hogya toh woh composate hojaye isliye
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            left = mid+1;
        }
        if(arr[mid]>key){
            right = mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1, 3, 5, 7, 9, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 7;

    int result = binarySearch(arr, 0, size - 1, key);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
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


//q1 koko eating bananas
// class Solution {
// public:
//     bool eatall(vector<int>& piles,int mid,int h){
//         int actualhours = 0;
//         for(int &x:piles){
//             actualhours += x/mid;
//             if(x%mid != 0){
//                 actualhours++;
//             }
//         }
//         return actualhours<=h;
//     }
//     int minEatingSpeed(vector<int>& piles, int h) {
//           int n = piles.size();

//           int l = 1;
//           int r= *max_element(begin(piles),end(piles));
//           while(l<r){
//             int mid = l+(r-l)/2;

//             if(eatall(piles,mid,h)){
//                 r= mid;
//             } else {
//                 l = mid+1;
//             }
//           }
//           return l;
//     }
// };