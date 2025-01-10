//access specifier
#include<iostream>

class parent
{
    private:
    int a;
    public :
    int b;
    protected:
    int c;

    public:
    void set_data()
    {
        a=50;
        b=60;
        c=70;
    }

    void show_data()
    {
        std::cout<<a<<" "<<b<<" "<<c<<" "<<std::endl;

    }

};

class child : parent
{
    private:
    int cc;
   
    public:
    
    void gun()
    {
        //show_data();
        //cc=20;
       // std::cout<<a<<std::endl;
        //std::cout<<b<<std::endl;
        //std::cout<<c<<std::endl;
        //std::cout<<cc<<std::endl;
    } 
};

class dindi
{
    //parent p;    //size=12
    void run()
    {
        parent p; //size=1
        std::cout<<p.b<<std::endl;
    }
};

int main()
{
    parent p;
    p.set_data();
    p.show_data();
    std::cout<<sizeof(p)<<std::endl;

    child cobj;
    std::cout<<sizeof(cobj)<<std::endl;
    cobj.gun();

    dindi d;
    std::cout<<sizeof(d)<<std::endl;
    //d.run();
    
    return 0;
}