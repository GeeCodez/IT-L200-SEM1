# Linked Lists and Doubly Linked Lists

## Singly Linked List (SLL)

### Node Structure
- `data` → value stored  
- `next` → pointer to next node  

### Operations

**Insertion**
- At Beginning:
  1. Create new node with data
  2. Set newNode->next = head
  3. Update head = newNode
- At End:
  1. Create new node with data
  2. Traverse to last node
  3. Set lastNode->next = newNode

**Deletion**
- At Beginning:
  1. If list empty → cannot delete
  2. Move head = head->next
  3. Delete old head
- At End:
  1. If list empty → cannot delete
  2. Traverse to second-to-last node
  3. Delete last node and set secondLast->next = nullptr
- At Specific Position:
  1. Traverse to node before target
  2. Adjust pointers to skip target node
  3. Delete target node

**Traversal**
- Start from head, visit each node, print data, stop at nullptr

**Search**
- Start from head
- Compare each node’s data with key
- If found → return position/index
- If end reached → key not found

---

## Doubly Linked List (DLL)

### Node Structure
- `prev` → pointer to previous node  
- `data` → value  
- `next` → pointer to next node  

### Operations

**Insertion**
- At Beginning:
  1. Create new node with prev, data, next
  2. If list empty → head = new node
  3. Else:
     - newNode->next = head
     - head->prev = newNode
     - newNode->prev = nullptr
  4. Update head = newNode
- At End:
  1. Create new node
  2. Traverse to last node
  3. lastNode->next = newNode
  4. newNode->prev = lastNode

**Deletion**
- At Beginning:
  1. If list empty → cannot delete
  2. Move head = head->next
  3. If new head exists → head->prev = nullptr
  4. Delete old head
- At End:
  1. If list empty → cannot delete
  2. Traverse to last node
  3. Set secondLast->next = nullptr
  4. Delete last node
- By Key / Position:
  1. Traverse to node to delete
  2. Adjust `prev` and `next` pointers of neighbors
  3. Delete target node

**Traversal**
- Forward: Start from head → follow `next` → print data → stop at nullptr  
- Backward: Start from last node → follow `prev` → print data → stop at nullptr

**Search**
- Start from head
- Compare each node’s data with key
- Return node if found, else indicate not found

---

## Summary
- **Singly Linked List:** single direction, simple  
- **Doubly Linked List:** forward & backward, flexible, easier insertion/deletion
