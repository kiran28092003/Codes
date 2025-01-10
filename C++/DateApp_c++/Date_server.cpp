//define
#include<instream>
#include "Date.hpp"

Date::Date():day(1),month(1),year(1){}
Date::Date(int init_day,int init_month,int init_year)
{
    day=init_day;
    month=init_month;
    year=init_year;

    int Date::get_day() const
    {
        return day;
    }
    int Date::get_month() const
    {
        return month;
    }
    int Date::get_year() const
    {
        return year;
    }
}