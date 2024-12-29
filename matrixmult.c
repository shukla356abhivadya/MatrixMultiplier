#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r1,r2,c1,c2,i,j,k,sum;
    printf("Enter the order of first matrix\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter the order of second matrix\n");
    scanf("%d %d",&r2,&c2);
    if(c1!=r2)
    {
        printf("Matrix multiplication not possible\n");
        exit(0);
    }
    else
    {
        int a[r1][c1],b[r2][c2],c[r1][c2];
        printf("Enter first matrix\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter second matrix\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                sum=0;
                for(k=0;k<c1;k++)
                {
                    sum=sum+a[i][k]*b[k][j];
                }
                c[i][j]=sum;
            }
        }
        printf("Resulatant matrix\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}