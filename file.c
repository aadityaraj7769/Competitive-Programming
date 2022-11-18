#include <stdio.h>
#include <stdlib.h>
  
int main()
{
int n1, n2;
   // Open two files to be merged
   FILE *fp1 = fopen("file1.txt", "rw");
   FILE *fp2 = fopen("file2.txt", "rw");
  
   // Open file to store the result
   FILE *fp3 = fopen("file3.txt", "w");
   char c;
  fscanf(fp1 , "%d" , &n1);
    fscanf(fp2 , "%d" , &n2);
   if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
   {
         puts("Could not open files");
         exit(0);
   }
  
   // Copy contents of first file to file3.txt
   while ((c = fgetc(fp1)) != EOF)
      fputc(c, fp3);
  
   // Copy contents of second file to file3.txt
   while ((c = fgetc(fp2)) != EOF)
      fputc(c, fp3);
  
   printf("Merged file1.txt and file2.txt into file3.txt");
  
   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   return 0;
}
