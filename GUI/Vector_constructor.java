//Vecor methods
import java.util.*;
class Demo4
{
    public static void main(String []args)
    {
        Vector v = new Vector();
        v.add("AAA");
        v.add("BBB");
        v.add("CCC");
        v.add("DDD");
        v.add("EEE");
        System.out.println(v);
       /*  v.addElement("bbb");
        System.out.println(v);
        System.out.println(v.firstElement());
        System.out.println(v.lastElement());

        v.elementAt(0);
        v.removeElementAt(1);
        v.removeAllElements();
        System.out.println(v);
        */

        Enumeration e=v.elements(); //Print elements separately
        Boolean b=e.hasMoreElements();
        if(b==true)
        {
            while(e.hasMoreElements())
            {
                System.out.println(e.nextElement());
            }
        }

        ArrayList al=new ArrayList();
        al.add("a");
        al.add("b");
        al.add("c");
        al.add("d");
        al.add("e");
        al.add("f");
        Iterator itr=al.iterator();
        System.out.println(al);
        itr.hasNext();
        System.out.println(al);
        itr.next();
        System.out.println(al);
        itr.remove();
        System.out.println(al);

        ListIterator litr=al.listIterator();
        litr.add("s");
       litr.add("i");
       litr.add("t");
        System.out.println(litr.hasNext());
        System.out.println(litr.next());
        System.out.println(litr.previous());
        System.out.println(litr.nextIndex());
        System.out.println(litr.previousIndex());
    
        litr.remove();
        litr.set("a");



    }
}