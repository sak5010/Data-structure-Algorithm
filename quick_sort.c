#include <stdio.h>
#include <limits.h>
#define SIZE 1000

int a[SIZE];

int swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;	
}

void quickSort(int start, int end) {
	if (start >= end) return;
	int key = start, i = start + 1, j = end;
	while (i <= j) { // 엇갈릴 때까지 반복합니다. 
		while (i <= end && a[key] >= a[i]) i++;
		while (j > start && a[key] <= a[j]) j--;
		if (i > j) {
			swap(&a[key], &a[j]);	
		}
		else {
			swap(&a[i], &a[j]);	
		}
	}
	quickSort(start, j - 1);
	quickSort(j + 1, end);
}

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	quickSort(0, n - 1);
	for (int i = 0; i < n; i++) printf("%d ", a[i]);
	return 0;
}
