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
        if(this==obj)
        {
        return true;
        }
         else if(obj instanceof Demo)
         {
             Demo dref=(Demo)obj;
            return this.a==dref.a && this.b==dref.b;
        }
        else
        {
            return false;
        }
       
         
    }
    public static void main(String []args)
    {
        Demo d1=new Demo(10,20);
        Demo d2=new Demo(10,20);
        System.out.println(d1.equals(d2)); //true
        System.out.println(d1==d2); //false
    }
}




