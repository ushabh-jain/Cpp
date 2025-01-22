//find the occurances of palindrome in a given string

// bool ispalindrome(string str){
//     int i=0;
//     int j=str.length()-1;
//     while(i<j){
//         if(tolower(str[i])!=tolower(str[j])){
//             return false;
//         }
//         i++;
//         j--;
//     }
//            return true;
// }
// int countPalindrome(string str) {
//     int count = 0;
//     string word = "";
//     for(char c : str){
//         if(c == ' '){
//             if(!word.empty() && ispalindrome(word)){
//                 count++;
//             }
//             word = "";
//         }else{
//             word += c;
//         }
//     }
//      if (!word.empty() && ispalindrome(word)) {
//         count++;
//     }
//     return count;
// }