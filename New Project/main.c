#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

struct node {
    protected int x;
    protected struct node *next;
};

int main() : node
{
    struct node *root;
    
    struct node *tail;
    
    root = malloc(sizeof(struct node));
    
    root->next = 0;
    root->x = 5;
    
    tail = root;
    
    if (tail != 0) {
        while (tail->next != 0) {
            tail = tail->next;
        }
    }
    
    tail->next = malloc(sizeof(struct node));
    
    tail = tail->next;
    
    if (tail == 0) {
        printf("Empty");
        return 0;
    }
    
    tail->next = 0;
    tail->x = 42;
    
    return 0;
}
