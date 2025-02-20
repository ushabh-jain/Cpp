//minimum window substring


// class Solution {
//     public:
//         string minWindow(string s, string t) {
//                   int n = s.length();
               //s1 check t bda toh nhi s se
//                   if(t.length()>n){
//                     return "";
//                   }
               //map to store t mein jo cheezien ayi kitni baar ayi
//                   unordered_map<char,int>mp;
    
//                   for(char &ch:t){
//                     mp[ch]++;
    
//              }
    
//              int requiredcount = t.length();
//              int i=0;
//              int j=0;
    
//              int minwindowsize = INT_MAX; //kitna size hoga windo ka idhar ajyega
//              int start = 0; //starting index hai yeh window ka 
//              while(j<n){
//                 char ch = s[j];
    
//                 if(mp[ch]>0){//agar map pe pde char ka count 0 se zyada hai mtlb chiaye yeh toh woh liya aur requiredcound se kam krdis
//                     requiredcount--;
//                 }
//                     mp[ch]--; //map se vi krdis
    
//                     while(requiredcount==0){
//                         int currwindowsize = j-i+1;
//                         if(minwindowsize>currwindowsize){
//                             minwindowsize = currwindowsize;
//                             start = i;
//                         }
//                         mp[s[i]]++;
//                         if(mp[s[i]]>0){
//                             requiredcount++;
//                         }
//                         i++;
//                     }
                
//                 j++;
//              }
//              return minwindowsize == INT_MAX ? "":s.substr(start,minwindowsize);
            
//         }
//     };