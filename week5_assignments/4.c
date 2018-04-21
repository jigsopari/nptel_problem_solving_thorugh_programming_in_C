//Convert days into years, months and days.
#include <stdio.h>
int main()
{
int days, years, month;
scanf("%d", &days); /* Total number of days entered from the test case */
years = (days / 365);
month = (days % 365) / 30;
days = days - ((years * 365) + (month * 30));
printf("YEARS: %d MONTH: %d DAYS: %d",  years, month, days);
}
