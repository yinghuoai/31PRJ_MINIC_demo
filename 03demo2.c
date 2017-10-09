#include <stdio.h>

int main()
{
	short results[] = {55,80,71,72,87,90,95,100,96,87,
			   76,100,50,83,80,65,70,69,80,88,
			   91,98,96,76,89

				};


	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;
	int count5 = 0;
	int xu = 0;


	for( xu = 0 ; xu < 25 ; xu++ )
	{
		
		switch( results[xu] /10 )
		{
			case 10:
			case 9:
					count1++;
					break;
			case 8:
					count2++;
					break;
			case 7:
					count3++;
					break;
			case 6:
					count4++;
					break;
			default:
					count5++;
					break;
			
			

			
		}
		


	}

	printf("A : %d\n",count1);
	printf("B : %d\n",count2);
	printf("C : %d\n",count3);
	printf("D : %d\n",count4);
	printf("E : %d\n",count5);
	

	return 0;
}