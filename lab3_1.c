#include<stdio.h>

void Tower(int n, int source, int target, int inter)
{
	if(n == 1)
	{
		printf("Move Disc %d from pole %d to %d\n",n,  source , target);
	}
	
	else
	{
		Tower(n-1 , source , inter , target);
		printf("Move Disc %d from pole %d to %d\n" , n , source , target);
		Tower(n-1 ,inter ,target ,source );
		return;
	}
}

int main()
{
	int n, Disc;
	
	scanf("%d" , &n);
	
	Tower(n , 0 , 2, 1);
	return 0;
}
