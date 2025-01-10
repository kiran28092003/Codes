#include <cstdio>

class Date{
    private:
        int day; //data member
        int month; //data member
        int year; //data member
    public:
        //member function
        void test_funtion1()
        {
            puts("Inside Date::test_function1()");
        }
        //member function
        void test_function2()
        {
            puts("Inside Date::test_function2()");
            printf("address of the calling object:addr(this):%llu\n,(unsigned long long)this");
        }
};
void test1(void);
void test2(void);

int main(void)
{
    test1();
    test2();
    return(0);
}

void test1(void)
{
    Date myDate1;
    Date myDate2;

    myDate1.test_function2();
    myDate2.test_function2();

    //what is a difference?
    //myDate1.test_function1()
    //==Date::test_function1(&myDate1);
    //myDate2.test_function1();
    //==Date::test_function1(&myDate2);

}
void test2(void)
{
    Date myDate1;
    Date myDate2;
    printf("test2():addr(&myDate1);%llu\n",(unsigned long long)&myDate1);
    printf("test2():addr(&myDate2);%llu\n",(unsigned long long)&myDate2);
    puts("Making calls to:myDate1.testtest_function2()\ and myDate2.test_function2()");
    myDate1.test_function2();
    myDate2.test_function2();
}

