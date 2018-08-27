#include <stdio.h>

int main() {
	int a, b, c, d;
	double h;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	h=(double)(a+b+c+d)/4;
	printf("%.2f", h);
}
