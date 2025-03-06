//sum of subarray ranges
//ismein subarray nikalana hai uska largest - smallest krdena 

//brute forcce iska 
// class Solution {
//     public:
//         long long subArrayRanges(vector<int>& nums) {
//             long long sum =0;  //long long is 8 bytes integer stores more integers that standard int data type
//             for(int i=0;i<nums.size();i++){
//                 int largest = nums[i];
//                 int smallest = nums[i];
//                 for(int j=i+1;j<nums.size();j++){
//                     largest = max(largest,nums[j]);
//                     smallest = min(smallest,nums[j]);
//                     sum = sum + (largest-smallest);
    
//                 }
//             }
//             return sum;
//         }
//     };


//optimal approach hai iski sum of subarray minimum - sum of subarray maximum bss tc->O(N);