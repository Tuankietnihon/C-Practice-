#include <stdio.h>
#include <math.h>


int add(int a,int b);
int num(int sum);
void coudownt(int k);
int giaithua(int m);
int main(void)
{
    int (*ptr)(int,int)=add;                //con tro ham

    int result=ptr(5,3);
    printf("RESULT= %d\n",result);
    int tong=num(10);
    printf("%d\n",tong);
    int (*mmt)(int)=giaithua;

    printf("Giai thua bang=%d\n",mmt(5));   //cung la con tro ham

    coudownt(10);

    printf("x=%.2f\n",sqrt(16));
    printf("%.2f\n",ceil(9.1));
    printf("%.2f\n",floor(6.9));
    printf("%.2f",pow(9,2));
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
int num(int sum)                                //he de quy
                                                //hệ đệ quy là 1 phương thức chay mà nó cho phép lặp lại chính nó liên tục đến 1 thời điểm nhất định

{
    if(sum>0)
    {
        return sum + num(sum-1);
    }
    else
    {
        return 0;
    }
}
void coudownt(int k)                            //he de quy
{
    if(k>0)
    {
        printf("%d\n",k);
        coudownt(k-1);
    }
}
int giaithua(int m)
{
    if(m>1)
    {
        return m*giaithua(m-1);
    }
    else
    {
        return 1;
    }
}
