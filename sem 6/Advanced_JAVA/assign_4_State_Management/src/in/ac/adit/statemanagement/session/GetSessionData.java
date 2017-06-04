package in.ac.adit.statemanagement.session;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

public class GetSessionData extends HttpServlet {
	private HttpSession session = null;
	private String username;
	public void service(HttpServletRequest request, HttpServletResponse response)
			throws IOException {
		PrintWriter out = response.getWriter();
		
		
		session = request.getSession();
		out.println(session.getAttribute("sessionName"));
		out.println("<br/> Session Creation Time : "+session.getCreationTime());
		out.println("<br/> Session Id : "+session.getId());
		out.println("<br/> Session Last Accessed Time : "+session.getLastAccessedTime());
		out.println("<br/> Session Max Inactive Interval : "+session.getMaxInactiveInterval());
		
	}
}
