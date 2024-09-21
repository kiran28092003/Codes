class Demo3
{
    public static void main(String []args)
    {
        try{
            Class.forName("Kiran");
        }
        catch(ClassNotFoundException cnfe)
        {
            cnfe.toString();
            cnfe.printStackTrace();
        }
    }
}