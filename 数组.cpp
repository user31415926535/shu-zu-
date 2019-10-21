#include<stdio.h>
int main()
{
	int i, max, a[10];
	printf("给我10个数\n");
	for (i = 0; i < 10; i++)
	
		scanf("%d", &a[i]);
	
		max = a[0];
	
	for (i = 1; i < 10; i++);
	 if (a[i] > max)
		max = a[i]; 
	printf("最大的数是：%d",max); 
	
	return 0;
}
