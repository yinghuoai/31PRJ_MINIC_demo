#include <stdio.h>
#define TRUE 1
#define FALSE 0

char daytable[2][13]={
		{0,31,28,31,30,31,30,31,31,30,31,30,31},
		{0,31,29,31,30,31,30,31,31,30,31,30,31}
	};
int year=0,mon=0,day=0;





int day_of_year(int year,int month,int day)
{
	
	int count = 0;
	int xu=1;
	
		if(FALSE == ((year%4 == 0&& year%100!=0)||(year%400 == 0)  )  )
	{
		for(xu = 1;xu< month;xu++)
		{
			count += daytable[0][xu];
			
			
		}
		count += day;
		
		
	}
	else
	{
				for(xu = 1;xu< month;xu++)
		{
			count += daytable[1][xu];
			
			
		}
		count += day;
		
		
		
		
		
	}
	
	
	return count;
}






int main()
{

	
	
	printf("example:2001/1/1\n");
	scanf("%d/%d/%d",&year,&mon,&day);
	
	
	
	printf("this day is %d year %d days",year,day_of_year(year,mon,day));
	
	
	
	
	return 0;
}