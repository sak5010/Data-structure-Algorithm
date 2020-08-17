#include <stdio.h>
#define SIZE 10000
#define INF 99999999

int stack[SIZE];
int top = -1;

void push(int data) {
	if (top == SIZE - 1) {
		printf("Stack overflow!\n"); 
		return;
	}
	stack[++top] = data;
}

int pop(void) {
	if (top == -1) {
		printf("Stack underflow!\n");
		return -INF;
	}
	return stack[top--];
}

void show(void) {
	printf("--- ������ �ֻ�� ---\n");
	for (int i = top; i >= 0; i--) {
		printf("%d\n", stack[i]);	
	}
	printf("--- ������ ���ϴ� ---\n");	
}

int main(void) {
	push(7);
	push(5);
	push(4);
	pop();
	push(6);
	pop();
	show();
	return 0;
}
