#include <stdio.h>


int main()
{
	
	typedef struct
	{
		int yuwen;
		int shuxue;
		int waiyu;
		
		
		
	}studentScore;
	
	
	studentScore tom,jack,mary;
	
	tom.yuwen = 109;
	tom.shuxue = 120;
	tom.waiyu = 130;
	
	jack.yuwen = 95;
	jack.shuxue = 140;
	jack.waiyu = 99;
	
	
	mary.yuwen = 130;
	mary.shuxue = 100;
	mary.waiyu = 140;
	
	
	

	
	printf("学生成绩：  \n");
	
	printf("Tom :  语文 %d ,数学 %d ,外语 %d\n",tom.yuwen,tom.shuxue,tom.waiyu);
	printf("Jack :  语文 %d ,数学 %d ,外语 %d\n",jack.yuwen,jack.shuxue,jack.waiyu);
	printf("Mary :  语文 %d ,数学 %d ,外语 %d\n",mary.yuwen,mary.shuxue,mary.waiyu);
	
	
	
}
