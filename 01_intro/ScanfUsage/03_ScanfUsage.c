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
 * Author: Bharati Kollur  ( bharatisk23@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 19.09.2022
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     char name[40];
     int roll;
     double cgpa;

     printf("enter a name:");
     scanf("%s", name);
     printf("enter roll no:");
     scanf("%d", &roll);
     printf("enter CGPA:");
     scanf("%lf", &cgpa);
     printf("\nDisplaying information\n");
     printf("Name : %s\n", name);
     printf("Roll  : %d\n", roll);
     printf("CGPA : %4.2lf\n", cgpa);


     
     return 0;
}

// Program End
