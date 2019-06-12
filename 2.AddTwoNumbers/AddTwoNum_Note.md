# Notes for # 2 Add Two Numbers

Thought:

1. Reverse 2 integers
2. Add them
3. Store them into linked list.
4. Output

For *Add Them*:

1. an input might be larger than INT_MAX
2. simply use int wiil cause a fail
3. try use vector<int> (256, 0) or int[256]
--------

They are all **WRONG**!

Thoughts:

1. these 2 lists look like reversed, but in fact, they are sequential.
2. add each ele of them into a new list.
3. store the head of the new lists.
4. return the head.


For Adding Them:

1. Declare a new list called sum;
2. Once one input list is not long enough, append it with 0
3. give a tag to check whether there needs add one or not.
4. as long as l1 & l2 are the last one of each list **AND** the tag is false, return head.
