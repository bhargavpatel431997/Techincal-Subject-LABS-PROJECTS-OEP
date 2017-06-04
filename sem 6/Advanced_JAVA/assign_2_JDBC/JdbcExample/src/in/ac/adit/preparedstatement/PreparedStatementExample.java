package in.ac.adit.preparedstatement;

import java.sql.*;

class PreparedStatementExample {

	public static void main(String[] args) {

		try {
			Connection connection = DriverManager.getConnection(
					"jdbc:mysql://localhost:3306/jdbcexample", "root", "");
			
			PreparedStatement statement = connection
					.prepareStatement("insert into login_tbl values(?,?)");
			
			
			
			/*statement.setString(1, "adit2");
			statement.setString(2, "adit123");
			statement.execute();
			*/
			PreparedStatement pspt = connection.prepareStatement("select * from login_tbl where username = ?");
			pspt.setString(1,"adit2");
			
			ResultSet rs = pspt.executeQuery();
			if(rs.next()){
				System.out.println("User Name Already Exits");
			}else{
				System.out.println("Username Is Avaiable");
			}
			
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}