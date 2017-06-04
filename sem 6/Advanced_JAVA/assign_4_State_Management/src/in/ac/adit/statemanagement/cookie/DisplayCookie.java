package in.ac.adit.statemanagement.cookie;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class DisplayCookie extends HttpServlet {
	public void service(HttpServletRequest request, HttpServletResponse response) throws IOException{
		PrintWriter out = response.getWriter();
		Cookie cookie[]= request.getCookies();
		for(int i = 0; i<cookie.length; i++){
			out.println(cookie[i].getValue());
		}
	}
}
