class Demo implements Cloneable{
    int a,b;
    Demo(int a,int b)
    {
        this.a=a;
        this.b=b;
    }
    public static void main(String []args) throws CloneNotSupportedException
    {
       Demo d1=new Demo(10,20);
        //Demo d2=d1;
        //System.out.println(d1==d2); //true
        Demo d2=(Demo)d1.clone();
        //d1.a=50;
        //System.out.println(d1.a);
       // System.out.println(d2.a);
    }
}