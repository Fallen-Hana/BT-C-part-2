#include <stdio.h>
int main() {
	int i,j;
	int a [20][20];
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			printf("Nhap so vi tri hang %d cot %d: ", (i + 1), (j + 1));
			scanf("%d", &a[i][j]);	
		}
	}
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	
	}
	return 0;
}