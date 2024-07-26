#include<stdio.h>
int main()
{
    FILE *file;
    char ch[40];
    file = fopen("test.txt","r");

    if(file==NULL) printf("File doesn't exist.\n");
    else {
        printf("File is opened.\n");
        //fgets(variable,size,filePointer);
        while(!feof(file)){
            fgets(ch,39,file);
            printf("%s\n",ch);
        }
        fclose(file);
    }
}