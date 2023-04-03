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
 * Author: Bharati Kollur ( natarajan.s@ruggedboard.com )
 * Title: Project Engineer
 * Last Modified Date: 19.09.2022
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
	int a,b;
	printf("Input the first number : ");
	scanf("%d",&a);
	printf("\nInput the second number : ");
	scanf("%d",&b);
	int *x=&a;
	int *y=&b;
	int add = *x + *y;
	printf("\n The sum of the entered numbers is : %d\n",add);
     
     return 0;
}

// Program End
