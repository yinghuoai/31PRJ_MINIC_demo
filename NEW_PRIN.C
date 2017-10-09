#include <stdio.h>
#include <stdarg.h>


int new_printf(char* str)
{
	int n;
	va_list list;
	va_start(list,str);
	n=vprintf(str,list);
	va_end(list);
	return n;


}

void main()
{
	new_printf("%s,%d","hello world",10);




}



