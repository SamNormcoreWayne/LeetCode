## Note for 19. Remove the Nth Node from end of list

1. Take care of the boundary conditions e.g. remove the first element of the list.

* Solution: return the list without the head immediately.

2. Take care of the condition that it requires to remove N which is larger than the length of the list. (Also boundary conditions)

* Solution: Check the N. If N is out of the boundary, return NULL.