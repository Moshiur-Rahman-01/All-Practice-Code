#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter n = ");
    scanf("%d",&n);
    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            printf("%d",col);
        }
        printf("\n");
    }
    printf("\n");
    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            printf("%d",row);
        }
        printf("\n");
    }
    printf("\n");
    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            printf("%d",col%2);
        }
        printf("\n");
    }
    printf("\n");
    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            printf("%d",row%2);
        }
        printf("\n");
    }
    printf("\n");
    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            printf("%c",col+64);
        }
        printf("\n");
    }
    printf("\n");
    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            printf("%c",row+64);
        }
        printf("\n");
    }
    printf("\n");
    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            printf("%c",col+96);
        }
        printf("\n");
    }
    printf("\n");
    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            printf("%c",row+96);
        }
        printf("\n");
    }
    printf("\n");
    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            printf("*");
        }
        printf("\n");
    }
}