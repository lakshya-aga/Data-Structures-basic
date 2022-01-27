#include <stdio.h>
#include <stdlib.h>
struct node{
        int content;
        struct node *next;

    };
typedef struct node LinkedList;
int main() {
    LinkedList *temp, *head=NULL;
    int i;
    while(scanf("%d Enter",&i))
    {
        if(head==NULL)
        {
            head=malloc(sizeof(LinkedList));
            temp=head;
            temp->next = NULL;
        }
        else
        {
            temp->next=malloc(sizeof(LinkedList));
            temp=temp->next;
            temp->next=NULL;
        }
        temp->content=i;
    }
    printf("loop exit");
    printf("%d kk \n",head->content);
    LinkedList* p=head->next;
    while(p!=NULL)
    {
        printf("%d kk \n",p->content);
        p=p->next;
    }
return 0;
}
