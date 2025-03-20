//middle of ll

//done by tortoise hare method 

// class Solution {
//     public:
//         ListNode* middleNode(ListNode* head) {
//             ListNode* sp = head;
//             ListNode* fp = head;
//             while(fp!=nullptr && fp->next!=nullptr){
//                 sp = sp->next;
//                 fp = fp->next->next;
    
//             }
//             return sp;
//         }
//     };