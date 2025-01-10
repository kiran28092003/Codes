
import java.util.*;
class Colection2
{
    public static void main(String []args)
    {
        ArrayList al5=new ArrayList();
        al5.add("AAA");
        System.out.println(al5.add("AAA"));
        System.out.println(al5.add("AAA"));
        System.out.println(al5.add("DDD"));
        System.out.println(al5.add("DDD"));
        System.out.println(al5.add("BBB"));
        System.out.println(al5.add("BBB"));
        System.out.println(al5.add("CCC"));
        System.out.println(al5.add("CCC"));
        System.out.println(al5);
        al5.add(2,"EEE");
        System.out.println(al5);

        ArrayList al6=new ArrayList();
        System.out.println(al6.add("AAA"));
        System.out.println(al6.add("AAA"));
        System.out.println(al6.add("DDD"));
        System.out.println(al6.add("DDD"));
        System.out.println(al6.add("BBB"));
        System.out.println(al6.add("BBB"));
        System.out.println(al6.add("CCC"));
        System.out.println(al6.add("CCC"));
        System.out.println(al6);
        al6.addAll(2,al6);
        System.out.println(al6);

        ArrayList al7=new ArrayList();
        System.out.println(al7.add("AA"));
        System.out.println(al7.add("AA"));
        System.out.println(al7.add("DD"));
        System.out.println(al7.add("DD"));
        System.out.println(al7.add("BB"));
        System.out.println(al7.add("BB"));
        System.out.println(al7.add("CC"));
        System.out.println(al7.add("CC"));
        System.out.println(al7);
        al7.set(3,"kk");
        System.out.println(al7);

        ArrayList al8=new ArrayList();
        System.out.println(al8.add("AA"));
        System.out.println(al8.add("AA"));
        System.out.println(al8.add("DD"));
        System.out.println(al8.add("DD"));
        System.out.println(al8.add("BB"));
        System.out.println(al8.add("BB"));
        System.out.println(al8.add("CC"));
        System.out.println(al8.add("CC"));
        System.out.println(al8);
        al8.remove(3);
        System.out.println(al8);

        ArrayList al9=new ArrayList();
        System.out.println(al9.add("AA"));
        System.out.println(al9.add("AA"));
        System.out.println(al9.add("DD"));
        System.out.println(al9.add("DD"));
        System.out.println(al9.add("BB"));
        System.out.println(al9.add("BB"));
        System.out.println(al9.add("CC"));
        System.out.println(al9.add("CC"));
        System.out.println(al9);
       
        System.out.println(al9);

        
    }
    
}