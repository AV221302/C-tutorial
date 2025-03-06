#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;

    return p;
}
void list(struct Node* p){
    if(p!=NULL){
        list(p->left);
        printf("%d\n",p->data);
        list(p->right);
    }
}

int main() {
    // struct Node* p; // Corrected typo from 'noe' to 'Node'
    // p = (struct Node*)malloc(sizeof(struct Node));
    // p->left = NULL;
    // p->right = NULL;
    struct Node* p = createNode(2);
    

    // struct Node* p1;
    // p1 = (struct Node*)malloc(sizeof(struct Node));
    // p1->left = NULL;
    // p1->right = NULL;
    // p1->data = 1;
    struct Node* p1 = createNode(1);

    // struct Node* p2;    
    // p2 = (struct Node*)malloc(sizeof(struct Node));
    // p2->left = NULL;
    // p2->right = NULL;
    // p2->data = 4;
 struct Node * p2 = createNode(4);
    p->left = p1;
    p->right = p2;

    struct Node* p3 = createNode(3);  

    list(p);



    return 0;
}