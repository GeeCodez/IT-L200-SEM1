# Linked Lists and Doubly Linked Lists - Operations

This repository contains minimal implementations of **Singly Linked List (SLL)** and **Doubly Linked List (DLL)** operations in C++.  
Each core operation is implemented in its own file for clarity.

---

## File Structure

| File | Operations |
|------|------------|
| `insert.cpp` | Insertion at Beginning & End (SLL and DLL) |
| `delete.cpp` | Deletion at Beginning, End, and by Position (SLL and DLL) |
| `search_traverse.cpp` | Traversal and Search (SLL and DLL) |

---

## Singly Linked List (SLL)

- **Node Structure:**  
  ```cpp
  struct SNode {
      int data;
      SNode* next;
  };
  ```
- **Operations:**  
  - Insert at Beginning / End  
  - Delete at Beginning / End / Specific Position  
  - Traversal  
  - Search  

---

## Doubly Linked List (DLL)

- **Node Structure:**  
  ```cpp
  struct DNode {
      int data;
      DNode* prev;
      DNode* next;
  };
  ```
- **Operations:**  
  - Insert at Beginning / End  
  - Delete at Beginning / End / Specific Position  
  - Traversal (Forward)  
  - Search  

---

## Usage

1. Compile the desired file:
```bash
g++ insert.cpp -o insert
g++ delete.cpp -o delete
g++ search_traverse.cpp -o search_traverse
```

2. Run the executable:
```bash
./insert
./delete
./search_traverse
```

3. Each file contains minimal examples demonstrating the operations.

---

## Notes

- **SLL**: Single-direction traversal, simple to implement.  
- **DLL**: Bi-directional traversal, more flexible for insertion/deletion.  
- All operations are designed to be **minimal, easy to understand, and exam-friendly**.
