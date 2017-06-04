package in.ac.adit.connection;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.util.Properties;

public class Example {
	public static void main(String[] args) {
		try {
			Connection connection1 = DriverManager.getConnection(
					"jdbc:mysql://localhost:3306/demo_db", "root",
					"");
			System.out.println("Connection 1"+connection1.getMetaData().getDatabaseProductName());
			
		
			
			Properties properties = new Properties();
			properties.setProperty("user", "adit");
			properties.setProperty("password","adit");
		
			Connection connection3 = DriverManager.getConnection(
					"jdbc:mysql://localhost:3306/demo_db",properties);
			System.out.println(connection3.getMetaData().getDatabaseProductName());
			
			
			
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}
