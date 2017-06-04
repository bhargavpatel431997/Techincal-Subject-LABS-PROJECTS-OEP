package in.ac.adit.example;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class UserImpl implements DAO {

	Connection connection = null;
	Statement statement = null;
	ResultSet resultSet = null;
	String query = null;

	public UserImpl() {
		// TODO Auto-generated constructor stub
		try {
			connection = DriverManager.getConnection(
					"jdbc:mysql://localhost:3306/jdbcexample", "root", "");
			statement = connection.createStatement();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

	}

	@Override
	public void createUser(User user) throws SQLException {
		// TODO Auto-generated method stub
		query = "insert into login_tbl values('" + user.getUsername() + "','"
				+ user.getPassword() + "')";
		System.out.println(query);
		statement.execute(query);

	}

	@Override
	public void deleteUser(String username) {
		// TODO Auto-generated method stub
		query = "delete from login_tbl where username = '" + username + "'";
		try {
			statement.execute(query);
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	@Override
	public void updateUser(User user) {
		// TODO Auto-generated method stub
		query = "update login_tbl set password = '" + user.getPassword()
				+ "' where username = '" + user.getUsername() + "'  ";
		try {
			statement.execute(query);
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

	}

	@Override
	public void showUser() {
		// TODO Auto-generated method stub
		query = "select * from login_tbl";
		try {
			resultSet = statement.executeQuery(query);
			while (resultSet.next()) {
				System.out.println(resultSet.getString("username") + "- "
						+ resultSet.getString("password"));
			}

		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

	@Override
	public void showUser(String username) {
		// TODO Auto-generated method stub
		query = "select * from login_tbl where username = '" + username + "'";
		try {
			resultSet = statement.executeQuery(query);
			if (resultSet.next()) {
				System.out.println("Username = " + username + "Password "
						+ resultSet.getString("password"));
			} else {
				System.out.println("Username Not Avaiable");
			}

		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

	}

}
