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
 * Author: Bharati KOllur  ( bharatisk23@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 19.09.2022
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
struct student{
char name[30];
int class;
int roll_no;

};
int main()
{
	struct student s1;
	printf("Enter your name : \n");
	scanf("%s",s1.name);
	printf("in what class your studing : \n");
	scanf("%d",&s1.class);
	printf("enter your roll number : \n");
	scanf("%d",&s1.roll_no);

	printf("name : %s\n",s1.name);
	printf("class : %d\n",s1.class);
	printf("roll number :%d\n",s1.roll_no);
     
     return 0;
}

// Program End
