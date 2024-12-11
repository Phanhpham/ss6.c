#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;
// kiem tra rong k
int isEmpty()
{
    return top == -1;
}

// Hàm thêm phần tử
void push(int value)
{
    if (top < MAX - 1)
    {
        stack[++top] = value;
        printf("Đã thêm phần tử: %d\n", value);
    }
    else
    {
        printf("Ngăn xếp đã đầy!\n");
    }
}

// Hàm xem phần tử trên cùng mà không xóa
int peek()
{
    if (isEmpty())
    {
        printf("Ngăn xếp rỗng, không có phần tử trên cùng.\n");
        return -1;
    }
    else
    {
        return stack[top];
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

    // Thực hiện thao tác peek và in giá trị phần tử trên cùng
    int topValue = peek();
    if (topValue != -1)
    {
        printf("Phần tử trên cùng của ngăn xếp là: %d\n", topValue);
    }

    return 0;
}
