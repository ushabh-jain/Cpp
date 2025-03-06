// //remove k digit to form minimum 
//Tc->O(3N)+O(k)

// class Solution {
//     public:
//         string removeKdigits(string num, int k) {
//             stack<char>st;
//             for(int i=0;i<num.size();i++){
//                 //first check the top element of stack with curr element 
//                 while(!st.empty() && (st.top()-'0')>(num[i]-'0')&&k>0){
//                     st.pop();
//                     k--;
//                 }
//                 //push the curr digit
//                 st.push(num[i]);
//             }
//             //if k is still positive remove from the top
//             while(k>0) {
//                 st.pop();
//                 k--;
//             }
//             //agar empty hai toh return 0
//             if(st.empty()) {
//                 return "0";
//             }
//             //contruct res from the stack
//             string res = "";
//              while(!st.empty()){
//                 res.push_back(st.top());
//                 st.pop();
//             }
    
//         reverse(res.begin(),res.end());//stack lifo follow krta hai toh ulta daalna hoga
//         //ab leading zeeroos like 00200 toh agle 2 nikaldo
//         int i=0;
//         while(res[i]=='0'){
//             i++;//skip all leading zeros
//         }
    
//         res=res.substr(i); //extact the res without leading zeros
//         if(res==""){
//             return "0";
//         }
//         return res;
    
//         }
    
       
    
//     };