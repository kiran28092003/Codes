#include<iostream>
int main()
{
    const int a=10;
    int* p=const_cast<int*> (&a);
    *p=20;
    std::cout<<"a:"<<a<<std::endl;
    std::cout<<&a<<std::endl; 
    std::cout<<&p<<std::endl;
    std::cout<<p<<std::endl;
    return 0;
}