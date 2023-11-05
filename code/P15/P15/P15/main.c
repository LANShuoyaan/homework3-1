#include<stdio.h>
#include<stdlib.h>
int maximum(int x,int y,int z);
int main(void) 
{
	int nb1, nb2, nb3;
	printf("enter three integers: ");
	scanf("%d %d %d",&nb1,&nb2,&nb3);
	printf("Maximum is: %d\n",maximum(nb1,nb2,nb3));
	system("pause");
	return 0;
}
int maximum(int x, int y, int z) 
{
	int max = x;
	if (y > max)
		max = y;
	if (z > max)
		max = z;
	return max;
}