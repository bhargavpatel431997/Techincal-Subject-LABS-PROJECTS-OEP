import java.io.*;
import java.net.*;
import java.util.Scanner;
public class Server {

	public static void main(String[] args) throws Exception 
	{
		ServerSocket ss=new ServerSocket(7888);
		Socket s=ss.accept();
		DataInputStream din=new DataInputStream(s.getInputStream());
		String str;
		str=din.readUTF();
		System.out.println("Client:\t"+str);
		DataOutputStream dout=new DataOutputStream(s.getOutputStream());
		DataInputStream msg=new DataInputStream(System.in);
		while(true)
		{
			str=din.readUTF();
			System.out.print("Client:\t"+str);
			System.out.print("Server:\t");
			str=msg.readLine();
			dout.writeUTF(str);
		}

	}

}
