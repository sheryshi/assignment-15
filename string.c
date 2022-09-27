// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,str[20]={'b','h'};
//     for(i=0;str[i];i++);
//     printf("%d",i);
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main(int argc, char const *argv[])
// {
//     int i,str[20];
//     printf("enter a str");
//     fgets(str,20,stdin);
//     strupr(str);
//     printf("%s",str);

//     return 0;
// }


// #include<stdio.h>
// void dtob(int);
// int main(int argc, char const *argv[])
// {
//     int x;
//     printf("enterr a no.");
    

//         scanf("%d",&x);
//     dtob(x);
//     return 0;
// }

// void dtob(int x)
// {
//     if(x>0)
//     {
//         dtob(x/2);
//         printf("%d",x%2);
//     }
// }

//assignment 13

// #include<stdio.h>
// int sumnatural(int);
// int main(int argc, char const *argv[])
// {
//     int x;
//     printf("enter a number");
//     scanf("%d",&x);
    
//     printf("%d",sumnatural(x));
    
//     return 0;
// }

// int sumnatural(int n)
// {
    
//     if (n==1)
    
//        return(1);
    
//     else
//     return((n)+sumnatural(n-1));
// }

// #include<stdio.h>
// int oddnumber(int );
// int main(int argc, char const *argv[])
// {
//     int xx;
//     printf("enterr a no.");
//     scanf("%d",&xx);
//     printf("%d",oddnumber(xx));
//     return 0;
// }
// int oddnumber(int n)
// {
//     if(n==1)
//     return(1);
//     else
//     return(((2*n)-1)+oddnumber(n-1));
// }

// #include<stdio.h>
// int sumsquare(int x);
// int main(int argc, char const *argv[])
// {
//     int x;
//     printf("enter a no.");
//     scanf("%d",&x);
//     printf("%d",sumsquare(x));
//     return 0;
// }
// int sumsquare(int n)
// {
//     if(n==1)
//     return 1;
//     else
//     return((n*n)+sumsquare(n-1));
// }


// #include<stdio.h>
// int digit(int );
// int main(int argc, char const *argv[])
// {
//     int x;
//     printf("enter a no.");
//     scanf("%d",&x);
//     printf("%d",digit(x));
    
//     return 0;
// }

// int digit(int n)
// {
//     if(n==0)
//     {
//         return(0);
//     }
//     else
//     return((n%10)+digit(n/10));
// }

// #include<stdio.h>
// int fact(int );
// int main(int argc, char const *argv[])
// {
//     int x;
//     printf("enter a no.");
//     scanf("%d",&x);
//     printf("%d",fact(x));
    
//     return 0;
// }
// int fact(int n)
// {
//     if(n==0||n==1)
//     {
//         return(1);
//     }
//     else
//     return(n*fact(n-1));
// }

// #include<stdio.h>
// int hcf(int,int );
// int main(int argc, char const *argv[])
// {
//     printf("enter two no.");
//     scanf("%d%d",&x,&y);
//     printf("%d",hcf(x,y));
//     return 0;
// }
// int hcf(int x,int y)
// {
//     if(x%y==0)
//     return (y);
//     else
//     return(hcf(x%y,y));
// }



#include<stdio.h>
int fib(int );
int main(int argc, char const *argv[])
{
    int i,x;
    printf("enter a no.");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    printf("%d",fib(i));
    return 0;
}

int fib(int n)
{
    if(n==0||n==1)
    {
        return(1);
    }
    else
    return(fib(n-1)+fib(n-2));
}

// #include<stdio.h>
// void counts(int );
// int main(int argc, char const *argv[])
// {
//     int x;
//     printf("enter a no.");
//     scanf("%d",&x);
//     counts(x);
//     return 0;
// }

// void counts(int x)
// {
//     int i,count=0;
//     if(x>0)
//     {
//         for(i=1;i<=x;i++)
//         {
//         x=x/10;
        
//         count++;
//         }
//     }
//     printf("%d",count);
// }