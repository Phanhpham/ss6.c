#include <stdio.h>
#define MAX 100

// Khai báo ngăn xếp và các biến liên quan
int stack[MAX];
int top = -1;

// Hàm kiểm tra ngăn xếp có rỗng không
int isEmpty() {
    return top == -1;
}

// Hàm thêm phần tử vào ngăn xếp
void push(int value) {
    if (top < MAX - 1) {
        stack[++top] = value;
        printf("Đã thêm phần tử: %d\n", value);
    } else {
        printf("Ngăn xếp đã đầy!\n");
    }
}

// Hàm in trạng thái ngăn xếp
void printStack() {
    if (isEmpty()) {
        printf("Ngăn xếp rỗng!\n");
    } else {
        printf("Trạng thái ngăn xếp hiện tại: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int n, value;

    // Nhập số lượng phần tử cần thêm vào ngăn xếp
    printf("Nhập số lượng phần tử cần thêm vào ngăn xếp (không quá 100): ");
    scanf("%d", &n);

    if (n > 100) {
        printf("Số lượng phần tử không hợp lệ.\n");
        return 1;
    }

    // Thêm các phần tử vào ngăn xếp
    for (int i = 0; i < n; i++) {
        printf("Nhập phần tử thứ %d: ", i + 1);
        scanf("%d", &value);
        push(value);
    }

    // Kiểm tra ngăn xếp có rỗng hay không và in ra kết quả
    if (isEmpty()) {
        printf("Ngăn xếp rỗng.\n");
    } else {
        printf("Ngăn xếp không rỗng.\n");
    }

    return 0;
}
