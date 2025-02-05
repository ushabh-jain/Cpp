//leader array - rightmost elemnt smaller hai tojh woh leader element hua

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
         vector<int>ans;
        int n = arr.size();
        int maxi = INT_MIN;
      
        for(int i = n-1;i>=0;i--){
            if(arr[i]>=maxi){
                ans.push_back(arr[i]);
                maxi = arr[i];
                
            }
        }
       
        reverse(ans.begin(), ans.end()); // Reverse to maintain original order
        return ans;
    }
};

