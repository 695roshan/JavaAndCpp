#include <stdio.h>
#include <stdlib.h>
typedef struct LinkedList
{
    int key;
    struct LinkedList *next;
}NODE;

NODE *head=NULL;

void create (int k)//creates and adds a node at the end 
{
    NODE *x= (NODE *)malloc(sizeof(NODE)), *y=head;
    x->key=k;
    x->next=NULL;
    if(!head)
    {
        head=x;
        return;
    }
    while(y->next)
        y=y->next;
    y->next=x;    
}
void insertFirst(int k)
{
    NODE *x= (NODE *)malloc(sizeof(NODE));
    x->key=k;
    x->next=head;
    head=x;
}
void insertIntermediate(int k,int p)
{
    int c=1;
    NODE *x= (NODE *)malloc(sizeof(NODE)), *y=head;
    x->key=k;
    while(y)
    {
        ++c;
        if(c==p)
            break;
        y=y->next;
    }
    x->next=y->next;
    y->next=x;
}

int deleteFirst()
{
    NODE *x=head;
    int k=x->key;
    head=head->next;
    x->next=NULL;
    free(x);
    return k;
}
int deleteLast()
{
    NODE *x=head;
    while((x->next)->next)
        x=x->next;
    int k=(x->next)->key;
    x->next=NULL;
    free(x->next);
    return k;
}
int deleteIntermediate(int p)
{
    NODE *x=head;
    int c=1;
    while(x)
    {
        if(c==p-1)
        {
            int k=(x->next)->key;
            x->next=(x->next)->next;
            x=NULL;
            free(x);
            return k;
        }
        x=x->next;
        ++c;
    }
}
void display()
{
    NODE *x=head;
    if(!head)
    {
        printf("The list is empty");
        return;
    }
    while(x)
    {
        printf("%d\t",x->key);
        x=x->next;
    }
    printf("\n");
}
int main()
{
    int ch,c,e,p;
    do{
        printf("\n1.Insert Node at end\n2.Insert at front\n3.Insert at intermediate\n4.Delete Front\n5.Delete End\n6.Delete at intermediate\n7.Display\n8.Quit\nEnter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
                printf("Enter the element: ");
                scanf("%d",&e);
                c++;
                create (e);
                break;
        case 2:
                printf("Enter the element: ");
                scanf("%d",&e);
                c++;
                insertFirst(e);
                break;
        case 3:
                printf("Enter the position: ");
                scanf("%d",&p);
                if(p>c || p<2)
                {
                    printf("Invalid position");
                    break;
                }
                printf("Enter the element: ");
                scanf("%d",&e);
                c++;
                insertIntermediate(e,p);
                break;        
        case 4:
                if(c==0)
                {
                    printf("List is empty");
                    break;
                }
                c--;
                printf("%d is deleted from the front\n",deleteFirst());
                break;
        case 5:
                if(c==0)
                {
                    printf("List is empty");
                    break;
                }
                c--;
                printf("%d is deleted from the end\n",deleteLast());
                break;
        case 6:
                printf("Enter the position: ");
                scanf("%d",&p);
                if(p>c || p<2)
                {
                    printf("Invalid position");
                    break;
                }
                printf("%d is deleted from position %d\n",deleteIntermediate(p),p);
                break;
        case 7:
                display();
                break;
        case 8:
                printf("BYE BYE!");
                break;
        default:
                printf("Enter proper value");
        }
    }while(ch!=8);
    return 1;
}