package in.ac.adit.servlet;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class HttpServletExample extends HttpServlet {
	private String username;
	private String password;
	Cookie cookie = null;
	RequestDispatcher rd = null;
	public void service(HttpServletRequest request, HttpServletResponse response) throws IOException, ServletException{
		
		username = request.getParameter("username");
		password = request.getParameter("password");
		
		PrintWriter out = response.getWriter();
		out.println("Username"+username);
		out.println("Password"+password);
	}
}
