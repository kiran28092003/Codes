#include<iostream>
class date{
    private:
    int day;
    int month;
    int year;

    public:
    date():day(1),month(1),year(1970)
    {

    }
   
    void show()
    {
        std::cout<<"day:"<<this->day<<" Month:"<<this->month<<" Year:"<<this->year<<std::endl;
    }
};

int main()
{
    date mydate1;
    mydate1.show();
    date mydate2(mydate1);
    mydate2.show();
    return 0;
}