#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main(){

    struct Node *top;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct  Node *fifth;

    top->data=4;
    top->next=second;

    second->data=9;
    second->next=third;

    third->data=22;
    third->next=fourth;

    fourth->data=6;

    fourth->next=fifth;

    fifth->data=88;

    fifth->next=NULL;

    return 0;
}