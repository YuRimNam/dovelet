#include <stdio.h>
int g=0, d=0, h=0, m=0, s=0;

int min() {
	m=g/60;
	g=g%60;
}

int hour() {
	h=g/3600;
	g=g%3600;
	min();
}

int day() {
	d=g/86400;
	g=g%86400;
	hour();
}

int main() {
	scanf("%d", &g);
	if (g>=86400)
		day();	
	else if (g>=3600)
		hour();
	else if (g>=60)
		min();
	
	s=g;
		
	printf("%d %d %d %d",  d, h, m, s);
}
