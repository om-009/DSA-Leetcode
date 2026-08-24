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
        ListNode* temp = head;

        //if empty no  need to check anything it will be best for reducing time.
        if (head == NULL) {
            return NULL;
        }

        while(temp-> next != NULL){
            if(temp->val == temp->next->val){
                ListNode* n = temp->next;
                temp->next = temp->next->next;
                delete n;
            }

            else{
                temp = temp -> next;
            }
        }
        return head;
    }
};