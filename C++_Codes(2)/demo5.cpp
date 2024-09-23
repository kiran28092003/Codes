//explicite operator overloading
#include<iostream>

class demo
{
    public:
    int a;
    int b;

    demo(int _a,int _b)
    {
        this->a=_a;
        this->b=_b;
    }

    demo operator+(demo& ref)
    {
        demo temp (0,0);
        temp.a = this->a + ref.a;
        temp.b = this->b + ref.b;
        return temp;
    }
    demo operator-(demo& ref)
    {
        demo temp (0,0);
        temp.a = this->a - ref.a;
        temp.b = this->b - ref.b;
        return temp;
    }
    demo operator*(demo& ref)
    {
        demo temp (0,0);
        temp.a = this->a * ref.a;
        temp.b = this->b * ref.b;
        return temp;
    }
    demo operator/(demo& ref)
    {
        demo temp (0,0);
        temp.a = this->a / ref.a;
        temp.b = this->b / ref.b;
        return temp;
    }

};

int main()
{
    demo d1 (10,20);
    demo d2 (30,40);
    demo d3=d1+d2;
    demo d4=d1-d2;
    demo d5=d1*d2;
    demo d6=d2/d1;

    std::cout<<"Addition=("<<d3.a<<","<<d3.b<<")"<<std::endl;
    std::cout<<"Substraction=("<<d4.a<<","<<d4.b<<")"<<std::endl;
    std::cout<<"Multiplication=("<<d5.a<<","<<d5.b<<")"<<std::endl;
    std::cout<<"Division=("<<d6.a<<","<<d6.b<<")"<<std::endl;

}