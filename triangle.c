#include <stdio.h>

int main() {
	int h, w;
	double a;
	
	scanf("%d %d", &w, &h);
	a = (double) w*h/2;
	printf("%.2f", a);
}
