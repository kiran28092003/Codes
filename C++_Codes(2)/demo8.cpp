#include<iostream>
#include<cstdlib>


class vector
{
    private:
        int* a;
        int size;
    public:
        vector();
        vector(int init_size);
        vector(int size , int num);
       
        int get_size() const;
        int get(int index) const;
        void show() const;
        void set(int index , int new_num);
        void resize(int new_size);

        friend void test();
    
};
vector :: vector()
        {
            size=1;
            a=(int*)malloc(sizeof(int));
        }
vector :: vector(int init_size)
    {
            size=init_size;
            a = (int*)malloc(size * sizeof(int));
        }
vector :: vector(int init_size , int num)
{
    size = init_size;
    a=(int*)malloc(size*sizeof(int));
    for(int i =0 ; i<size ;i++)
    {
        *(a+i) = num; 
    }    

}

void vector :: set(int index , int new_num)
{
    *(a+index) = new_num;
}

int vector :: get(int index) const
{
    return *(a+index);
}

void vector::resize(int new_size)
{
    size = new_size;
    a = (int*)realloc(a ,size*sizeof(int));
}

void vector :: show() const
{
    for(int i=0; i<size;i++)
    {
        std::cout<< *(a+i)<<std::endl;

    }

}

int vector :: get_size() const{

    return size;
}

void test()
{
    vector v1;
    vector v2(5);
    vector v3(5,100);
    v1.show();
    v2.show();
    v3.show();
    int x = v1.get(1);
    v1.set(2,350);
    int size = v1.get_size();
    std::cout<<"v1.size ="<<size<<std::endl;

}
int main()
{
    test();
}