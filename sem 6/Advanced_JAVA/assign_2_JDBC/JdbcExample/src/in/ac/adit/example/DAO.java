package in.ac.adit.example;

import java.sql.SQLException;

public interface DAO {
	public void createUser(User user) throws SQLException;
	public void deleteUser(String username);
	public void updateUser(User user);
	public void showUser();
	public void showUser(String username);
}
