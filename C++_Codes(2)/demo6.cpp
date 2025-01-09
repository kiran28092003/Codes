#include<iostream>
class Parent
{
    private:
            int a;
    public:
            int b;
    protected:
            int c;
    public:
    void setData()
    {
        a=50;
        b=60;
        c=70;
    }
    void showData()
    {
        std::cout<<a<<""<<b<<""<<c<<""<<std::endl;
    }
};
int main()
{
    Parent p;
    p.setData();
    p.showData();
    return 0;

}
