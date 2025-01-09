class Outer
{
    void fun()
    {
        int b=10;
        class Inner
        {
            void gun()
            {
                System.out.println("Inner gun");
            }
        }
        b++;
        System.out.println(b);
        Inner iref=new Inner();
        iref.gun();
    }
    public static void main(String []args)
    {
        Outer oref=new Outer();
        oref.fun();
    }
}
