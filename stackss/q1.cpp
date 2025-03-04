//next greater element 1 
//tc is O(2N)

// class Solution {
//     public:
//         vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//             unordered_map<int,int> mp;  // Stores next greater element
//             stack<int> st;  // Monotonic decreasing stack
            
//             // Process nums2 from right to left
//             for(int i = nums2.size() - 1; i >= 0; i--) {
//                 // Maintain decreasing order in stack
//                 while(!st.empty() && st.top() <= nums2[i]) {
//                     st.pop();
//                 }
                
//                 // Store next greater element in map
//                 if(!st.empty()) mp[nums2[i]] = st.top();
//                 else mp[nums2[i]] = -1;
                
//                 // Push current element to stack
//                 st.push(nums2[i]);
//             }
    
//             // Retrieve results for nums1
//             vector<int> ans;
//             for(int num : nums1) {
//                 ans.push_back(mp[num]);  // O(1) lookup
//             }
            
//             return ans;
//         }
//     };
    