#include <iostream>
#include <stdlib.h>
#include <stdio.h>
// implement linked list

struct Node {
    int data;
    Node* next;
};


void Insert(int x, Node** pointerToHead) {    // we insert at the begining of list
    Node* temp = (Node*)malloc(sizeof(Node)); // return pointer that need casting
    temp->data = x;
    temp->next = *pointerToHead;               // deReference = value of head
    *pointerToHead = temp;                      // value of head = temp
    // return head;            // because we not modifiled the origin of the head pointer
}

void Print(Node* head) {

    std::cout << "The list is :    " ;
    while (head != nullptr)
    {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout<< "\n" <<"----------------" << std::endl;
}

int main() {

    Node* head = nullptr;

    int n,x;
    std::cout << "how many numbers ? . ";
    std::cin >> n;
    for (int i =0 ; i< n; i++ ){
        std::cout << "enter the number : " ;
        std::cin >> x;
        std::cout << "\n";
        // head = Insert(x, head); // this way two pointer point at same adress of memory
        Insert(x, &head);
        Print(head);
    }
}
