//IDAUTH MAIN.C BY CDIL
//OPENSOURCED UNDER GPL 3.0
#include<stdio.h>
#include"headers/idverify.h"
int main(int argv, char* argc[])
{
	if ( argv < 3 )
	{
		printf( "Inputted incorrectly, please try again.\n");
		return 1;
	}

	if ( strcmp( argc[1], "v" ) == 0 )
	{
		int sumNumber=checkNum(argc[2]);
		return checkNumSum(argc[2], sumNumber);
	} else if ( strcmp( argc[1], "p" ) == 0 )
	{
		int sumNumber=checkNum(argc[2]);
		printf( "Number %s's correct ckeck code is \"%d\".\n", argc[2], sumNumber);
		return 0;
	} else {
		printf( "Inputted incorrectly, please try again.\n");
		return 1;
	}
}
