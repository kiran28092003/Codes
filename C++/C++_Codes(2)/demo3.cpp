#include<cstdlib>
#include<iostream>

class demo{
    public:
    int a;
    int b;
    int* p;

    demo()
    {

    }
    demo(int _a,int _b,int _p) {
        this->a=_a;
        this->b=_b;
        this->p=(int*)malloc(sizeof(int));
        *(this->p)=_p; 
    }

    demo(demo& ref) {
        this->a=ref.a;
        this->b=ref.b;
        this->p=(int*)malloc(sizeof(int));
        *(this->p)=*(ref.p); 
    }

    void operator= (demo& ref)//this makes deep copy
    {
        this->a=ref.a;
        this->b=ref.b;
        this->p=(int*)malloc(sizeof(int));
        *(this->p)=*(ref.p);
    }
    
};



int main()
{
    demo d_obj1(10,20,30);
    std::cout<<"a="<<d_obj1.a<<" b="<<d_obj1.b<<" p="<<*(d_obj1.p)<<std::endl;

    demo d_obj2=d_obj1;
    std::cout<<"a="<<d_obj2.a<<" b="<<d_obj2.b<<" p="<<*(d_obj2.p)<<std::endl;

    (d_obj1.a)++;
    (d_obj2.b)++;
    std::cout<<"a="<<d_obj1.a<<std::endl;
    std::cout<<"b="<<d_obj2.b<<std::endl;

    (*(d_obj1.p))++;
    std::cout<<"p="<<*(d_obj1.p)<<std::endl;
    std::cout<<"p="<<*(d_obj2.p)<<std::endl;

    demo d_obj3=d_obj1;
    (*(d_obj1.p))++;
    std::cout<<"p="<<*(d_obj1.p)<<std::endl;
    std::cout<<"p="<<*(d_obj3.p)<<std::endl;

    demo d_obj4; //only default constructor get call;
    d_obj4=d_obj1; //dobj4.operator=(dobj);
    (*(d_obj1.p))++;
    std::cout<<"p="<<*(d_obj1.p)<<std::endl;
    std::cout<<"p="<<*(d_obj4.p)<<std::endl;
    return 0; 

}

