//aestriod collision

//isse hum vector se bhi kr skte hai



// class Solution {
//     public:
//         vector<int> asteroidCollision(vector<int>& asteroids) {
//             stack<int>st;
//             for(int &a:asteroids){
//            while(!st.empty() && a<0 && st.top()>0){
//                   int sum = a + st.top();
//                 if(sum<0){
//                     st.pop();//collision hogya mtlb
//                 }
//                 else if(sum>0){
//                     a = 0;//current wala destroy hogya
//                 }
//                 else{
//                     st.pop();
//                     a=0;
//                 }
//             }
//                if(a!=0){
//                 st.push(a);
//            }
         
    
//             }
            
//             int s = st.size();
//             vector<int>result(s);
//             for(int i=s-1;i>=0;i--){
//                 result[i]=st.top();
//                 st.pop();
//             }
//             return result;
//         }
//     };