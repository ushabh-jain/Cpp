//Reverse Words in a String



// class Solution {
//     public:
//         string reverseWords(string s) {
//             //step 1 reverse string
//             reverse(s.begin(),s.end());
    
//             int i=0;
//             //hero honge humare l and r jo reverse krenenge words ko
//             int l=0;
//             int r=0;
//             int n = s.length();
//             while(i<n){
//                 while(i<n && s[i] != ' '){ 
//                     //i ko agar char dikha to r ko dega and i++ and r++
//                     s[r++] = s[i++];
//                 }
//                 if(l<r){
//                     reverse(s.begin()+l,s.begin()+r);
//                     s[r]=' ';
//                     r++;
//                     l=r;
//                 }
//                 i++; //isko nahi rok skta 
//             }
//             s=s.substr(0,r-1); //jidhar tk jayegi dekhlo bss usse ek pehele string tyaar hai
//             return s;
//         }
//     };