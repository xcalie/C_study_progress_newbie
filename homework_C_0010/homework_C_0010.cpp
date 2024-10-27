#include<stdio.h>

int main(void)
{
    // 输入四个数字从小到大排序
    int a[4];

    for(int i=0;i<4;i++)
    {
        scanf_s("%d",&a[i]);
    }

    for(int i=0;i<4;i++)
    {
        for(int j=i;j<4;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(int i=0;i<4;i++)
    {
        printf("%d",a[i]);
        if (i < 3) printf(",");
    }

    

}