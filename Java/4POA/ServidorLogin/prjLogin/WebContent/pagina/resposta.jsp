<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<%@ page import="model.AlunoBD" %>
<%@ page import="java.util.*" %>
<%@ page import="object.Aluno" %>
<!DOCTYPE html>
<html>
	<head>
		<meta charset="ISO-8859-1">
		<title>Insert title here</title>
	</head>
	<body>
		<table border=1>
		<tr><td>Nome</td><td>Senha</td></tr>
		
		<%
		ArrayList<Aluno> lista = AlunoBD.todosUsuarios();
		Iterator<Aluno> it = lista.iterator();
		
		while(it.hasNext())
		{
			Aluno al = (Aluno)it.next();
			
			%>
			<tr><td><%=al.getNome()%></td><td><%=al.getSenha()%></td></tr>
			<%	
			
		}
		%>

		</table>
	</body>
</html>