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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;

        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        temp = head;

        if (n == count) { //last element from last(firstNode)
            ListNode* toDelete = head;
            head = head->next;
            delete toDelete;
            return head;
        }

        for(int i = 0;i<(count-n-1);i++){
            temp = temp->next;
        }
        ListNode* nw = temp->next;
        temp->next = temp->next->next;
        delete nw;

        return head;
    }
};