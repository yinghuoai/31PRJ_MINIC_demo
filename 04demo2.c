#include <stdio.h>


int main()
{
	int chengshu1 = 1;
	int chengshu2 = 1;
	
	
	printf("九九乘法表：\n");
	
	
	while(chengshu1 < 10)
	{
		while(chengshu2 <= chengshu1 )
		{
			printf("%d x %d = %d    ",chengshu1,chengshu2,chengshu1*chengshu2);
			
			chengshu2++;
			
		}
		
		printf("\n");
		
		chengshu2 = 1;
		chengshu1++;
		
		
	}
	
	
	
	
	
	return 0;
}
