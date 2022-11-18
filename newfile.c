#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fp;
	char cha[55];
	int no , i;
	//strcpy(cha , "Adityaraj isaniitian");
	fp = fopen("newfile.txt" , "r");
	fseek(fp , 14 , SEEK_CUR);
	fgets(cha , 15 , fp);
	printf("Text is :%s" , cha);
	no = ftell(fp);
	printf("%d" ,no);
	/*if((feof(fp))!=0)
	{
		printf("End of file\n");
	}
	if((ferror(fp) == 0))
	{
		printf("Still reading:");
	}
	*/
	
	
	
	
	
	
	//for(int i =0; i<=20; i++)
	//{
		//putw(i,fp);
	//}
	//fputs(cha, fp);
	fclose(fp);
	
	//fp = fopen("newfile.txt" , "r");
	//fgets(cha , 18 , fp);
	//printf("Text is: %s" , cha);
	//fp =fopen("number.txt" , "r");
	//while(((no = getw(fp))!=EOF))
	//{
		//printf("%d" , no);
	//}
	//fclose(fp); 

}
