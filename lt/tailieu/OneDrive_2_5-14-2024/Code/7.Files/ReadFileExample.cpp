#include <stdio.h>
#include<conio.h>
#define END_LINE "\015\012"
#define ESC 27
#define CR  13 
void WriteFile(char* fname)
{
	FILE *f1;
	char ch;
	printf("\nWriting to me now:\n");
	//open file for writing
	f1=fopen(fname,"w");
	if (f1==NULL)
	{
	    printf("Error opening file");
		 
	}
	while ((ch=getche()) != ESC)
	{
	     if (ch==CR){
		    fputs(END_LINE,f1);
		    printf("\n");
	     }
	     else fputc(ch,f1);
	}
	fclose(f1);
 } 

void  ReadFile(char * fname)
{
	//open file for reading
	char ch;
	printf("\nReading from file:\n");
	FILE *f=fopen(fname,"r");
	if (f==NULL)
	{
		printf("Error opening file");
		return;
	}
	while ((ch=fgetc(f)) != EOF) 
	{
		printf("%c",ch);
	}
	fclose(f);
}
int main()
{
	WriteFile("data.txt");
	ReadFile("data.txt");
	return 0;
} 




