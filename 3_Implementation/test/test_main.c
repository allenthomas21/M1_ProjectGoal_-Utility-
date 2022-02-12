#include<stdio.h>
#include<stdlib.h>
#include<math.h>

extern void test_main();

int addition();
int subtraction();
int multiplication();
int division();
int modulus();
int factorial();
int power();
int square();
int cube();
int squareroot();
int cuberoot();


int main(){
    #if 0
    printf("\t\tWelcome to my calculator!!\n\n");
    int option,n1,n2,answer;
    printf("\n******* Press 0 to quit the program ********\n");
    printf("Enter 1 for Addition \n");
    printf("Enter 2 for Subtraction \n");
    printf("Enter 3 for Multiplication \n");
    printf("Enter 4 for Division \n");
    printf("Enter 5 for Modulus\n");
    printf("Enter 6 for Power \n");
    printf("Enter 7 for Factorial \n");
    printf("Enter 8  for square \n");
    printf("Enter 9  for cube \n");
    printf("Enter 10 for squareroot\n");
    printf("Enter 11 for cuberoot\n\n");
    
    while(1){    
    printf("\n\nEnter the function you want to do: ");
    
    scanf("%d",&option);
            
    switch(option)
    {
                case 1:
                     answer=addition(n1,n2);
                    printf("SUM = %d\n",answer);
                    break;
                case 2:
                    answer=subtraction(n1,n2);
                    printf("SUB = %d\n",answer);
                    break;
                case 3:
                    multiplication();
                    break;
                case 4:
                    division();
                    break;
                case 5:
                    modulus();
                    break;
                case 6:
                    power();
                    break;
                case 7:
                    factorial();
                    break;
                case 8:
                    square();
                    break;
                case 9:
                    cube();
                    break;
                case 10:
                    squareroot();
                    break;
                case 11:
                    cuberoot();
                    break;    
                case 0:
                    exit(0);
                default:
                    break;
        }
    
    }
    #else 
    test_main();
    #endif
    return 0;
}