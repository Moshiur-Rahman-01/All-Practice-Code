#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int age,phoneNumber,n;

    file = fopen("student.txt","a");

    if(file==NULL){
        printf("File does not exist.\n");
    }
    else {
        printf("File is opened.\n");
        printf("Enter number of students : \n");
        scanf("%d",&n);
        for(int i=1; i<=n; i++){
            printf("Enter student Name : ");
            scanf("%s",name);

            printf("Enter student Age : ");
            scanf("%d",&age);

            printf("Enter student Phone number : ");
            scanf("%d",&phoneNumber);

            fprintf(file,"%s\t\t%d\t%d\n",name,age,phoneNumber);

        }
        fclose(file);
    }
}