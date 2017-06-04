package in.ac.adit.servlet;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletConfig;
import javax.servlet.ServletContext;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class ContextExample extends HttpServlet{
	public void service(HttpServletRequest request, HttpServletResponse response) throws IOException{
		PrintWriter out = response.getWriter();
		ServletContext context = getServletContext();
		String appName = context.getInitParameter("Appname");
		out.println(appName);
		
		ServletConfig config = getServletConfig();
		out.println(config.getInitParameter("configVar"));
		
		
	
	}
}
