#include <stdio.h>


int main()
{
	int chengshu1 = 0;
	int chengshu2 = 0;
	
	
	printf("九九乘法表：\n");
	
	
	for( chengshu1 = 1 ; chengshu1 < 10 ; chengshu1++)
	{
		for(chengshu2 = 1 ;chengshu2 <= chengshu1 ; chengshu2++)
		{
			printf("%d x %d = %d    ",chengshu1,chengshu2,chengshu1*chengshu2);
			
		}
		printf("\n");
		
		
		
	}
	
	
	
	
	
	return 0;
}
