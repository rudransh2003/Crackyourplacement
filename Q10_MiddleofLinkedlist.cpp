class Solution { // O(N + N/2) 
public:
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            temp = temp->next;
            count++;
        }
        int mid = count / 2;             
        temp = head;
        for (int i = 0; i < mid; i++) {
            temp = temp->next;
        }
        return temp;
    }
};

class Solution { //O(n/2)
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};