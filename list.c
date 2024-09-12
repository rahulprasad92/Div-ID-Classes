#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}node;

struct node *createlist(int n){
    struct node *start=NULL, *temp=NULL,*p=NULL;
    for(int i=1; i<=n; i++){
        temp = (struct node *)malloc(sizeof(struct node));
        printf("Enter the new value : ", i+1);
        scanf("%d", &(temp->data));
        temp->next = NULL;

        if(start == NULL){
            start = temp;
        }
        else{
            p = start;
            while(p->next != NULL){
                p=p->next;
            }
            p-> next = temp;
        }
    }
    return start;
}

void displaylist(struct node*start){
    struct node *p = start;
    while(p != NULL){
        printf("\t%d->", p->data);
        p = p->next;
    }
    printf("\tNULL\n");
}

int main(){
    int n;
    struct node *start = NULL;
    printf("Enter No. of Nodes : \n");
    scanf("%d", &n);
    start = createlist(n);
    printf("Display the List : -\n");
    displaylist(start);

    return 0;
}