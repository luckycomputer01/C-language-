#include <stdio.h>
int main()
{
    void swap(int *,int *);
	int a=5,b=10;
	printf("Before function call a=%d\n",a);
	printf("Before function call b=%d\n",b);
	swap(&a,&b);
	printf("After function call a=%d\n",a);
	printf("After function call =%d\n",b);

    return 0;
}
void swap(int *x,int *y)
{
	int z;
	z=*x;*x=*y;*y=z;
	printf("In function call a=%d\n",*x);
	printf("In function call b=%d\n",*y);
}