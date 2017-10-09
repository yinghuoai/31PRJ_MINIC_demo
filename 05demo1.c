int count = 0;

xunhuan:
	if(count < 10)
	{
		printf("%d",count);
		count++;
		
		goto xunhuan;
	}