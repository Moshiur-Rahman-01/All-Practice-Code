#include<stdio.h>
int main()
{
    int a[3][4],b[3][4],c[3][4],i,j;
    //Scanning A matrix....
    printf("Enter element for A matrix.\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("A = \n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    //Scanning B matrix....
    printf("\nEnter element for B matrix.\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("B = \n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    // sum A+B matrix....
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            c[i][j]=a[i][j] + b[i][j];
        }
    }
    printf("\nA + B = \n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}