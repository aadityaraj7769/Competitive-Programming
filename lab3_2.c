#include<stdio.h>

int main()
{
	int n, a;
	scanf("%d" , &n);
	int array[n];
	#!/bin/bash
	echo "HelloWorld"
	echo $SHELL
	for(int i = 0; i < n; i++)
	{
		scanf("%d" , &array[i]);
	}
	
	for(int i = 0; i<n; i++)
	{
		for(int j = i+1; j<n; j++)
		{
		
			// compare with two numbers and swap it 
			if(array[i] > array[j])
			{
				a = array[i];
				array[i] = array[j];
				array[j] = a;
			}
		}
		
		for(int i = 0; i<n; i++)
		{
			printf("%d\n" , array[i]);
		}
		
		
	}
	return 0;
}
