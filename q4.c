#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the linked list
void insertNode(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to find elements at positions n/2, n/3, n/4, ..., n/k
void findElements(struct Node* head) {
    if (head == NULL) return;

    struct Node* n2 = head;
    struct Node* n3 = head;
    struct Node* n4 = head;
    struct Node* current = head;
    int count = 1;

    while (current != NULL) {
        if (count % 2 == 0 && n2 != NULL) n2 = n2->next;
        if (count % 3 == 0 && n3 != NULL) n3 = n3->next;
        if (count % 4 == 0 && n4 != NULL) n4 = n4->next;

        current = current->next;
        count++;
    }

    printf("Element at n/2: %d\n", n2 ? n2->data : -1);
    printf("Element at n/3: %d\n", n3 ? n3->data : -1);
    printf("Element at n/4: %d\n", n4 ? n4->data : -1);
}

int main() {
    struct Node* head = NULL;

    // Insert elements into the linked list
    insertNode(&head, 1);
    insertNode(&head, 2);
    insertNode(&head, 3);
    insertNode(&head, 4);
    insertNode(&head, 5);
    insertNode(&head, 6);
    insertNode(&head, 7);
    insertNode(&head, 8);

    // Find and print elements at positions n/2, n/3, n/4, ...
    findElements(head);

    return 0;
}



