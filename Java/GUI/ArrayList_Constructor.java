//stack
import java.util.*;
class Demo3
{
    public static void main(String []args)
    {
       Stack s = new Stack();
        System.out.println(s.add("AAA"));
        System.out.println(s.add("AAA"));
        s.push("k");
        System.out.println(s);
    
       Stack s1 = new Stack();
        System.out.println(s1.add("BBB"));
        System.out.println(s1.add("ccc")) ;
        System.out.println(s1);
        s1.pop();
        System.out.println(s1);

       Stack s2 = new Stack();
        System.out.println(s2.add("CCC"));
        System.out.println(s2.add("DDD"));
        System.out.println(s2);
        s2.peek();
        s2.search("CCC");

        Enumeration e = new
    }
}