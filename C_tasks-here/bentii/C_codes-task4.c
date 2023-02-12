#include <stdio.h>
int main(){
int sumOfNumber, firstNumber, secondNumber;

	printf("Enter the first number:");

	scanf("%d", &firstNumber);

	printf("Enter the second number:");

	scanf("%d", &secondNumber);

	sumOfNumber = firstNumber + secondNumber;

	printf("The total of the numbers is: %d",sumOfNumber);

	return 0;
}
