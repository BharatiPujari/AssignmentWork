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
 * Author: Bharati Kollur ( bharatisk23@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 19.09.2022
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
	int num;

        printf("Enter a number: ");
        scanf("%d", &num);
       	if (num > 20) {
		printf("%d is greater than 20.", num);
       	} 
	else {
	       	printf("%d is not greater than 20.", num);
	}

     
     return 0;
}

// Program End
