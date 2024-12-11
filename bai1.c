#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct
{
    int array[MAX];
    int top;
} Stack;

// Khởi tạo ngăn xếp
void initStack(Stack *stack)
{
    stack->top = -1;
}

// Kiểm tra ngăn xếp có rỗng không
int isEmpty(Stack *stack)
{
    return stack->top == -1;
}

// Kiểm tra ngăn xếp có đầy không
int isFull(Stack *stack)
{
    return stack->top == MAX - 1;
}

// Thêm phần tử vào ngăn xếp
void push(Stack *stack, int value)
{
    if (isFull(stack))
    {
        printf("Ngăn xếp đã đầy! Không thể thêm phần tử.\n");
    }
    else
    {
        stack->array[++(stack->top)] = value;
    }
}

// In các phần tử của ngăn xếp từ trên xuống
void printStack(Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Ngăn xếp rỗng!\n");
        return;
    }
    printf("Các phần tử trong ngăn xếp từ trên xuống:\n");
    for (int i = stack->top; i >= 0; i--)
    {
        printf("%d ", stack->array[i]);
    }
    printf("\n");
}

int main()
{
    Stack stack;
    int n, value;

    // Khởi tạo ngăn xếp
    initStack(&stack);

    // Nhập số lượng phần tử cần thêm vào ngăn xếp
    printf("Nhập số lượng phần tử cần thêm vào ngăn xếp (không quá 100): ");
    scanf("%d", &n);

    // Kiểm tra số lượng phần tử hợp lệ
    if (n < 1 || n > MAX)
    {
        printf("Số lượng phần tử không hợp lệ!\n");
        return 1;
    }

    // Nhập các phần tử vào ngăn xếp
    for (int i = 0; i < n; i++)
    {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &value);
        push(&stack, value);
    }
    printStack(&stack);

    return 0;
}
