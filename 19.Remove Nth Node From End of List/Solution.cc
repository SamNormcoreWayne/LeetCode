#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = 0;
        ListNode * Node = head;
        for (int i = 0; Node != NULL; ++i)
        {
            length++;
            Node = Node->next;
        }
        length = length - n;
        if (length < 0)
            return NULL;
        if (length == 0)
        {
            head = head->next;
            return head;
        }
        Node = head;
        for (int i = 0; i < length - 1; ++i)
            Node = Node->next;
        Node->next = Node->next->next;
        return head;
    }
};