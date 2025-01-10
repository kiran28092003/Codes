
//declare
#include<iostream>
#include "Date.hpp"

int main(void)
{
    Date* p_date = new Date(); //memory alloation
    return 0;
    Date* p_date1 = new Date(1,1,1970);

    std::cout<<"day:"<<p_date->get_day()<<std::endl;
    std::cout<<"month:"<<p_date->get_month()<<std::endl;
    std::cout<<"year:"<<p_date->get_year()<<std::endl;
    
}