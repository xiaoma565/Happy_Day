/*****************************************
* Creat time : 2016.7.30
* Athour     : CXB
* File name  : main.c
* Function   : just fun
*****************************************/


/*****************************************
*          include header area           *
*****************************************/
#include <stdio.h>
#include "menu.h"


/*****************************************
*          define variable area          *
*****************************************/


/* main */
int main()
{
	int menu_value = 0;

	menu_value = MenuDisplay();

	printf("\nmenu_value = %d\n", menu_value);

	return 0;
}
