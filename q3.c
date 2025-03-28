#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int tree[MAX];

// Initialize the tree
void initialize() {
    for (int i = 0; i < MAX; i++) {
        tree[i] = -1;
    }
}

// Insert a node in the tree
void insert(int value) {
    for (int i = 0; i < MAX; i++) {
        if (tree[i] == -1) {
            tree[i] = value;
            return;
        }
    }
    printf("Tree is full\n");
}

// Search for a node in the tree
int search(int value) {
    for (int i = 0; i < MAX; i++) {
        if (tree[i] == value) {
            return i;
        }
    }
    return -1;
}

// Delete a node from the tree
void delete(int value) {
    int index = search(value);
    if (index == -1) {
        printf("Value not found in the tree\n");
        return;
    }

    // Find the bottom-most and rightmost node
    int lastIndex = -1;
    for (int i = 0; i < MAX; i++) {
        if (tree[i] != -1) {
            lastIndex = i;
        }
    }

    // Replace the node to be deleted with the bottom-most and rightmost node
    tree[index] = tree[lastIndex];
    tree[lastIndex] = -1;
}

// Print the tree
void printTree() {
    for (int i = 0; i < MAX; i++) {
        if (tree[i] != -1) {
            printf("%d ", tree[i]);
        }
    }
    printf("\n");
}

int main() {
    initialize();
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);

    printf("Tree: ");
    printTree();

    printf("Search 30: %d\n", search(30));

    delete(30);
    printf("Tree after deleting 30: ");
    printTree();

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a binary tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node in the binary tree
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }

    return root;
}

// Function to search for a node in the binary tree
struct Node* search(struct Node* root, int data) {
    if (root == NULL || root->data == data) {
        return root;
    }

    if (data < root->data) {
        return search(root->left, data);
    } else {
        return search(root->right, data);
    }
}

// Function to find the rightmost node
struct Node* findRightmost(struct Node* root) {
    while (root->right != NULL) {
        root = root->right;
    }
    return root;
}

// Function to delete a node from the binary tree
struct Node* delete(struct Node* root, int data) {
    if (root == NULL) {
        return root;
    }

    if (data < root->data) {
        root->left = delete(root->left, data);
    } else if (data > root->data) {
        root->right = delete(root->right, data);
    } else {
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        struct Node* temp = findRightmost(root->left);
        root->data = temp->data;
        root->left = delete(root->left, temp->data);
    }

    return root;
}

// Function to print the binary tree in-order
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    struct Node* root = NULL;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);

    printf("Tree: ");
    inorder(root);
    printf("\n");

    struct Node* found = search(root, 30);
    if (found != NULL) {
        printf("Found 30\n");
    } else {
        printf("30 not found\n");
    }

    root = delete(root, 30);
    printf("Tree after deleting 30: ");
    inorder(root);
    printf("\n");

    return 0;
}