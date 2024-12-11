#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

// Hàm kiểm tra ngăn xếp có rỗng không
int isEmpty()
{
    return top == -1;
}

// Hàm kiểm tra ngăn xếp có đầy không
int isFull()
{
    return top == MAX - 1;
}

// Hàm thêm phần tử vào ngăn xếp
void push(int value)
{
    if (isFull())
    {
        printf("Ngăn xếp đã đầy!\n");
    }
    else
    {
        stack[++top] = value;
        printf("Đã thêm phần tử: %d\n", value);
    }
}

// Hàm xóa phần tử trên cùng của ngăn xếp
int pop()
{
    if (isEmpty())
    {
        printf("Ngăn xếp rỗng!\n");
        return -1;
    }
    else
    {
        int poppedValue = stack[top--];
        return poppedValue;
    }
}

// Hàm in
void printStack()
{
    if (isEmpty())
    {
        printf("Ngăn xếp rỗng!\n");
    }
    else
    {
        printf("Trạng thái ngăn xếp hiện tại: ");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main()
{
    int n, value;

    printf("Nhập số lượng phần tử cần thêm vào ngăn xếp (không quá 100): ");
    scanf("%d", &n);

    if (n > 100)
    {
        printf("Số lượng phần tử không hợp lệ.\n");
        return 1;
    }

    // Thêm các phần tử vào ngăn xếp
    for (int i = 0; i < n; i++)
    {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &value);
        push(value);
    }

    // Thực hiện thao tác pop và in kết quả
    int poppedValue = pop();
    if (poppedValue != -1)
    {
        printf("Phần tử bị xóa: %d\n", poppedValue);
        printStack();
    }

    return 0;
}
