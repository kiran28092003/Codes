class Demo
{
    public static void main(String []args)
    {
        String s1=new String();
        String s2=new String("abc");
        String s3=new String(s2);
        StringBuffer sb1=new StringBuffer("abc");
        String s4=new String(sb1);
        StringBuilder sb2=new StringBuilder("abcdef");
        String s5=new String(sb2);
        char[] crr={'s','i','t','a'};
        String s6=new String(crr);
        char[] crr1={'s','i','t','a','r','a','n','i'};
        String s7=new String(crr1,4,4);//(array,startingIndex,countOfCharactor)
        byte[] brr={65,76,68,69};
        String s8=new String(brr);
        byte[] brr1={97,98,99,100,101,102,103,104,105};
        String s9=new String(brr1,3,5);
        System.out.println(s1);
        System.out.println(s2.toString());
       // System.out.println(crr.length());
        System.out.println(s3);
        System.out.println(s4);
        System.out.println(s5);
        System.out.println(s6);
        System.out.println(s7);
        System.out.println(s8);
        System.out.println(s9);
        String s10=null;
        System.out.println(s10);
       // String s11=new String(null);
        //System.out.println(s11);
        //String s12=new String(s10);
        //String s12=new String(s10);
        //System.out.println(s12);
        String str1=new String ("sita");
        String str2="sita";
        System.out.println(str1.hashCode());
        System.out.println(str2.hashCode());
        System.out.println(str1==str2);
        System.out.println(str1.equals(str2));
        System.out.println(str1.equalsIgnoreCase(str2));
        String str3="ram";
        String str4="sita";
        System.out.println(str3==str4);
        System.out.println(str3.concat(str4));
        System.out.println(str3.charAt(2));
        System.out.println(str3.indexOf('k'));
        System.out.println(str3.indexOf('y'));
        System.out.println(str3.indexOf("ir"));
        System.out.println(str3.indexOf("s" ,2));


    }
}