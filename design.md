1. Initialization: Function to initialize a new empty linked list.
    - Implement `typedef struct list { Node_t head; size_t len } List_t`
2. Insertion:
    - Function to insert a new node at the beginning of the list.
    - Function to insert a new node at the end of the list.
    - Function to insert a new node after a specified node.
3. Deletion:
    - Function to delete the first node of the list.
    - Function to delete the last node of the list.
    - Function to delete a node by value.
4. Traversal: Function to traverse the list and print/display its contents.
5. Search: Function to search for a node with a given value.
6. Size: Function to get the number of nodes in the list.
7. Empty: Function to check if the list is empty.
8. Clear: Function to delete all nodes in the list and free memory.
9. Reverse: Function to reverse the order of nodes in the list.
10. Sorting: Function to sort the elements of the list (optional).
11. Merge: Function to merge two sorted lists into one sorted list (optional).
12. Duplicate Removal: Function to remove duplicate elements from the list (optional).

TODO

- [x] `typedef struct Node { void* next; int data } Node_t`
- [x] Push
    - pushes a new element to the front of the list
- [x] Pop
    - pops the front element
- [x] Next
    - enables us to traverse the list from head to tail.
- [x] CLI for push, pop, and a function which prints the whole linked list
- [ ] Refactor to remove global `Node_t* head = NULL;` and add support for multiple lists.
- [ ] push_back, pop_back
    - push and pop the back element
- [ ] CLI for ^^
- [ ] insert, remove
    - inserts and removes elements at the specified index.