//This sorce code demostrates default constructor

#include <cstdio>
class Date1
{
    private:
        int day;
        int month;
        int year;
    public:
        Date()
        {
            this->day=1;
            this->month=1;
            this->year=1970;
        }
        void show()
        {
            printf("%d/%d/%d\n",this->day,this->month,this->year);
        }
};

class Date2{
    private:
        int day;
        int month;
        int year;
    public:
        Date2():
}