// subsets

// class Solution {
//     public:
//         void solve(vector<int>& nums,vector<int>& ans,vector<vector<int>>& result,int idx){
//             result.push_back(ans);
//             for(int i=idx;i<nums.size();i++){
//                 ans.push_back(nums[i]);
//                 solve(nums,ans,result,i+1);
//                 ans.pop_back();
    
//             }
//         }
//         vector<vector<int>> subsets(vector<int>& nums) {
//             vector<vector<int>> result;
//             vector<int>ans;
//             solve(nums,ans,result,0);
//             return result;
//         }
//     };