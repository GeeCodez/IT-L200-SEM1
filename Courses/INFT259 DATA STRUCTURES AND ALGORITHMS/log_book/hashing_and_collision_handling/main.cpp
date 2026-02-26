#include <iostream>
using namespace std;

// Node structure for linked list
struct Node {
    int studentID;
    string studentName;
    Node* next;

    Node(int id, string name) {
        studentID = id;
        studentName = name;
        next = NULL;
    }
};

class HashTable {
private:
    static const int tableSize = 10;
    Node* table[tableSize];

public:
    // Constructor
    HashTable() {
        for (int i = 0; i < tableSize; i++) {
            table[i] = NULL;
        }
    }

    // Hash function
    int hashFunction(int key) {
        return key % tableSize;
    }

    // Insert function
    void insert(int id, string name) {
        int index = hashFunction(id);

        Node* newNode = new Node(id, name);

        // If no collision
        if (table[index] == NULL) {
            table[index] = newNode;
        }
        // Collision → Separate Chaining
        else {
            Node* temp = table[index];
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Display function
    void display() {
        for (int i = 0; i < tableSize; i++) {
            cout << "Index " << i << ": ";
            Node* temp = table[i];
            while (temp != NULL) {
                cout << "[" << temp->studentID
                     << ", " << temp->studentName << "] -> ";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
    }

    // Search function
    void search(int id) {
        int index = hashFunction(id);
        Node* temp = table[index];

        while (temp != NULL) {
            if (temp->studentID == id) {
                cout << "Student Found: "
                     << temp->studentName << endl;
                return;
            }
            temp = temp->next;
        }

        cout << "Student Not Found." << endl;
    }
};

int main() {
    HashTable ht;

    ht.insert(101, "Kwame");
    ht.insert(111, "Ama");
    ht.insert(121, "Kojo");  // Collision example

    ht.display();

    ht.search(111);

    return 0;
}
