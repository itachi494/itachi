#include<stdio.h>
void main()
{
   int a,b,op;
   printf ("*******Welcome*******\n");
   printf("Calculator in C prog.......\n");

   printf("Input Frist Number:\n");
   scanf("%d",&a);
   printf("Which Condition You Want to Input(1=+ , 2=-, 3=* ,4=/):\n");
   scanf("%d",&op);
   printf("Input second number:\n");
   scanf("%d",&b);
   switch (op)
   {
    case 1:
    printf("%d + %d = %d",a,b,a+b);
    break;
    case 2:
    printf("%d - %d = %d",a,b,a-b);
    break;
    
    case 3:
    printf("%d X %d = %d",a,b,a*b);
    break;

    case 4:
    printf("%d / %d = %d",a,b,a/b);
    break;


   
   default:
       break;
   }



}