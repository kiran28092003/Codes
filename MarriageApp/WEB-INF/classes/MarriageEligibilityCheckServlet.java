package com.technorbit.servlet;

import javax.servlet.*; // servlet API
import javax.servlet.http.*;

import javax.annotation.*;
import java.io.*; // iostream API // inside rt.jar
import java.util.*; // utility API  // inside rt.jar

public class MarriageEligibilityCheckServlet extends HttpServlet {
    @Override
    public void service(HttpServletRequest req, HttpServletResponse res) throws ServletException, IOException {
        // get PrintWriter stream object from response object
        PrintWriter pw = res.getWriter();

        // set response content type
        res.setContentType("text/html");

        String name = req.getParameter("p_name");

        int age = Integer.parseInt(req.getParameter("p_age"));

        if (age < 18) {
            pw.println("<h1 style='color: green; text-align: center;'>Mr. or Miss. " + name
                    + ", you are not eligible for marriage.</h1>");
        } else {
            pw.println("<h1 style='color: green; text-align: center;'>Mr. or Miss. " + name
                    + ", you are eligible for marriage.</h1>");
        }

        pw.println(
                "<a href='http://localhost:2525/MarriageApp/index.html'><img src='images/home.png' alt='Home'></a>");
    }
}
