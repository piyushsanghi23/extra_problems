#include <stdio.h>
#include <stdlib.h>
 
int main(int argc ,char* argv[])
{
   char ch;
   FILE *fp;
   int n=0,c=0;
 
  scanf("%d",&n);
 
   fp = fopen(argv[1],"r"); // read mode
 
   if( fp == NULL )
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }
 
   
 
   while( ( ch = fgetc(fp) ) != EOF )
   {
   		if(ch == '\n')
   			c++;
   }
   //printf("%d",c);
   fclose(fp);
   fp = fopen(argv[1],"r"); // read mode
   while( ( ch = fgetc(fp) ) != EOF  )
   {
   	  if(c<=n)
      	printf("%c",ch);
      if(ch =='\n')
      		c--;
      
      	
 	}
 	//printf("%d",c);
   fclose(fp);
   return 0;
}
