#include <stdio.h>

#define size 5

int item[size];
int front = -1, rear = -1;

// Enqueue
void enqueue(int value)
{
    if (rear == size - 1)
    {
        printf("Queue is Full\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }

        rear++;
        item[rear] = value;

        printf("Inserted = %d\n", value);
    }
}

// Dequeue
void dequeue()
{
    if (front == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Deleted = %d\n", item[front]);

        front++;

        if (front > rear)
        {
            front = rear = -1;
        }
    }
}

// Display
void display()
{
    if (rear == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Elements = ");

        for (int i = front; i <= rear; i++)
        {
            printf("%d ", item[i]);
        }

        printf("\n");
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();

    dequeue();
    display();

    dequeue();
    dequeue();
    dequeue();
    dequeue();

    display();

    return 0;
}