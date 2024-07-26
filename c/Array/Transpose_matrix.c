#include<stdio.h>
int main()
{
    int a[10][10],r,c,i,j,Transpose[10][10];
     printf("Enter rows and column for first matrix : ");
     scanf("%d%d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
        }
        for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            Transpose[j][i] = a[i][j]; 
        }
        printf("\n");
    }
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose matrix .\n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d\t",Transpose[i][j]);
        }
        printf("\n");
    }
}