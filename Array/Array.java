class Demo
{
    int a,b,c;
    Demo()
    {
        a=10;
        b=20;
        c=30;
    }
}
class Test
{
    public static void main(String[] args)
    {
       Demo[] d = new Demo[3];
       Demo d1 = new Demo();
       Demo d2 = new Demo();
       Demo d3 = new Demo();
       // int []a1={10,20,30,40,50};
       // d.Demo(a1);
       //int []a2=new int []{10,20,30,40,50};
       // d.Demo(a2);
       // d.Demo(new int[5]);
        //d.Demo({10,20,30,40,50}); \\C.E
       // d.Demo(new int[]{10,20,30,40,50}); //correct-anonumous array
        for(int i=0;i<d.length;i++)
        {
                d[i]=new Demo();
        }
        for(int i=0;i<d.length;i++)
        {
            System.out.println(d[i].a);
            System.out.println(d[i].b);
            System.out.println(d[i].c);
        } 
         
    }
    
}