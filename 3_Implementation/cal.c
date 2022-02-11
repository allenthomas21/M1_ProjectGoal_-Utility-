#include"cal.h"
#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int addition(int a, int b){
    printf("Enter the numbers: ");
    scanf("%d%d",&a,&b);
    return a+b;
}
int subtraction(int a, int b){
    printf("Enter the numbers: ");
    scanf("%d%d",&a,&b);
    return a-b;
}
int multiplication(){
    printf("Enter the numbers:  ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The multiplication of a and b is %d\n",a*b);
    return 0;
}
int division(){
    printf("Enter the numbers:  ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The division of a and b is %f\n",(float)a/(float)b);
    return 0;
}
int modulus(){
    printf("Enter the numbers:  ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The modulus of a and b is %d\n",a%b);
    return 0;
}
int factorial(){
    int n,factorial;
    printf("Enter the number : ");
    scanf("%d",&n);
    factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i; // factorial*=i;
    }
    printf("\nFactorial of %d is %d",n,factorial);
    return 0;
}
int power(){
    double b;
    double p;
    printf("Enter the base and the power: ");
    scanf("%lf%lf",&b,&p);
    double e=pow(b,p);
    printf("The power is %lf",e);
    return 0;
}
int square(){
    double b;
    printf("Enter the numbers: ");
    scanf("%lf",&b);
    double p=pow(b,2);
    printf("The square of %lf is %lf",b,p);
    return 0;
}
int cube(){
    double b;
    printf("Enter the numbers: ");
    scanf("%lf",&b);
    double p=pow(b,3);
    printf("The cube of %lf is %lf",b,p);
    return 0;
}
int squareroot(){
    double b;
    printf("Enter the numbers: ");
    scanf("%lf",&b);
    double s = sqrt(b);
    printf("The square root of %lf is %lf",b,s);
    return 0;
}
int cuberoot(){
    double b;
    printf("Enter the numbers: ");
    scanf("%lf",&b);
    double s = cbrt(b);
    printf("Cube root of %lf is %lf\n", b, s);
    return 0;
}