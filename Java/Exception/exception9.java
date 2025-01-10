class Demo
{
    public static void main(String []args)
    {
        try{
       int a = Integer.parseInt(args[0]);
       int b = Integer.parseInt(args[1]);
       int c =a/b;
       System.out.println(c);
    }
    catch(ArithmeticException ae)
    {
        System.out.println("print 2 values");

    }
    catch(NumberFormatException nfe)
    {
        System.out.println("argument values should be integer");
    }
    catch(ArrayIndexOutOfBoundsException aeofb)
    {
        System.out.println("denomator should not zero");
    }
    catch(Exception e)
    {
        e.printStackTrace();
    }
    }
}
//multiple catch block isoptional for in
//o/p=>
/*javac exception9.java

C:\KT\Java>java Demo
denomator should not zero

C:\KT\Java>javac exception9.java

C:\KT\Java>java Demo 10 0
print 2 values

C:\KT\Java>javac exception9.java

C:\KT\Java>java Demo "sangamner" "kiran"
argument values should be integer

C:\KT\Java>*/