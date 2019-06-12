#include <iostream>

struct ListNode
{
    int ele;
    ListNode *next;
    ListNode(int x) : ele(x), next(NULL)
    {}
};

class Stack
{
private:
    ListNode *top;
    ListNode *bot;
public:
    
}