/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 
 * Brief: 
 * Author: Bharati Kollur  (bharatisk23@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 19.09.2022
 *
/*********************************************************************************************/


#include <stdio.h>
int main()
{
      	int num1, num2, sum, diff, product, quotient, remainder;
       
	printf("Enter the first number: ");

	scanf("%d", &num1);
       	printf("Enter the second number: ");
	scanf("%d", &num2);

	sum = num1 + num2;
       printf("Addition       : a+b = %d\n", sum);
      
	diff = num1 - num2;
      	printf("Subtraction    : a-b =  %d\n", diff);
       
	product = num1 * num2;
      	printf("Multiplication : a*b = %d\n", product);
	
	quotient = num1 / num2;
	printf("Division:  %d\n", quotient);
       
	remainder = num1 % num2;
      	printf("Modulo Division: %d\n", remainder);
       	
	num1++;
      	printf("Increment the value of a by 1: %d\n", num1);
	
	num2--;
       	printf("Decremented the value of b by 1:%d\n", num2);
	return 0;
}

     

// Program End
