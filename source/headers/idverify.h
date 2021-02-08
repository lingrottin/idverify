// IDAUTH.H BY CDIL
// OPENSOURCED UNDER GPL 3.0
#ifndef _CDIL_IDVERIFY_IDAUTH_H
#define _CDIL_IDVERIFY_IDAUTH_H
#include<stdio.h>
int checkNum(char idNumber[18])
{
	int numberSum_Plus=0;
	int numberSum_PlusUse[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int suanNumber;
	for( int i=0;i<17;i++)
	{
		suanNumber = idNumber[i] - 48;
		numberSum_Plus+= suanNumber * numberSum_PlusUse[i];
	}
	int numberSum=numberSum_Plus % 11;
	int numberSum_conv[]={1,0,10,9,8,7,6,5,4,3,2};
	return numberSum_conv[numberSum];
}
int checkNumSum(char idNumber[18], int sumNumber)
{
	int sumNumberOnID;
	if( idNumber[17] == 'X' )
	{
		sumNumberOnID=10;
	} else {
		sumNumberOnID=idNumber[17] - 48 ;
	}
	if( sumNumber==sumNumberOnID )
	{
		return 0;
	} else {
		return 1;
	}
}
#endif
