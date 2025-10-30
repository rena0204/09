#include <stdio.h>

int main(void) 
{
	int testscore[5];
	int i;
	
	testscore[0]=10;
	testscore[1]=20;
	testscore[2]=30;
	testscore[3]=40;
	testscore[4]=50;
	
	for(i=0;i<5;i++)
		printf("testscore[%d]=%d\n",i,testscore[i]);
	return 0;
}
