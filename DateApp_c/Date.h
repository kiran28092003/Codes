struct Date
{
    int day;
    int month;
    int year;
};

struct Date* create_date();
void init_date(struct Date*,int,int,int);

int get_date(struct Date*);
int get_month(struct Date*);
int get_year(struct Date*);

void set_day(struct Date*,int);
void set_month(struct Date*,int);
void set_year(struct Date*,int);

void show_date(struct Date*);
void destroy_date(struct Date*);

