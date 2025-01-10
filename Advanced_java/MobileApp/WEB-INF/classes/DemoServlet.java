package com.technorbit.servlet;

import java.io.*;

import javax.servlet.ServletConfig;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.http.*;
import java.util.*;
import java.io.*;
public class DemoServlet extends HttpServlet {
public void service(HttpServletRequest req, HttpServletResponse res) throws ServletException, IOException {

		PrintWriter pw = res.getWriter();
		res.setContentType("text/html");
		java.util.Enumeration E = this.getInitParameterNames();
		
		while (E.hasMoreElements()) {
			String key = (String) E.nextElement();
			String value = this.getInitParameter(key);
			pw.println("<h1>Key= " + key + "  Value= " + value + "</h1>");
		}

		pw.close();
	}

}
