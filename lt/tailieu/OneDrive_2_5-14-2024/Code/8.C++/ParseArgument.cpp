#include <iostream>
#include <string.h>
int main(int argc, char *argv[])
{

	for(int i = 1; i < argc; i++){
		if(!strcmp(argv[i], "-h") || !strcmp(argv[i], "--help") )
		{
		
			printf("Usage: App <options>\nOptions are:\n");
			printf("Option list goes here");
			exit(0);
		}else if(!strcmp(argv[i], "-c") || !strcmp(argv[i], "--custom")){
			printf("argument accepted");
		}else
		{
			if(i == argc-1)
			{
				break;
			}
		//	MessageBox(NULL, TEXT("ERROR: Invalid Command Line Option Found: \"%s\".\n", argv[i], TEXT("Error"), MB_ICONERROR | MB_OK);
		}
	}

//	MessageBox(NULL, TEXT("ERROR: No Command Line Option Found. Type in --hep or -h"), TEXT("Error"), MB_ICONERROR | MB_OK);
}
