//InterruptedException ....positive value square and negitive value  la exception
class Demo1
{
    public static void main(String []args)
    {
        try
        {
            throw new InterruptedException("negative value");
        } 
        catch(InterruptedException ie)//(ArithmeticException ae)
        {
           ie.printStackTrace();
        }
        System.out.println("positive value");
    }
}