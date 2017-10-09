#define Buffer ((char *   )*(int far *   )0x200   )

main()
{
	Buffer=(char  *)malloc(20);
	Buffer[10]=0;

	printf("Buffer = %x\n",Buffer);
	printf("&Buffer = %x\n",&Buffer);
	printf("*Buffer = %x\n",*Buffer);
	printf("Buffer[0] = %x\n",Buffer[0]);


	free(Buffer);

}


