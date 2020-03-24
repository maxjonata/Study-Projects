package control;

public class Principal {

	public static void main(String[] args) {
		//System.out.println(Sender.send("smtp.gmail.com", "ruanemanuellaedavino@gmail.com", "o melhor", "ruan"));
		SendMail sm = new SendMail("smtp.gmail.com","465");

		sm.sendMail( "ruanemanuellaedavino@gmail.com","ruanemanuellaedavino@gmail.com", "o melhor", "ruan");
	}

}
