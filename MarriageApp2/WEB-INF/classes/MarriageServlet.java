package com.technorbit.servlet;

import java.io.*;

import javax.servlet.ServletException;
import javax.servlet.http.*;
import java.util.*;

public class MarriageServlet extends HttpServlet
{
    
    public void doPost(HttpServletRequest req, HttpServletResponse res) throws ServletException,IOException
    {
    	res.setContentType("text/html");
        PrintWriter pw = res.getWriter();
        
        String name=req.getParameter("pname");
        String age=req.getParameter("page");
        String mob=req.getParameter("pmob");
        int age_int=0;
        
        List <String> errorList = new ArrayList();
        if (name == null || name.length()==0 || name.equals("")) {
        	
        	errorList.add("Name should not be Empty");
        	
        }
        if (age==null ) {
        	
        	errorList.add("Age should not be empty");
        	
        }
        else
        {
        	try {
        		age_int=Integer.parseInt(age);
        	}
        	catch(NumberFormatException nfe)
        	{
        		errorList.add("Age Must be Numeric");
        	}
        	if(age_int <=0 || age_int > 100) {
        		errorList.add("Age should be >0 and <100");
        	}
        }
        
        if(mob==null || mob.length()==0 || mob.equals(""))
        {
        	errorList.add("Mobile Number cant be Empty");
        }
        
        if(errorList.size() >0) {
        	pw.println("<ul style='color:red'>");
        	for(String error:errorList) {
        		pw.println("<li>"+error+"</li>");
        	}
        }
        else {
        	if(age_int > 18) {
        	  pw.println("<h1 style=\"color: green; text-align : center\"> Elligible For Marriage</h1>");
        	}
        	else {
        		  pw.println("<h1 style=\"color: red; text-align : center\"> Not Elligible For Marriage</h1>");
        	}
        }
        pw.println("<h2 style='color:blue; text-align:center'><a href ='index.html'> Go Back </a></h2>");
        pw.close();
    }
}