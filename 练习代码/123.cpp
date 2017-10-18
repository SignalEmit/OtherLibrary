#include<stdio.h>
main()
{
	int a[6][6],i,j;
	printf("shu ru ju zhen yuan su :");
	for(i=0;i<6;i++)
		for(j=0;j<6;j++)
			scanf("%d",&a[i][j]);
    printf("shu chu ju zhen :");
    for(i=0;i<6;i++)
		{
		for(j=0;j<6;j++)
			printf("%d  ",a[i][j]);
		printf("\n");}
	return 0;
}
