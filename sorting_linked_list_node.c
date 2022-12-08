#include "stdio.h"
#include "stdlib.h"
#include "time.h"
struct node{
    int data;
    struct node *next;
};
void addrandnumtonode(struct node* myNode){
    while (myNode!=NULL){
        int rannum=rand()%100;
        myNode->data=rannum;
        myNode=myNode->next;
    }
}
void printdata(struct node *myNode){
    while (myNode!=NULL){
        printf("%d\n",myNode->data);
        myNode=myNode->next;
    }
}
void sort(struct node *myNode){
    int temp=0;
    struct node *first=myNode;
    while (first!=NULL){
        struct node* second=myNode->next;
        while (second!=NULL){
            if((first->data)>(second->data)){
                temp=first->data;
                first->data=second->data;
                second->data=temp;
            }
            second = second->next;
        }
        first=first->next;
        myNode=myNode->next;
    }
}
int main(){
    struct node *one=NULL;
    struct node *two=NULL;
    struct node *three=NULL;
    struct node *four=NULL;
    struct node *five=NULL;
    struct node *six=NULL;
    struct node *seven=NULL;
    struct node *eight=NULL;
    struct node *nine=NULL;
    struct node *ten=NULL;

    one = (malloc(sizeof(struct node)));
    two = (malloc(sizeof(struct node)));
    three = (malloc(sizeof(struct node)));
    four = (malloc(sizeof(struct node)));
    five = (malloc(sizeof(struct node)));
    six = (malloc(sizeof(struct node)));
    seven = (malloc(sizeof(struct node)));
    eight = (malloc(sizeof(struct node)));
    nine = (malloc(sizeof(struct node)));
    ten = (malloc(sizeof(struct node)));

    one->next=two;
    two->next=three;
    three->next=four;
    four->next=five;
    five->next=six;
    six->next=seven;
    seven->next=eight;
    eight->next=nine;
    nine->next=ten;
    ten->next=NULL;

    srand(time(NULL));
    addrandnumtonode(one);
    printdata(one);
    sort(one);
    printf("after\n");
    printdata(one);
}
