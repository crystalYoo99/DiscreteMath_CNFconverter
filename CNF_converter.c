#include <stdio.h>

typedef struct{
    char element[10];
    struct node * next[100];
    int level;
    int siblingCount;
}node;

int main(){

    //input receive

    //make tree

    nnf();
    cnf();
    printResult();

}

node * makeSiblingLeaf(char newElement[], int siblingCount){
    node*newNode = (node*)malloc(sizeof(node));
    newNode->element[10]=newElement;
    newNode->next[siblingCount]=NULL;
    siblingCount++;
    return newNode;
}

node * makeChildLeaf(char newElement[], int siblingCount){
    node*newNode = (node*)malloc(sizeof(node));
    newNode->element[10]=newElement;
    newNode->next[siblingCount]=NULL;
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