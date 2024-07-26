/*
To write something in a file
fputc()
fputw()
fputs()
fprintf()
fwrite()
*/
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char name[20]="Moshiur Rahman";
    int length = strlen(name);
    file = fopen("test.txt","w");//w dile nam bodlale abr new nam dekhabe 
    // r dile read korbe
    // a dile age je nam silo tar shathe new nam add hobe..

    if(file==NULL) printf("File doesn't exist.");
    else {
        printf("File is opened.\n");
        for(int i=0; i<length; i++){
            fputc(name[i],file);
        }
        printf("File is written successfully.\n");
        fclose(file);
    }
}