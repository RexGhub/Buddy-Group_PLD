#include<stdio.h>
int main()
{

  int x;
  int y;
  int z;

  printf("A Program to accept and add two numbers\n"); 
  printf("hello, Please enter your first number:"); //this part ask user to input the number
  scanf("%d",&x);  //this line accept inputs
  printf("Please enter another number:");
  scanf("%d",&y); 

  z = x + y;   //the calculation happens here.

  printf("your total number is %d\n",z);
  printf("thanks for using this addition calcaulator\n");

  return 0;
}
