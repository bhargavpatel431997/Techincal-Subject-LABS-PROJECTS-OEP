package in.ac.adit.statemanagement.hiddenform;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class HiddenFormFields extends HttpServlet{
	public void service(HttpServletRequest request, HttpServletResponse response) throws IOException{
		PrintWriter out = response.getWriter();
		out.println("Username "+request.getParameter("username"));
		out.println("Secret Code"+request.getParameter("secretCode"));
	}
}
