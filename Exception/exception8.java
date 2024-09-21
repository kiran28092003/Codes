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
    catch(Exception e)//generic catch block
    {
        e.printStackTrace();
    }
    }
}
//arrayIndexOutofBound
//NumberFormat
//ae
//multiple catch block is optional for it