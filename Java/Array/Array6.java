class Outer
{
    int a=10;
    class Inner
    {
        int b=20;
        void fun()
        {
            System.out.println("inner fun"+a);
        }
    }
    void gun()
    {
        Inner iref=new Inner();
       // iref.b;
        iref.fun(); 
       // System.out.println("outer gun"+b);  C.E
       System.out.println(iref.b);
    }
}
class Demo
{
    public static void main(String []args)
    {
        Outer oref=new Outer();
        oref.gun();
    }
}