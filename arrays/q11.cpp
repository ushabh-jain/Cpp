//Rearrange Array Elements by Sign by preserving order


//brute forvce appraoch  takes more space
// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         vector<int>pos;
//         vector<int>neg;
//         //divide the arrays in pos and neg
//         for(int i =0;i<nums.size();i++){
//             if(nums[i]>0){
//                 pos.push_back(nums[i]);
//             }
//             else{
//                 neg.push_back(nums[i]);
//             }
//         }
//         //merge the arrays
//         int i =0;
//         int j =0;
//         vector<int>ans;
//         while(i<pos.size() && j<neg.size()){
//              ans.push_back(pos[i++]);
//              ans.push_back(neg[j++]);
//         }
//         return ans;
//     }
// };



//aproach 2 better 



// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         int m = nums.size();
//         int p = 0;
//         int n = 1;
//         vector<int>ans(m);
//         for(int i = 0;i<m;i++){
//            if(nums[i]>0){
//             ans[p] = nums[i];
//             p+=2;
//            }
//            else{
//             ans[n]=nums[i];
//             n+=2;
//            }
//         }
//         return ans;
//     }
// };


