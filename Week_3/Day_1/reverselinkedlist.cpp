class Solution
{
public:
  ListNode *reverseList(ListNode *head)
  {
    ListNode *p = nullptr, *c = head;
    while (c)
    {
      ListNode *n = c->next;
      c->next = p;
      p = c;
      c = n;
    }
    return p;
  }
};
