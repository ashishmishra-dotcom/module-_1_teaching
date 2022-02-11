#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int addition();
int subtraction();
int multiplication();
int division();
int modulus();
int factorial();
int power();
int square();
int squareroot();
int absolute();
int naturallogarithm();
int exponentiallogarithm();
int decimaltobinary();
int binarytodecimal();
int sine();
int cosine();
int tann();
int cosec();
int sec();
int cot();
int main()
{
int option;
printf("Choose your option for the following:\n");
printf("Enter 1 for Addition\n");
printf("Enter 2 for Subtraction\n");
printf("Enter 3 for Multiplication\n");
printf("Enter 4 for Division\n");
printf("Enter 5 for Modulus\n");
printf("Enter 6 for Factorial\n");
printf("Enter 7 for Power\n");
printf("Enter 8 for Square\n");
printf("Enter 9 for Square Root\n");
printf("Enter 10 for Absolute\n");
printf("Enter 11 for Natural Logarithm\n");
printf("Enter 12 for Exponential Logarithm\n");
printf("Enter 13 for Sin\n");
printf("Enter 14 for Cosine\n");
printf("Enter 15 for Tangent\n");
printf("Enter 16 for Cosec\n");
printf("Enter 17 for Sec\n");
printf("Enter 18 for Cot \n");
printf("Enter 19 for Decimal Binary \n");
printf("Enter 20 for Binary Decimal\n");
printf("enter your option\n");
scanf("%d",&option);
switch(option)
{
case 1: addition();
break;
case 2: subtraction();
break;
case 3: multiplication();
break;
case 4: division();
break;
case 5: modulus();
break;
case 6: factorial();
break;
case 7: power();
break;
case 8: square();
break;
case 9: squareroot();
break;
case 10: absolute();
break;
case 11: naturallogarithm();
break;
case 12: exponentiallogarithm();
break;
case 13: sine();
break;
case 14: cosine();
break;
case 15: tann();
break;
case 16: cosec();
break;
case 17: sec();
break;
case 18: cot();
break;
case 19: decimaltobinary();
break;
case 20: binarytodecimal();
break;
default :
printf("Enter the valid option.Please Try Again");
break;
}
}
int addition()
{
int a,b,c;
printf("performing addition operation\n");
printf("enter a and b\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("addition = %d\n",c);
}
int subtraction()
{
int a,b,c;
printf("performing subtraction operation\n");
printf("enter a and b\n");
scanf("%d%d",&a,&b);
c=a-b;
printf("subtraction = %d\n",c);
}
int multiplication()
{
int a,b,c;
printf("performing multiplication operation\n");
printf("enter a and b\n");
scanf("%d%d",&a,&b);
c=a*b;
printf("multiplication = %d\n",c);
}
int division()
{
int a,b,c;
printf("performing division operation\n");
printf("enter a and b\n");
scanf("%d%d",&a,&b);
c=a/b;
printf("division %d\n",c);
}
int modulus()
{
int a,b,c;
printf("performing modulus operation\n");
printf("enter a and b\n");
scanf("%d%d",&a,&b);
c=a%b;
printf("modulus %d\n",c);
}
int factorial()
{
int n,fact=1,i;
printf("performing factorial operation\n");
printf("enter n\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial %d\n",fact);
}
int power()
{
int base,exponential,result;
printf("performing power operation\n");
printf("enter base and exponential values\n");
scanf("%d%d",&base,&exponential);
result=pow(base,exponential);
printf("result = %d\n",result);
}
int square()
{
int a,result;
printf("perform square operation\n");
printf("enter a\n");
scanf("%d",&a);
result=a*a;
printf("result = %d\n",result);
}
int squareroot()
{
int a,result;
printf("performing squareroot operation\n");
printf("enter a\n");
scanf("%d",&a);
result=sqrt(a);
printf("result = %d\n",result);
}
int absolute()
{
int a,result;
printf("perform absolute operation\n");
printf("enter a\n");
scanf("%d",&a);
result=abs(a);
printf("result %d\n",result);
}
int naturallogarithm()
{
double a,result;
printf("performing natural logarithm operation\n");
printf("enter a\n");
scanf("%lf",&a);
result=log10(a);
printf("result = %lf",result);
}
int exponentiallogarithm()
{
double a,result;
printf("performing exponential logarithm operation\n");
printf("enter a\n");
scanf("%lf",&a);
result=log(a);
printf("result = %lf",result);
}
int sine()
{
float x,result;
printf("perform sine operation\n");
printf("enter x\n");
scanf("%f",&x); //30
result=sin(x*3.14/180);
printf("%.2f",result);
}
int cosine()
{
float x,result;
printf("perform cosine operation\n");
printf("enter x\n");
scanf("%f",&x);
result=cos(x*3.14/180);
printf("%.2f",result);
}
int tann()
{
float x,result;
printf("perform tann operation\n");
printf("enter x\n");
scanf("%f",&x);
result=tan(x*3.14/180);
printf("%.2f",result);
}
int cosec()
{
float x,result;
printf("perform cosec operation\n");
printf("enter x\n");
scanf("%f",&x);
result=(1/sin(x*3.14/180));
printf("%.2f",result);
}
int sec()
{
float x,result;
printf("perform sec operation\n");
printf("enter x\n");
scanf("%f",&x); //30
result=(1/cos(x*3.14/180));
printf("%.2f",result);
}
int cot()
{
float x,result;
printf("perform cot operation\n");
printf("enter x\n");
scanf("%f",&x); //30
result=(1/tan(x*3.14/180));
printf("%.2f",result);
}
int decimaltobinary()
{
int b[100],n,i=0,j;
printf("performing decimal to binary operation\n");
printf("enter n\n");
scanf("%d",&n);
while(n>0)
{
b[i]=n%2;
n=n/2;
i++;
}
for(j=i-1;j>=0;j--)
{
printf("%d",b[j]);
}
}
int binarytodecimal()
{
int n,i,r,sum=0;
printf("performing binary to decimal operation\n");
printf("enter n\n");
scanf("%d",&n);
i=0;
while(n>0)
{
r=n%10;
sum=sum+r*pow(2,i);
n=n/10;
i++;
}
printf("%d",sum);
}