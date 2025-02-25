class Date
{
    private:
        int day;
        int month;
        int year;

    public:
        Date();

        Date(int init_day,int init_month,int init_year);

        int get_day() const;
        int get_month() const;
        int get_year() const;
}
