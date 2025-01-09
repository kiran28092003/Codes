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

public class ImageServlet extends HttpServlet{
	public void doGet(HttpServletRequest req, HttpServletResponse res) throws ServletException,IOException
	{
		res.setContentType("candel/jpeg");
        ServletOutputStream rem=res.getOutputStream();
        String path=this.getServletContext().getRealPath("bihar-street-village-image-hd-photo.jpeg");
        File f=new File(path);
        FileInputStream fis=new FileInputStream(f);
        byte[] b=new byte[(int)f.length()];
        fis.read(b); 
        rem.write(b);
        
        fis.close();
        rem.close();
        
        
	}

}
