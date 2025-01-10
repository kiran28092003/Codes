import java.util.*;
class Demo
{
    public static void main(String []args)
    {
        HashSet hs=new HashSet();
        System.out.println(hs.add("A"));
        System.out.println(hs.add("A"));
        System.out.println(hs.add("B"));

        HashSet hs1=new HashSet();
        System.out.println(hs1.add("A"));
        System.out.println(hs1.add("A"));
        System.out.println(hs1.addAll(hs));
        System.out.println(hs1.addAll(hs1));


        ArrayList al2=new ArrayList();
         System.out.println(al2.add("B"));

         System.out.println(al2.add("A"));

         System.out.println(al2.remove("A"));

         ArrayList al3=new ArrayList();
         System.out.println(al3.add("A"));
         System.out.println(al3.add("A"));
         System.out.println(al3.add("A"));
         System.out.println(al3.add("X"));
         System.out.println(al3.add("X"));
         System.out.println(al3.add("X"));
         System.out.println(al3.add("B"));
         System.out.println(al3.add("B"));
         System.out.println(al3.add("B"));
         System.out.println(al3.add("B"));
         System.out.println(al3.add("A"));
         System.out.println(al3.add("A"));
         System.out.println(al3.add("A"));
         System.out.println(al3.add("A"));
        
         System.out.println(al3.removeAll(hs1));
         System.out.println(al3.retainAll(hs));
        System.out.println(al3.remove(hs));
        System.out.println(al3.addAll(hs));
        
        ArrayList al4=new ArrayList();
        System.out.println(al4.add("AAA"));
        System.out.println(al4.add("AAA"));
        System.out.println(al4.add("AAA"));
        System.out.println(al4.add("BBB"));
        System.out.println(al4.add("BBB"));
        System.out.println(al4.add("CCC"));
        System.out.println(al4.add("CCC"));

        Object []obj = al4.toArray();
        for(int i=0;i<obj.length;i++)
        {
            System.out.println(obj[i]);
        }

        System.out.println(al4.isEmpty());
        System.out.println(al4.size());
        al4.clear();
        System.out.println(al4.size());

        ArrayList al5=new ArrayList();
        System.out.println(al5.add("AAA"));
        System.out.println(al5.add("AAA"));
        System.out.println(al5.add("DDD"));
        System.out.println(al5.add("DDD"));
        System.out.println(al5.add("BBB"));
        System.out.println(al5.add("BBB"));
        System.out.println(al5.add("CCC"));
        System.out.println(al5.add("CCC"));
        al5.add(2,"EEE");

        ArrayList al6=new ArrayList();
        System.out.println(al6.add("AAA"));
        System.out.println(al6.add("AAA"));
        System.out.println(al6.add("DDD"));
        System.out.println(al6.add("DDD"));
        System.out.println(al6.add("BBB"));
        System.out.println(al6.add("BBB"));
        System.out.println(al6.add("CCC"));
        System.out.println(al6.add("CCC"));
       // al6.addAll(2,);

        ArrayList al7=new ArrayList();
        System.out.println(al7.add("AA"));
        System.out.println(al7.add("AA"));
        System.out.println(al7.add("DD"));
        System.out.println(al7.add("DD"));
        System.out.println(al7.add("BB"));
        System.out.println(al7.add("BB"));
        System.out.println(al7.add("CC"));
        System.out.println(al7.add("CC"));
        al7.set(3,al7);




        


    }



}