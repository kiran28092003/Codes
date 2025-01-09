package com.technorbit.servlet;

import javax.servlet.*; // servlet API
import javax.servlet.http.*;

import javax.annotation.*;
import java.io.*; // iostream API // inside rt.jar
import java.util.*; // utility API  // inside rt.jar

public class IndianStatesAndCapitals extends HttpServlet {
    
    public void doGet(HttpServletRequest req, HttpServletResponse res) throws ServletException, IOException {
        // get PrintWriter stream object from response object
        PrintWriter pw = res.getWriter();

        // set response content type
        res.setContentType("text/html");
        int stateIndex = Integer.parseInt(req.getParameter("state"));
        String[] states = {
                "Andhra Pradesh", "Arunachal Pradesh", "Assam", "Bihar", "Chhattisgarh", "Goa", "Gujarat",
                "Haryana", "Himachal Pradesh", "Jharkhand", "Karnataka", "Kerala", "Madhya Pradesh",
                "Maharashtra", "Manipur", "Meghalaya", "Mizoram", "Nagaland", "Odisha", "Punjab", "Rajasthan",
                "Sikkim", "Tamil Nadu", "Telangana", "Tripura", "Uttar Pradesh", "Uttarakhand", "West Bengal"
        };

        String[] capitals = {
                "Amaravati", "Itanagar", "Dispur", "Patna", "Raipur", "Panaji", "Gandhinagar",
                "Chandigarh", "Shimla", "Ranchi", "Bengaluru", "Thiruvananthapuram", "Bhopal",
                "Mumbai", "Imphal", "Shillong", "Aizawl", "Kohima", "Bhubaneswar", "Chandigarh", "Jaipur",
                "Gangtok", "Chennai", "Hyderabad", "Agartala", "Lucknow", "Dehradun", "Kolkata"
        };

        pw.println("<h1 style='color: green;text-align: center'>Capital Of:" + states[stateIndex] + " is->"
                + capitals[stateIndex]);

        pw.println("<h2 style='color:green;text-align:center'><a href='page.html'>Go Back to home Page..</a>");

        pw.close();

    }
}
