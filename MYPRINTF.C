#include <stdio.h>
#include <stdlib.h>

void new_printf(char* fmt,...)
{
	char* point1=NULL;
	char c;
	point1 = (char *)&fmt;

	point1 +=  sizeof(fmt);
	int a=0;

	do
	{
		c = *fmt;
		if(c!='%')
		{
			putchar(c);
		}
		else
		{
			switch(*++fmt)
			{
				case 'd':


			}




		}

	}while(*fmt != '\0');

	point1=NULL;
	return;


}



main()
{
	int i=12;
	int j=34;

	new_printf("i=%d,j=%d",i,j)


}