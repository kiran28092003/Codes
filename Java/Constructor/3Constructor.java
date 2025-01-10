class Demo
{
    public static void main(String []args)
    {
       
        StringBuffer sb1=new StringBuffer();
        StringBuffer sb2=new StringBuffer("kiran");
       //  StringBuffer sb3=new StringBuffer(50);
        StringBuffer sb4=new StringBuffer();
          System.out.println(sb4.capacity());
        //System.out.println(sb4.append());
          System.out.println(sb4.capacity());
           System.out.println(sb4.append("kiran"));
           sb4.ensureCapacity(30);
           System.out.println(sb4.capacity());
          sb4.trimToSize();
          System.out.println(sb4.capacity());
      //  System.out.println(sb1.capacity());
      //  System.out.println(sb2.capacity());
        //System.out.println(sb2.append("tajanpure"));
        //System.out.println(sb2.capacity());
       // System.out.println(sb3.capacity());
        System.out.println(sb1.append("tajanpure"));
        System.out.println(sb1.capacity());
        System.out.println(sb1.append("Sangamner"));
        System.out.println(sb1.capacity());
       // System.out.println(sb1.Insert("abcd"));
       //  System.out.println(sb1.delete("abcd"));
       // System.out.println(sb1.deletecharAt("abcd"));

        System.out.println(sb2.capacity());
        System.out.println(sb2.append("tajanpure"));
        System.out.println(sb2.capacity());
        System.out.println(sb2.append("Sangamner"));
        System.out.println(sb2.capacity());
        


    }
}