#include<stdio.h>
int main()
{
    int a[10][10],r,c,i,j,Upper_sum=0,Lower_sum=0;
     printf("Enter rows and column for matrix : ");
     scanf("%d%d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
        printf("\nMatrix = \n");
        for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    } 
        for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i<j)Upper_sum = Upper_sum + a[i][j];
            if(i>j)Lower_sum = Lower_sum + a[i][j];
        }
    }
    printf("Sum of Upper Triangle elements = %d\n",Upper_sum);
    printf("Sum of Lower Triangle elements = %d\n",Lower_sum);
    return 0;
}