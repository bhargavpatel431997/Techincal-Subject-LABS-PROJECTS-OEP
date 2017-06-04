package in.ac.adit.statemanagement.cookie;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class CookieExample extends HttpServlet {
	private String username;
	public void service(HttpServletRequest request, HttpServletResponse response) throws IOException{
		PrintWriter out = response.getWriter();
		username = request.getParameter("username");
		Cookie cookie = new Cookie("username",username);
		
		response.addCookie(cookie);
		out.println("Username : "+username);
	}
}
