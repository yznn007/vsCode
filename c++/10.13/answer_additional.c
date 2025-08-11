#include<stdio.h>
int main()
{
    const int I=1,V=5,X=10,L=50,C=100,D=500,M=1000;
    char a[10000];
    int add=0,b[10000];
    scanf("%s",a);
    for(int i=0;i<10000;i++)
    {
        if(a[i]==I)b[i]=1;
        else if(a[i]==V)b[i]=5;
        else if(a[i]==X)b[i]=10;
        else if(a[i]==L)b[i]=50;
        else if(a[i]==C)b[i]=100;
        else if(a[i]==D)b[i]=500;
        else if(a[i]==M)b[i]=1000;
        if(a[i]=='\0')
        {
            break;
        }
    }
    for(int i=0;i<10000;i++)
    {
        if(a[i]<a[i+1])
        {
            b[i]=b[i+1]-b[i];
            b[i+1]=0;
        }
        add+=b[i];
        if(a[i]=='\0')
        {
            break;
        }
    }
    printf("%d",add);
    return 0;
}
