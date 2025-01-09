
class Demo
{
    int a,b;
    Demo(int a,int b)
    {
        this.a=a;
        this.b=b;
    }

    public boolean equals(Object obj)
    {
            Demo dref=(Demo)obj;
            return this.a==dref.a && this.b==dref.b;
    }
    public static void main(String []args)
    {
        Demo d1=new Demo(10,20);
        Demo d2=new Demo(10,20);
        System.out.println(d1.equals(d2)); //false
        System.out.println(d1==d2); //false
        Integer iref1=10;
        Integer iref2=10;
        System.out.println(iref1==iref2); //true
      //  Integer iref1=new Integer(1000);
      //  Integer iref1=new Integer(1000);
     //   System.out.println(iref1==iref2); //false

        
    }
}