//find the minimum in sorted array

// class Solution {
//     public:
//         int findMin(vector<int>& nums) {
//             // sort(nums.begin(),nums.end());
//             // return nums[0];
//             int l = 0;
//             int r = nums.size()-1;
//             while(l<r){
//                 int mid = l+(r-l)/2;
//                 if(nums[mid]<=nums[r]){
//                     r = mid;
//                 }
//                 else{
//                     l = mid+1;
//                 }
//             } 
//             return nums[l];
    
//         }
//     };