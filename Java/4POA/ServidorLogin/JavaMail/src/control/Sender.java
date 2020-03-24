package control;

import javax.mail.*;
import javax.mail.internet.*;
import java.util.*;

public class Sender {

	
	public static String send(String smtpServer, String to, String subject, String body)  {
		try {
			Properties props = System.getProperties();
			// -- Attaching to default Session, or we could start a new one --
		    props.put("mail.smtp.host", smtpServer);
		    props.put("mail.smtp.socketFactory.port", "465");
            props.put("mail.smtp.socketFactory.class", "javax.net.ssl.SSLSocketFactory");
            props.put("mail.smtp.auth", "true");
            props.put("mail.smtp.port", "465");
            
            Session session = Session.getDefaultInstance(props,
                    new javax.mail.Authenticator() {
                         protected PasswordAuthentication getPasswordAuthentication() 
                         {
                               return new PasswordAuthentication("ruanemanuellaedavino@gmail.com", "123456aB");
                         }
                    });
            
		    // -- Create a new message --
		    Message msg = new MimeMessage(session);
		    // -- Set the FROM and TO fields --
		    msg.setRecipients(Message.RecipientType.TO,
		    InternetAddress.parse(to, false));
		    msg.setSubject(subject);
		    msg.setText(body);
		    msg.setHeader("X-Mailer", "LOTONtechEmail");
		    msg.setSentDate(new Date());
		    // -- Send the message --
		    Transport.send(msg);
		    return "Mensagem enviada com sucesso!";
	    }
	    catch (Exception ex) {
	    	ex.printStackTrace();
	    	return "Ocorreu um erro!";
	    }
	}
}
