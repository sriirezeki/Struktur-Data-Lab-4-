#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    system ("cls");
   Node* node1 = new Node();
    node1 -> data = 100;
    node1 -> next = nullptr;  

    Node* node2 = new Node();
    node2 -> data = 92;
    node2 -> next = nullptr;
    
    node1 -> next = node2;

    Node* node3 = new Node();
    node3 -> data = 45;
    node3 -> next = nullptr;
    
    node2 -> next = node3;

    Node* node4 = new Node();
    node4 -> data = 87;
    node4 -> next = nullptr;
    
    node3 -> next = node4;

    Node* node5 = new Node();
    node5 -> data = 71;
    node5 -> next = nullptr;
    
    node4 -> next = node5;

    Node* node6 = new Node();
    node6 -> data = 99;
    node6 -> next = nullptr;
    
    node5 -> next = node6;

    Node* node7 = new Node();
    node7 -> data = 95;
    node7 -> next = nullptr;
    
    node6 -> next = node7;

    Node* node8 = new Node();
    node8 -> data = 60;
    node8 -> next = nullptr;
    
    node7 -> next = node8;

    Node* node9 = new Node();
    node9 -> data = 55;
    node9 -> next = nullptr;
    
    node8 -> next = node9;

    Node* node10 = new Node();
    node10 -> data = 88;
    node10 -> next = nullptr;
    
    node9 -> next = node10;

    Node* head = node1;
    Node* tail = node10;
    
    //menambahkan node di depan
    Node* node11 = new Node();
    node11   -> data = 70;
    node11 -> next = head;

    head = node11;

    //menambahkan node di belakang
    Node* node12 = new Node();
    node12 -> data = 50;
    node12 -> next = nullptr;

    tail -> next = node12;
    tail = node12;

    //menambahkan 0 setelah 45
    Node* node13 = new Node();
    node13 -> data = 0;
    node13 -> next = node3 -> next;
    node3 -> next = node13;

    Node* temp = head;

    while (temp != nullptr) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }

    cout << endl; 

    //hapus nilai 99
    temp = head;

    while (temp -> next -> data != 99) {
        temp = temp -> next;
    }

    Node*hapus = temp -> next; 
    temp -> next = hapus -> next; 
    delete hapus;

     cout << "\nSetelah hapus nilai 99: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp -> data << " ";
        temp = temp -> next;
}

    cout << endl;

    //hapus nilai 60
    temp = head;

    while (temp -> next -> data !=60) {
        temp = temp -> next;
    }

    Node*hps = temp -> next; 
    temp -> next = hps -> next; 
    delete hps;

     cout << "\nSetelah hapus nilai 60: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp -> data << " ";
        temp = temp -> next;
}
}