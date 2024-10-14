package com.tot.servlet;
import javax.servlet.*;//servley api
import java.io.*;//iostream api //inside rt.jar
import java.util.*;//utility api  //inside rt.jar

public class DateServlet extends GenericServlet
{
    public void service(ServletRequest req, ServletResponse res) throws ServletException,IOException //throws keyword use to deligate exception
    {
        //set response content type
        res.setContentType("text/html");
        //write request processing logic
        Date d = new Date();//holds system date and time
        //get printWriter stream obj from response obj
        PrintWriter pw = res.getWriter();
        //write generate output to response obj write printWrite
        pw.println("<h1>Date & Time is:"+d+"</h1>");
        pw.close();
    }
}

