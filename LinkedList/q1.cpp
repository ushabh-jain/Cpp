//merge two ssorted list



// class Solution {
//     public:
//         ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//             ListNode* temp1 = list1;
//             ListNode* temp2 = list2;
            
//             ListNode* dummy = new ListNode(0);
//             ListNode* ans = dummy;
    
//             while(temp1 != nullptr && temp2!=nullptr){
//                 if(temp1->val<temp2->val){
//                     dummy->next=temp1;
//                     dummy = dummy->next;
//                     temp1=temp1->next;
//                 }
//                 else{
//                     dummy->next=temp2;
//                     dummy = dummy->next;
//                     temp2=temp2->next;
//                 }
            
//             }
//             if(temp1==nullptr){
//                 dummy->next = temp2;
//             }
//             else{
//                 dummy->next = temp1;
//             }
//             return ans->next;
//         }
//     };