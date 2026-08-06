#include <stdio.h>

void bucketSort(float a[], int n)
{
    float bucket[10][10];
    int count[10]={0};

    for(int i=0;i<n;i++)
    {
        int index=a[i]*10;
        bucket[index][count[index]++]=a[i];
    }

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<count[i];j++)
        {
            for(int k=j+1;k<count[i];k++)
            {
                if(bucket[i][j]>bucket[i][k])
                {
                    float temp=bucket[i][j];
                    bucket[i][j]=bucket[i][k];
                    bucket[i][k]=temp;
                }
            }
        }
    }

    int k=0;

    for(int i=0;i<10;i++)
        for(int j=0;j<count[i];j++)
            a[k++]=bucket[i][j];
}

int main() {
    float a[]={0.42,0.32,0.23,0.52};
    int n=4;

    bucketSort(a,n);

    for(int i=0;i<n;i++)
        printf("%.2f ",a[i]);

    return 0;
}