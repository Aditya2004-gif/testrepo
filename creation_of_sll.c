#include<stdio.h>
#include<stdlib.h>
typedef struct link
{
    int data;
    struct link *next;
}node;
void createsll(node* l)
{
    int ans;
    while(1)
    {
        printf("\nEnter the data-> ");
        scanf("%d",&l->data);
        printf("\vyou want a new node so press 1,if not 0 -> ");
        scanf("%d",&ans);
        if(ans==0)
        {
            l->next=NULL;
            return ;
        }
        else if(ans==1)
        {
        l->next=(node*)malloc(sizeof(node));            //generate a new node
        l=l->next;
        }
        else
        {
            printf("write a valid number (1/0)"); 
            exit(0);        
        }
    }
}
void printsll(node*l)
{
    while(l!=NULL)
    {
        printf("%d\t",l->data);
        l=l->next;
    }
}
int main()
{
    
    node* start;
    start=(node*)malloc(sizeof(node));
    createsll(start);
    printf("\n\vALL DATA ELEMENTS ARE-> ");
    printsll(start);
}