#include <stdio.h>
#include <string.h>
#define MAX 100

char stack[MAX];
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

// Hàm thêm ký tự vào ngăn xếp
void push(char value)
{
    if (isFull())
    {
        printf("Ngăn xếp đã đầy!\n");
    }
    else
    {
        stack[++top] = value;
    }
}

// Hàm lấy ký tự ra từ ngăn xếp
char pop()
{
    if (isEmpty())
    {
        printf("Ngăn xếp rỗng!\n");
        return '\0';
    }
    else
    {
        return stack[top--];
    }
}

int main()
{
    char input[MAX];
    char reversed[MAX];
    int i = 0;

    printf("Nhập một chuỗi (không quá 100 ký tự): ");
    fgets(input, sizeof(input), stdin);

    // Thêm từng ký tự của chuỗi vào ngăn xếp
    while (input[i] != '\0')
    {
        push(input[i]);
        i++;
    }

    // Lấy các ký tự ra từ ngăn xếp để tạo thành chuỗi đảo ngược
    i = 0;
    while (!isEmpty())
    {
        reversed[i++] = pop();
    }
    reversed[i] = '\0'; // Kết thúc chuỗi đảo ngược

    // In ra chuỗi đảo ngược
    printf("Chuỗi đảo ngược: %s\n", reversed);

    return 0;
}
