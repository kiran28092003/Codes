class Demo
{
    public static void main(String []args)
    {
        java.util.ArrayList list=new java.util.ArrayList();
        list.add(10);
        list.add(10);
        list.add(20);
        list.add(30);
        System.out.println(list);


        java.util.HashSet hs=new java.util.HashSet();
        hs.add(10);
        hs.add(10);
        hs.add(20);
        hs.add(30);
        System.out.println(hs);


        java.util.TreeSet ts=new java.util.TreeSet();
        ts.add(10);
        ts.add(10);
        ts.add(20);
        ts.add(30);
        System.out.println(ts);
    }
}