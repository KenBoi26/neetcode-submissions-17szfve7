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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int num1 = 0;
        int num2 = 0;
        int count = 0;

        while(l1!=nullptr){
            num1 += pow(10,count)*l1->val;
            l1 = l1->next;
            count++;
        }


        count = 0;

        while(l2!=nullptr){
            num2 += pow(10,count)*l2->val;
            count++;
            l2 = l2->next;
        }
        int sum = num1+num2;
        if (sum == 0) return new ListNode(0);
        
        ListNode* result = new ListNode();
        ListNode* curr = result;
        while(sum > 0){
            curr->next = new ListNode(sum%10);
            sum/=10;
            curr = curr->next;
        }

        return result->next;

    }
};
