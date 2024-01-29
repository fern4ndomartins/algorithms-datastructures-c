#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char * data;
    struct node * next;  
} node_t;

// function to push a node to the topmost position
node_t* pushnode(node_t *n, char * dt) {
    node_t * newnode = (node_t *) malloc(sizeof(node_t));  
    newnode->next = n;
    newnode->data = dt;
    return (node_t*) {newnode};
}

// function to remove the node from the topmost position
node_t* popnode(node_t *n) {
    n = n->next;
    return n;
}

// function that iterates through the list printing its values
void readall(node_t *n) {
    node_t *i = n;
    int counter = 0;
    while (i != NULL) {
        printf("\nnode %d: %s", counter, i->data);
        i = i->next;
        counter++;
    }
}

int main() {
    node_t *first = NULL;
    first = (node_t *) malloc(sizeof(node_t));
    first->data = "first node";
    first->next = NULL;
    first = pushnode(first, "second node");
    first = pushnode(first, "third node");
    first = pushnode(first, "fourht node");
    first = pushnode(first, "fifth node");
    first = pushnode(first, "giraffes!!!");
    first = pushnode(first, "this node will be removed :(");
    first = popnode(first);
    readall(first);
}
