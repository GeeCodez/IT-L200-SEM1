#include <iostream>
using namespace std;

// Singly Linked List Node
struct SNode {
    int data;
    SNode* next;
};

// Doubly Linked List Node
struct DNode {
    int data;
    DNode* prev;
    DNode* next;
};

// Singly Linked List Traversal
void traverseSLL(SNode* head){
    while(head){ cout << head->data << " "; head = head->next; }
    cout << endl;
}

// Doubly Linked List Traversal (Forward)
void traverseDLL(DNode* head){
    while(head){ cout << head->data << " "; head = head->next; }
    cout << endl;
}

// Singly Linked List Search
SNode* searchSLL(SNode* head, int key){
    while(head){
        if(head->data == key) return head;
        head = head->next;
    }
    return nullptr;
}

// Doubly Linked List Search
DNode* searchDLL(DNode* head, int key){
    while(head){
        if(head->data == key) return head;
        head = head->next;
    }
    return nullptr;
}

int main(){
    // SLL example
    SNode* sHead = new SNode{10,nullptr};
    sHead->next = new SNode{20,nullptr};
    sHead->next->next = new SNode{30,nullptr};
    cout<<"Singly LL: "; traverseSLL(sHead);
    SNode* foundS = searchSLL(sHead, 20);
    if(foundS) cout<<"Found in SLL: "<<foundS->data<<endl;

    // DLL example
    DNode* dHead = nullptr;
    DNode* newNode = new DNode{50,nullptr,nullptr};
    dHead = newNode;
    dHead->next = new DNode{100,dHead,nullptr};
    cout<<"Doubly LL: "; traverseDLL(dHead);
    DNode* foundD = searchDLL(dHead,100);
    if(foundD) cout<<"Found in DLL: "<<foundD->data<<endl;

    return 0;
}
