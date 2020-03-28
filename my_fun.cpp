#include<stdio.h>
#include<stdlib.h>
double my_fun(double,int);
double abc(int);
double power(double,int);
int main(void)
{
    printf("my_fun(0.1,2)=%f\n",my_fun(0.1,2));
    printf("my_fun(0.1,8)=%f\n",my_fun(0.1,8));
    printf("my_fun(0.2,8)=%f\n",my_fun(0.2,8));
    
    int n;
    double sum=0;
    for(n=1;n<=100;n++)
      {
       sum=my_fun(0.1,n)-my_fun(0.1,n-1);
       if(sum<0.00001)
       break;
      }      
    printf("n=%d\n",n,sum);           
    
    
    system("pause");
    return 0;
    
}
    
double my_fun(double x,int n)
{
       int i;
       double result=0;
       for(i=1;i<=n;i++)
       result=result+power(x,i)/abc(i);
       return result;
       }



double power(double x,int k)
{
       int i;
       double power=1;
       for(i=1;i<=k;i++)
       power=power*x;
       return power;
}
       
double abc(int n)
{
    int i,a=1;
    for(i=1;i<=n;i++)
    a=a*i;
    return a;
}
