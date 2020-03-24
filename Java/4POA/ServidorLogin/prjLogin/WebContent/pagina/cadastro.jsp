<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
    
    
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>

	<form method="post" action="../CadastraServlet">
	
	<label>Login:</label>
	<br>
	<input type="text" id="login" name="login"> <br>

	<label>Senha:</label>
	<br>
	<input type="password" id="senha" name="senha"><br> 
		
	<label>Nome:</label>
	<br>
	<input type="text" id="nome" name="nome"><br> 

	<input type="submit" value="Entrar">
</form>


</body>
</html>