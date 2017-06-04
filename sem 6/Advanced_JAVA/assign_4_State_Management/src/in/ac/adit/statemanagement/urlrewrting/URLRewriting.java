package in.ac.adit.statemanagement.urlrewrting;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class URLRewriting extends HttpServlet{
	String username; 
	public void service(HttpServletRequest request, HttpServletResponse response) throws IOException{
		username = request.getParameter("username");
		PrintWriter out = response.getWriter();
		out.println("Welcome "+username);
		out.println("<a href=DispalyURLReWriting?username="+username+">Click Here</a>");
	}
}
