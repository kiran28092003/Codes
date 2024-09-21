class Outer
{
    public static void main(String []args)
    {
        Outer oref=new Outer();
        Outer.Inner iref=oref.new Inner();
        iref.fun();
    }

    class Inner
    {
        void fun()
        {
            System.out.println("inner class")
        }
    }
}
