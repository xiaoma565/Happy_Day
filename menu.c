/*****************************************
* Creat time : 2016.7.30
* Athour     : CXB
* File name  : menu.c
* Function   : just fun
*****************************************/

int MenuDisplay(void)
{
    int input_value = 0;

	printf("\nPlease input your choise...\n");
	printf("****** Menu List ******\n");
	printf("input number and press enter : ");
	scanf("%d", &input_value);
	printf("\n");

    return input_value;
}
