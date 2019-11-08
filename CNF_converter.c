#include <stdio.h>

typedef struct{
    char element[10];
    struct node * next[100];
}node;

int level;
int childCount;

int main(){

}

node * makeChildLeaf(char newElement[]){
    node*newNode = (node*)malloc(sizeof(node));
    
    newNode->element[10]=newElement;

    newNode->next[childCount]=NULL;
    return newNode;
}

void deleteLeaf(node *node){
    free(node);
}

void nnf(){

}

void cnf(){

}

void printResult(){

}