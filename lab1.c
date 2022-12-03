#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void readString(){
    FILE* myFile = fopen("test1.txt","w");
    if (myFile == NULL){
        fprintf(stderr, "does not exist");
    }

    char line[100];
    fgets(line,99, myFile);
    printf("%s",line);

    fclose(myFile);
}

void mysteryExplode(char* str)
{
    char x = 0;
    int length = 0, i=0;
    length = strlen(str);

    if (length % 2 ==0){

        for (i=0; i <length; i +=2){
            x=str[i];
            str[i]=str[i+1];
            str[i+1]=x;
        }
        printf("%s\n", str);
    }
}
