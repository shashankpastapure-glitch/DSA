/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* prev=head;
        if(prev==nullptr || prev->next==nullptr) return head;
        ListNode* del=prev->next;
        while(del!=nullptr){
            if(del->val==prev->val){
                prev->next=del->next;
                delete del;
                del=prev->next;
            }
            else{
                prev=prev->next;
                del=del->next;
            }
        }
        return head;
    }
};