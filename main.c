#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(int argc, char *argv[])
{
	int testscore[SIZE];
	int i;
	
	printf("%d명 점수를 입력하세요\n", SIZE);
	
	for(i=0;i<SIZE;i++)
		scanf("%d",&testscore[i]);
		
	for(i=0;i<SIZE;i++)
		printf("grade[%d]=%d\n",i, testscore[i]);
}


