//create a linklist and print 
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head = 0, *newnode, *team;
    int choise = 1;
    while (choise)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter you number\n");
        scanf("%d", &newnode->data);
        if (head == 0)
        {
            head = newnode;
            team = newnode;
        }
        else
        {
           team->next = newnode;
            team = newnode;
        }
        printf("you have add one more node press 1 else 0\n");
        scanf("%d",&choise);
    }
    team=head;
    while(team!=0){
        printf("%d\t",team->data);
         team=team->next;
    }
    return 0;
}