#include <stdio.h>

int main() {
	int m, b, o, s;
	scanf("%d", &m);
	m=1000-m;
	b=m/100;
	m=m%100;
	o=m/50;
	m=m%50;
	s=m/10;
	printf("%d %d %d", b, o, s);
} 
