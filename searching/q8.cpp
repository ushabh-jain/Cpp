//find the samllest divisor given a threshold


// class Solution {
//     public:
//         int smallestDivisor(vector<int>& nums, int threshold) {
//             // for(int i=1;i<= *max_element(nums.begin(), nums.end());i++){
//             //     int sum = 0;
//             //     for(int j=0;j<nums.size();j++){
//             //         sum +=  (nums[j]+i-1)/i;
//             //     }
//             //     if(sum<=threshold){
//             //         return i;
//             //     }
//             // }
//             // return -1;
    
//             int l = 1;
//             int r = *max_element(nums.begin(),nums.end());
            
//             while(l<r){
//                 int mid = l + (r-l)/2;
//                 int sum = 0;
//                 for(int num : nums){
//                     sum = sum + (num + mid - 1)/mid;
//                 }
    
//                 if(sum>threshold){
//                     l = mid+1;
//                 }
//                 else{
//                     r = mid;
//                 }
//             }
//             return l;
    
//         }
//     };