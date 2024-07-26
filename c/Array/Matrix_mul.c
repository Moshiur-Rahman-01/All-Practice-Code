#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],r1,r2,c1,c2,i,j,k,sum=0;
    printf("Enter rows and column for first matrix : ");
    scanf("%d%d",&r1,&c1);
    printf("Enter rows and column for second matrix : ");
    scanf("%d%d",&r2,&c2);
    while(c1!=r2){
        printf("Error !! column of first matrix not equal to row of second matrix : ");
        printf("Enter rows and column for first matrix : ");
        scanf("%d%d",&r1,&c1);
        printf("Enter rows and column for second matrix : ");
        scanf("%d%d",&r2,&c2);
    }
    //Scanning A matrix....
    printf("Enter element for A matrix.\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    
    //Scanning B matrix....
    printf("\nEnter element for B matrix.\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    //Multiplying matrix..
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            for(k=0;k<c1;k++){
                sum = sum + a[i][k] * b[k][j];
                
            }
            c[i][j] = sum;
                sum = 0;
        }
    }

    printf("A = \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("B = \n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("A * B = \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}