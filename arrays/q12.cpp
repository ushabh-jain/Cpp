//nexgt permuttion which is basically arranging characters in lexographically order !


// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int n = nums.size();
//         int gola_index = -1;
//         //right side se traverse kra yeh dekha i se chota kon mila jab usko gola bil diya
//         for(int i=n-1;i>0;i--){
//             if(nums[i-1]<nums[i]){
//                 gola_index = i-1;
//                 break;
//             }
//         }
//         //fir idhar swap ka logic lgaya right se hi traverse kiya agar swap index gola se bda  to swap aur baaki bache reverse 
//         if(gola_index != -1){
//             int swap_index = gola_index;
//         for(int j=n-1;j>=gola_index;j--){
//             if(nums[j]>nums[gola_index]){
//                 swap_index = j;
//                 break;
//             }
//         }
//         swap(nums[gola_index],nums[swap_index]);
//         }
//         reverse(nums.begin()+gola_index+1,nums.end());
//     }
// };