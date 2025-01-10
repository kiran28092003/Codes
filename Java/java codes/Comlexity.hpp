#ifndef _COMPLEXITY_H
#define _complexity_H

class Complexity{
    private:
        double re;
        double im;
    public:
        Complexity();
        Complexity(double re,double im);
        void show(const char* msg)const;
        Complexity operator+(const Complexity& other)const;
        Complexity operator-(const Complexity& other)const;
};
#endif