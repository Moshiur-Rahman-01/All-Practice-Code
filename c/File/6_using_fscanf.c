#include<stdio.h>
int main()
{
    FILE *file;
    char name[40],name1[40];

    file = fopen("test.txt","r");

    if(file==NULL) printf("File doesn't exist.\n");
    else {
        printf("File is opened.\n");
        //fscanf(filepointer,formatspecifier,variableName)
            fscanf(file,"%s %s",&name,&name1);
            printf("%s %s\n",name,name1);
        fclose(file);
    }
}