// demo1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class A
{
public :
    double a;

    A()
    {
        this->a = 1;
    }
};

class B
{
public:
    double b;

    B()
    {
        this->b = 2;
    }
};
class C
{
public:
    double c;

    C()
    {
        this->c = 3;
    }
};

class D :public A, public B, public C
{
public :
    double d;

    D()
    {
        this->d = 4;
    }
};
int main()
{
    D d_obj;
    A* a_ptr = &d_obj;
    B* b_ptr = &d_obj;
    C* c_ptr = &d_obj;

    std::cout << "&d_obj=" << &d_obj << std::endl;
    std::cout << "&a_ptr=" << a_ptr << std::endl;
    std::cout << "&b_ptr=" << b_ptr<< std::endl;
    std::cout << "&c_ptr=" << c_ptr << std::endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
