
#include<stdio.h>
#include "Date.h"

void main()
{
    struct Date* p_date=NULL;
    p_date=create_date();
    printf("Day=%d\n",get_day(p_date));
    printf("Month=%d\n",get_month(p_date));
    printf("Year=%d\n",get_year(p_date));
}
show_date(p_date);
destroy_date(p_date);

