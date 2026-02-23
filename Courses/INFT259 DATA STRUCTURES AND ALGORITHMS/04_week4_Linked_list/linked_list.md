# LINKED LISTS
* Dynamic Linear data structure in which each element is a seperate object known as a node.
* Each node contains some data and a pointer that points to the memory location of the next node.
* Starts with a head and ends with a tail which points to null
* Stores nodes of different data types
* Operations include: insertion, deletion, searching, display, and deleting at a given key.
* Declared in C++ using "struck Node{
    int data;
    Node* next;
} "
* **ALWAYS SPECIFY THE HEAD AND A TAIL IN LINKED LISTS**

### TYPES OF LINKED LISTS
* **Singly**: contains 2 buckets, one pointing to the next node and one holding data
* **Doubly**: points to both the previous and the next node
* **Circular**: last node points to the first node. Can be in both singly and doubly

### STATIC REPRESENTATION OF LINKED LIST
|Data|      |Link|
0 | 21 |->| 1 |
1 | 14 |->| 5 |
2 | 18 |->| Null |
3 | 12 |->| 4 |
4 | 6 |->| 2 |
5 | 32 |->| 3 |

