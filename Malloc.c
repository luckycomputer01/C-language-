#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
	int i,n;
	printf("How many element you want to enter: ");
	scanf("%d",&n);
	ptr=(int *)malloc(n * sizeof(int));
	for(i=0;i<n;i++)
	{
	  scanf("%d",&ptr[i]);
  	}
 	printf("Your array element\n");
	for(i=0;i<n;i++)
	{
	  printf("%d\n",ptr[i]);
	}
	free(ptr);

    return 0;
}
