//two sum 
//approch 1 


// vector<int> twosum(vector<int>& nums,int target){
//          int n = nums.size();
//          for(int i=0;i<n;i++){
//             for(int j = i+1; i<n;i++){
//                 if(nums[i]+nums[j]==target){
//                     return{i,j};
//                 }
//             }
//          }
//          return {};
// }

 /*
 unordered_map<int,int>mp;
 for(int i=0;i<nums.size();i++){
    if(mp.find(target-nums[i])==mp.end()){
        mp[nums[i]] = i;
    }
    else{
      return {mp[target - nums[i]],i}
    }
 }
 */