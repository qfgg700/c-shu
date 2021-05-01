#include<stdio.h>

int judgeyear(int year)
{
    if(year%400==0) return 29;
    else
    {
        if(year%4==0&&year%100!=0) return 29;
        else return 28;
    }
}

int month_of_day(int year,int month)
{
    int dayofmonth;
    switch(month)
    {
        case 1:
            dayofmonth=31;
            break;
        case 2:
            dayofmonth=judgeyear(year);
            break;
        case 3:
            dayofmonth=31;
            break;
        case 4:
            dayofmonth=30;
            break;
        case 5:
            dayofmonth=31;
            break;
        case 6:
            dayofmonth=30;
            break;
        case 7:
            dayofmonth=31;
            break;
        case 8:
            dayofmonth=31;
            break;
        case 9:
            dayofmonth=30;
            break;
        case 10:
            dayofmonth=31;
            break;
        case 11:
            dayofmonth=30;
            break;
        case 12:
            dayofmonth=31;
            break;
    }
    return dayofmonth;
}

int day_of_year(int year,int month,int day)
{
    int i,count=0;
    count+=day;
    for(i=month-1;i>=1;i--)
    {
        count+=month_of_day(year,i);
    }
    return count;
}

int main()
{
    int year,month,day,count;
    printf("Enter year month day:");
    scanf("%d %d %d",&year,&month,&day);
    count=day_of_year(year,month,day);
    printf("day of year is %d",count);
    return 0;
}
