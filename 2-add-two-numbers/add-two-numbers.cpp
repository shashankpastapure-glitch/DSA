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
     string reverse(string n) {
        string rev = "";
        for (int i = n.length() - 1; i >= 0; i--) {
            rev += n[i];
        }
        return rev;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string val1 = "";
        string val2 = "";
        ListNode* i = l1;
        while (i != nullptr) {
            val1 += to_string(i->val);
            i = i->next;
        }
        ListNode* j = l2;
        while (j != nullptr) {
            val2 += to_string(j->val);
            j = j->next;
        }

        val1 = reverse(val1);
        val2 = reverse(val2);
        string ans = "";
        int carry = 0;
        int x = val1.length() - 1;
        int y = val2.length() - 1;

        while (x >= 0 || y >= 0 || carry) {
            int sum = carry;
            if (x >= 0)
                sum += val1[x--] - '0';
            if (y >= 0)
                sum += val2[y--] - '0';
            ans += char((sum % 10) + '0');

            carry = sum / 10;
        }

        ListNode* head = nullptr;
        ListNode* tail = nullptr;

        for (char c : ans) {

            ListNode* newNode = new ListNode(c - '0');

            if (head == nullptr) {
                head = newNode;
                tail = newNode;
            }
            else {
                tail->next = newNode;
                tail = newNode;
            }
        }

        return head;
    }
};