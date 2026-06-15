class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *s = head, *f = head;
        while (f && f->next) {
            s = s->next;
            f = f->next->next;
        }
        ListNode *p = nullptr, *c = s;
        while (c) {
            ListNode *n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        ListNode *a = head, *b = p;
        while (b) {
            if (a->val != b->val) return false;
            a = a->next;
            b = b->next;
        }
        return true;
    }
};
