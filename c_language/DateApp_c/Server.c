#include "Date.h"
#include<stdlib.h>
#include<stdio.h>

struct Date* create_date()
{
    struct Date* p_date=NULL;
    p_date=(struct Date*)malloc(sizeof(struct Date));
    return p_date;
}
void init_date(struct Date* p_date,int dd,int mm,int yy)
{
    p_date->day=dd;
    p_date->month=mm;
    p_date->year=yy;
}
int get_day(struct Date* p_date)
{
    return p_date->day;
}
int get_month(struct Date* p_date)
{
    return p_date->month;
}
int get_year(struct Date* p_date)
{
    return p_date->year;
}
void set_date(struct Date* p_date,int new_day)
{
    p_date->day=new_day;
}
void set_date(struct Date* p_date,int new_month)
{
    p_date->month=new_month;
}
void set_date(struct Date* p_date,int new_year)
{
    p_date->year=new_year;
}
void show_date(struct Date* p_date)
{
    printf("[%d]-[%d]-[%d]\n",p_date->day,p_date->month,p_date->year);
}
void destroy_date(struct Date* p_date)
{
    if(p_date=NULL)
    {
        free(p_date);
        p_date=NULL;
    }
}
