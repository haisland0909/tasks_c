#include <math.h>
#include <stdio.h>

int main(void)
{
	double area;		/* 点１ */

	printf("正方形の面積から辺の長さを求めます。\n");
	printf("面積");   scanf("%lf", &area);

	printf("辺の長さは%fです。\n", sqrt(area));

	return 0;
}
