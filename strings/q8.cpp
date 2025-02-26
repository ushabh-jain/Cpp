//largets odd string
// class Solution {
//     public:
//         string largestOddNumber(string num) {
//             for(int i=num.length()-1;i>=0;i--){
//                 //yeh nums[i]-'0' issse number char mein convert hojata hai
//                 if((num[i]-'0')%2==1){
//                     return num.substr(0,i+1);
    
//                 }
//             }
//             return "";
//         }
//     };