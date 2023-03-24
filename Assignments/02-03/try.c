#include<stdio.h>
#define MAX 30
extern int global_g;
int f(int, int);
int main() {
	int i, j, k;
	scanf("%d %d", &i, &j);
	k = f(i, j) + MAX;
	printf("%d\n", k);
	printf("%d\n", global_g);
	return 0;
}
