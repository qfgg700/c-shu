#include<stdio.h>

void CalculateWeekDay(int y, int m,int d)
{
	if(m==1||m==2) m+=12,y--;
	int iWeek = (d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
	switch(iWeek){
		case 0: printf("Monday"); break;
     	case 1: printf("Tuesday"); break;
     	case 2: printf("Wednesday"); break;
     	case 3: printf("Thursday"); break;
     	case 4: printf("Friday"); break;
     	case 5: printf("Saturday"); break;
     	case 6: printf("Sunday"); break;
	}
}

int main()
{
    int year,month,day;
    scanf("%d-%d-%d",&year,&month,&day);
	CalculateWeekDay(year,month,day);
	return 0;
}
