class Outer
{
    class Inner
    {
        void fun()
        {
            System.out.println("inner class")
        }
    }
}
class Demo
{
    public static void main(String []args)
    {
        Outer oref=new Outer();
        Outer.Inner iref=oref.new Inner();
        iref.fun();

       // Outer.Inner iref = new Outer().new Inner();
       //new Outer().new Inner().fun();
    }
}