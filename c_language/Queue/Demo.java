import java.util.*;
import java.util.concurrent.*;

class Demo
{
     public static void main(String[] args) {
         PriorityQueue q=new PriorityQueue();
            q.add("AAA");
            q.add("BBB");
            q.add("CCC");
            q.add("DDD");

            System.out.println(q);
            q.offer("eee");
            System.out.println(q);
            System.out.println(q.poll());
            System.out.println(q.remove());
            System.out.println(q.peek());
            System.out.println(q.element());
            System.out.println(q.remove());
            System.out.println(q.remove());
            System.out.println(q.remove());
            //System.out.println(q.remove());
            //System.out.println(q.poll());
            //System.out.println(q.peek());
            //System.out.println(q.element());

            ArrayBlockingQueue bq=new ArrayBlockingQueue(11);//Bounded Queue
            bq.offer("eee");
            bq.offer("eee");
            bq.offer("eee");
            bq.offer("eee");
            bq.offer("eee");
            bq.offer("eee");
            bq.offer("eee");
            bq.offer("eee");
            bq.offer("eee");
            bq.offer("eee");
            bq.offer("eee");
            System.out.println(bq);
            bq.offer("eee");
            System.out.println(bq);

            PriorityQueue bq1=new PriorityQueue(11);
            bq1.offer("eee");
            bq1.offer("eee");
            bq1.offer("eee");
            bq1.offer("eee");
            bq1.offer("eee");
            bq1.offer("eee");
            bq1.offer("eee");
            bq1.offer("eee");
            bq1.offer("eee");
            bq1.offer("eee");
            bq1.offer("eee");
            System.out.println(bq1);
            bq1.offer("eee");
            System.out.println(bq1);

            TreeSet ts=new TreeSet();
            ts.add("aaa");
            ts.add("fff");
            ts.add("bbb");

            PriorityQueue pq1=new PriorityQueue(ts); 
             pq1.offer("ggg");
             System.out.println(pq1);



             /*Deque dq=new Deque();
               dq.addFirst("AAA");
               System.out.println(dq);
               */

          /*ArrayDeque ad= new ArrayDeque();
          ad.add("aaa");
          ad.add("ccc");
          ad.add("bbb");
          ad.add("ccc");
          ad.add("ddd");

          ad.addFirst("qqq");
          ad.addLast("mmm");
          ad.removeFirstOccurence("ccc");
          ad.removeLastOccurence("ccc");
          ad.descendingIterator();
          */


            



            
            
            



     }
}