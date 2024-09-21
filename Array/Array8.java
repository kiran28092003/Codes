class Emp
{
    void calcu_Salary()
    {
        System.out.println("Employee Salary");
    }
}
class Demo
{
    public static void main(String []args)
    {
        Emp kiran=new Emp()
        {
            void calcu_Salary()
            {
                int salary=60000;
                System.out.println("Anontmous Salary"+salary);
            }
        };
        kiran.calcu_Salary();
    }
}