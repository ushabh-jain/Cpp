//check if rotated string hai ki nhai 


// class Solution {
//     public:
//         bool rotateString(string s, string goal) {
//             if(s.length()!=goal.length()){
//                 return false;
//             }
//             //if we double the string it will contail the rotated string
//             string str = s+s;
//             //In C++, std::string::npos is a special constant value that represents "not found" when using string
//             return str.find(goal) != std::string::npos;
    
//         }
//     };

//this also can be done approach 2

// for (int i = 0; i < n; i++) {
//     // Perform left rotation
//     char first = s[0];
//     s.erase(s.begin());
//     s.push_back(first);

//     // Check if it matches goal
//     if (s == goal) return true;
// }