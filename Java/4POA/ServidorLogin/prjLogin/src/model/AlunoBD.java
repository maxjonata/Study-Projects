package model;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;

import object.Aluno;

public class AlunoBD {

	public static boolean validaLogin(String login, String senha) {
		ConexaoBD conb = new ConexaoBD();
		conb.iniciaBd();
		Connection con = conb.getConexao();
		PreparedStatement ps;
		try {

			ps = (PreparedStatement) con.prepareStatement("SELECT * from aluno where login=? and senha=?");
			ps.setString(1, login);
			ps.setString(2, senha);
			ResultSet res = (ResultSet) ps.executeQuery();

			while (res.next()) {
				return true;
			}
			return false;

		} catch (SQLException e) {
			// TODO Auto-generated catch block
			return false;

		}
	}

	public static boolean insereAluno(String login, String senha, String nome) {
		ConexaoBD conb = new ConexaoBD();
		conb.iniciaBd();
		Connection con = conb.getConexao();
		PreparedStatement ps;
		try {

			ps = (PreparedStatement) con.prepareStatement("insert into aluno ( login, senha, nome) values (?,?,?)");
			ps.setString(1, login);
			ps.setString(2, senha);
			ps.setString(3, nome);
			ps.executeUpdate();

			return true;

		} catch (SQLException e) {
			return false;
		}
	}

	public static synchronized ArrayList<Aluno> todosUsuarios() {
		ArrayList<Aluno> lAluno = new ArrayList<Aluno>();
		try {
			ConexaoBD conb = new ConexaoBD();
			conb.iniciaBd();
			Connection con = conb.getConexao();
			PreparedStatement ps = (PreparedStatement) con.prepareStatement("SELECT * from aluno order by nome");
			ResultSet res = (ResultSet) ps.executeQuery();
			while (res.next()) {
				Aluno a = new Aluno(res.getString("nome"), res.getString("login"), res.getString("senha"));
				lAluno.add(a);

			}
			ps.close();
			con.close();
			conb.fechaBd();

		} catch (Exception e) {
			lAluno = null;
		}

		return lAluno;

	}

}
