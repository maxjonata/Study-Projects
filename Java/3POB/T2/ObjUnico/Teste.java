class Teste {
   public static void main(String[] args) {

      Unica u = Unica.pegaInstancia();

      Unica v = Unica.pegaInstancia();

      Unica x = Unica.pegaInstancia();

      System.out.println((u == v) && (x == v)); // Deve retornar true

   }

   static public class Unica
   {
      private static Unica instancia;

      public Unica()
      {
         instancia = new Unica();
      }

      public static Unica pegaInstancia()
      {
         return instancia;
      }
   }
 
}