class Address
{
    int a=1;
    int b=2;
    int c=3;
    public Address clone()throws CloneNotSupportedException;
   
    s2.add = s1.add.clone();
    
}
class Student throws CloneNotSupportedException
{
    int roll_no=10;
    String name="kiran";
    Address add=new Address();
    public Student clone()
    {
        return (Student)super.clone();
    }
}
class Test{
   
    public static void main(String []args) throws CloneNotSupportedException
    {
        Student s1=new Student();
        System.out.println(s1.name);
        System.out.println(s1.roll_no);
        System.out.println(s1.add.a);
        System.out.println(s1.add.b);
        System.out.println(s1.add.c);
       //s1.roll_no=50;
        //s1.add.a=100;
        Class cref=s1.getClass();
        System.out.println(cref.getName());
    }
}