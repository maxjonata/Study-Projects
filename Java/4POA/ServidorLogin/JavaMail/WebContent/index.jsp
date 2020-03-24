<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1">
<title>E-mail</title>
</head>
<body>
<form action="Enviar" method="post">
Destinatário: <input type="text" id="to" name="to" size="50"/><br/>
Assunto: <input type="text" id="topic" name="topic" size="53"/><br/>
Mensagem: <textarea rows="4" cols="52" id="message" name="message"></textarea><br/>
<input type="submit" value="Enviar"/>

</form>

</body>
</html>