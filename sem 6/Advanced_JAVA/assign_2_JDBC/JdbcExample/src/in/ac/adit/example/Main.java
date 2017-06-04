package in.ac.adit.example;

import java.sql.SQLException;

public class Main {

	public static void main(String[] args) throws SQLException {
		// TODO Auto-generated method stub
			User user = new User();
			user.setUsername("xyz");
			user.setPassword("abc123");
			UserImpl userImpl = new UserImpl();
			//userImpl.createUser(user);
			
			//userImpl.showUser();
			//userImpl.showUser("nayan1");
			//userImpl.deleteUser("xyz");
			//userImpl.showUser();
			userImpl.updateUser(user);
	}

}
	