#include <stdio.h>
#include <string.h>
#include <stdlib.h>
FILE *datafile;
int main(){
    int count1, count2, leng, sentences ;
    char filename[50], word[120],word1[120] ,sentence[120];//word1 is new string
    printf("Enter a word :");
    gets(word1);
    printf("Enter the filename:");
    gets(filename);
    datafile = fopen(filename, "r");
    if(datafile == NULL) {
        printf("Error , Can not open %s", filename);
        exit(249);
    }

    leng = 0;
    count2 = 0;
    sentences = 0;

    while (fscanf(datafile, "%s", word) == 1) 
	{     //this one works
		printf("%s ", word);
        ++leng;

        if (strcmp(word,word1)== 0)//strcmp returns 0 when it matches word to word1
            count2++;

        if ( strchr(word,'.') != NULL )//strchr returns a pointer when it matches word to '.' null otherwise
        {
		    ++sentences;
            printf("\n");
        }
    }

    printf("There are a total of %d words\n", leng);
    printf("The word '%s' appears %d times\n", word1, count2);
    printf("There are %d sentences", sentences);

    return 0;
}
