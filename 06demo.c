int fun1(int);
int fun2(int);

main()
{
	int c = 0;
	for( c = 1 ; c <= 9 ; c++)
	{
			fun1(c);
			printf("%d",c);

	}
	printf("\n");
	
	fun2(c);
	
}

int fun1(int x)
{
	return x+0x30;
	
}

int fun2(int x)
{
	x=fun1(x);
	printf("%d",x);
	return 0;
}