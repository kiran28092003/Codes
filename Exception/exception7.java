class Demo
{
    public static void main(String []args)
    {
        int a=10;
        int b=0;
        try
        { 
             int c=a/b;
            System.out.println("hello");
        }
        catch(ArithmeticException ae)
        {
             System.out.println(ae.getMessage());
             System.out.println(" ");
             System.out.println(ae.toString());
             System.out.println(" ");
            ae.printStackTrace();
            System.out.println(" ");

        }

       // System.out.println(c);
        System.out.println("hello");
         System.out.println();
    }
}