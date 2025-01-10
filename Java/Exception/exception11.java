//User Defined exception
class Demo
{
    public static void main(String []args)
    {
        try
        {
            //throw new  ArithmeticException("kiran");
            throw new ClassNotFoundException("Demo");
        } 
        catch(ClassNotFoundException cnfe)//(ArithmeticException ae)
        {
            //ae.printStackTrace();
            cnfe.printStackTrace();
        }
    }
}