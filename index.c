#include <stdio.h>
    int a;
    char grade;
    int num1;
    int num2;

int main(int argc, char* argv[]){
    // hello world
    printf("hello world! \n");
    // using sizeof() to get size of a variable
    printf("Size of int: %zu bytes\n", sizeof(a));
    // switch case in C
    printf("enter your grade :");
    scanf("%c",&grade);

    switch(grade){
        case 'a':
        printf("**Excellent**\n");
        break;

        case 'b':
        printf("**Good**\n");
        break;

        case 'c':
        printf("**Average**\n");
        break;

        default:
        printf("**failed**\n");
    }
   
//  conditions in C
// if
printf("enter two numbers\n");
scanf("%d",&num1);
scanf("%d", &num2);
if(num1==num2){
    printf("if block prints: num1 is equal to num2\n");
}

// if else statements
if(num1>num2){
    printf("%d is greater than %d\n", num1,num2);
}
else{
    printf("else prints: condition doesnt exist\n");
}

// if else if
if(num1!=num2){
    printf("%d is different from  %d in the nested block\n", num1 ,num2);
}
else if(num1<num2){
    printf("%d is less than %d in the else if block\n", num1,num2);
}
else if(num1<= num2){
    printf("%d is less than or equal to %d\n",num1,num2);
}
 else if(num1>num2){
    printf("%d is greater than %d\n",num1,num2);
}
if(num1>=num2){
    printf("%d is greater or equall to %d\n",num1,num2);
}
else{
    printf("num1 num2 is %d and %d\n",num1,num2);
}
// nested if else
if(num1 != num2){
    if(num2 ==5){
        if(num1==4){
            printf("this makes somuch sense\n");
        }
        else 
        printf("coding is crazzzy\n");
    }
    // C operators

    int a,b;
    // unary operator
    a=10;
    printf("%d",a++);
    // binary operators
    printf("enter two numbers to be computed\n");
    scanf("%d", &a);
    scanf("%d", &b);
    int c=a+b;
    scanf("%d", &c);
    printf("%d + %d = %d",a,b,c);
    // ternary operator
    int x =(a>b)?a:b;
}

 return 0;
 getchar();
}