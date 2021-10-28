#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;

} *first=NULL;

 void create( int A[], int n)
{
   struct Node *last,*t;
 first=(struct Node *)malloc(sizeof(struct Node ));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node ));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
last=last->next;
    }
}
/*void display(struct Node *p)
{
    while(p!=NULL)
    {
       printf("%d ",p->data);
       p=p->next;
forward traversal
    }

}*/
void Rdisplay(struct Node *p)
{
  if(p!=NULL)///reverse traversal
{
    Rdisplay(p->next);

   printf("%d ",p->data);
}

}
int main()
{
    int A[]={2,3,5,8,9};

     create(A,5) ;
     Rdisplay(first);
     return 0;
}

