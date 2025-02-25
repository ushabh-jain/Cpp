//next greater element 2
//tc->O(2N)

// class Solution {
//     public:
//         vector<int> nextGreaterElements(vector<int>& nums) {
//             stack<int>st;
//             int n = nums.size();
//             vector<int>ans(n,0);
//             //i%n is for circular array we made an hypothetical array so that we can circularly go 
//             for(int i=2*n-1;i>=0;i--){
//                 while(!st.empty() && st.top()<=nums[i%n]) st.pop();
    
//                 if(i<n){
//                     if(st.empty()){
//                         ans[i]=-1;
//                     }
//                     else{
//                         ans[i]=st.top();
//                     }
//                 }
//                 st.push(nums[i%n]);
//             }
//             return ans;
    
//         }
//     };