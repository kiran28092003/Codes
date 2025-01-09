package com.tot.servlet;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
//import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.ServletOutputStream;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class VideoServlet extends HttpServlet{
	public void doGet(HttpServletRequest req, HttpServletResponse res) throws ServletException,IOException
	{
		res.setContentType("Mama/mp4");
        ServletOutputStream rem=res.getOutputStream();
        String path=this.getServletContext().getRealPath("demo.mp4");
        File f=new File(path);
        FileInputStream fis=new FileInputStream(f);
        byte[] b=new byte[(int)f.length()];
        fis.read(b); 
        rem.write(b);
        
        fis.close();
        rem.close();
        
        
	}

}
