class Sample
{
    int a,b,c;
    Sample(int a,int b,int c)
    {
        this.a=a;
        this.b=b;
        this.c=c;
       
    }
    public String toString()
    {
        return this.a+" "+this.b+" "+this.c;
    }
}
class Sample2
{
public static void main(String []args)
        {
            Sample d1=new Sample(10,20,30);
            System.out.println(d1);
            Sample d2=new Sample(40,50,80);
             System.out.println(d2);
            Sample d3=new Sample(60,70,90);
             System.out.println(d3);
            

        } 
}

