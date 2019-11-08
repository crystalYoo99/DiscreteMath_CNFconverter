#define _CRT_SECURE_NO WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char element[10];
    struct node * next[100];
    int siblingCount;
}node;

int main(){
    //input receive
    char input_str[100];
    //int arraySize = 100;
    char* input[100] = { NULL, };
    int i = 0;

    //int len = 0;
    printf("input : ");
    gets(input_str);

    char* ptr = strtok(input_str, " ");

    while(ptr != NULL) {
      input[i] = ptr;
      i++;
      ptr = strtok(NULL, " ");
    }

    return 0;


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
