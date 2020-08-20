#include <stdio.h>
#define SIZE 10000
#define INF 99999999

int queue[SIZE];
int front = 0;
int rear = 0;

void push(int data) {
	if (rear >= SIZE) {
		printf("queue overflow!\n");
		return;
	}
	queue[rear++] = data;
}

int pop(void) {
	if (front == rear) {
		printf("queue underflow!\n");
		return -INF;
	}
	return queue[front++];
}

void show(void) {
	printf("--- 큐의 앞 ---\n");
	for (int i = front; i < rear; i++) {
		printf("%d\n", queue[i]);
	}
	printf("--- 큐의 뒤 ---\n"); 
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
