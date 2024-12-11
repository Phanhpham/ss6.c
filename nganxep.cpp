#include <stdio.h>
#include <stdlib.h>
#define MAX 5
// cau truc ve ngan xep
typedef struct
{
    int array[MAX];
    int top;
} Stack;
// khoi tao stack rong
void inital(Stack *stack)
{
    stack->top = -1;
}
// check xem stack co rong hay ko
int isEmpty(Stack *stack)
{
    if (stack->top == -1)
    {
        return 1;
    }
    return 0;
}
// khiem tra ngan xep co day hay ko
int isFull(Stack *stack)
{
    if (stack->top > MAX - 1)
    {
        return 1;
    }
    return 0;
}
// them phan tu vao ngan xep
void push(Stack *stack, int value)
{
    if (isFull(stack) == 1)
    {
        printf("xinloi ngan xep da day ");
        return;
    }
    stack->array[++(stack->top)] = value;
}
// lay phan tu dau ma ko xoa 

// xoa khoi stack
void pop(Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("ngan xep rong");
        return;
    }
    stack->array[--(stack->top)];
}

void printStack(Stack *stack)
{
    for (int i = stack->top; i >= 0; i--)
    {
        printf("%d \n", stack->array[i]);
    }
}
int main()
{
    int value;
    Stack stack;
    inital(&stack);
    do
    {
        printf("\n=============MENU===========\n");
        printf(".1 them phan tu vao ngan xep \n");
        printf(".2 In ra ngan xep ");
        printf(".0 Thoat");
        printf("moi ban chon tu 0-2\n");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            exit(0);
            break;
        case 1:
            printf("nhap vao gia tri can them \n");

            scanf("%d", &value);
            push(&stack, value);
            break;
        case 2:
            printStack(&stack);
            break;
        default:
            printf("vui long chon lai");
        }
    } while (1 == 1);
    return 0;
}