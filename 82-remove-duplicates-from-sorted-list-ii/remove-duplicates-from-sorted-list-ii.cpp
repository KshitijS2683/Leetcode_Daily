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
        if(head == NULL)
        {
            return NULL;
        }
        ListNode* dual = new ListNode(0);
        dual->next = head;
        ListNode* temp = head;
        ListNode* prev = dual;
        unordered_map<int,int> inp;
        while(temp != NULL)
        {
            inp[temp->val]++;
            temp = temp->next;
        }
        temp = head;
        while(temp != NULL)
        {
            if(inp[temp->val] > 1)
            {
                prev->next = temp->next;
            }
            else
            {
                prev = temp;
            }
            temp = temp->next;
        }
        return dual->next;
        
    }
};