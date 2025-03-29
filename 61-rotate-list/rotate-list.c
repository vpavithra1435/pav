/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (!head || !head->next || k == 0) return head;

    int n = 1;
    struct ListNode* temp = head;
    while (temp->next) {
        temp = temp->next;
        n++;
    }
    temp->next = head;
     k = k % n;  
    int newTailPos = n - k;
    struct ListNode* newTail = head;

    for (int i = 1; i < newTailPos; i++) {
        newTail = newTail->next;
    }

    head = newTail->next;
    newTail->next = NULL;

    return head;
}
