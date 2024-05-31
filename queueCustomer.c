#include<stdio.h>
#include<stdlib.h>
#define MAX_CUSTOMERS 5

int chairs[MAX_CUSTOMERS], front = 0, rear = -1;
void addCustomer(int token)
{
    if(rear == MAX_CUSTOMERS - 1)
    {
        printf("Maximum number of customers reached.\n");
        return;
    }
    chairs[++rear] = token;
    printf("Customer with token %d seated successfully.\n", token);
}


void callCustomer()
{
    if(front > rear)
    {
        printf("There are no customers.\n");
        return;
    }
    int token = chairs[front++], i;
    for(i = front; i <= rear; i++)
    {
        chairs[i - 1] = chairs[i];
    }
    front--;
    rear--;
    printf("Customer with token %d called for transaction.\n", token);
}

void displayCustomers()
{
    if(front > rear)
    {
        printf("There are no customers.\n");
        return;
    }
    int i;
    for(i = front; i <= rear; i++)
    {
        printf("Chairs[%d] = %d\n", i, chairs[i]);
    }
}

int main()
{
    int token, choice;
    for(;;)
    {
        printf("\n1.Add customer\t2.Call customer\t3.Display customers\t4.Exit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter the token: ");
                scanf("%d", &token);
                addCustomer(token);
                break;
            case 2:
                callCustomer();
                break;
            case 3:
                displayCustomers();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}