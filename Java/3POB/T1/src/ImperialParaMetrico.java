/*  1. [IMPERIAL] No sistema imperial são utilizadas as seguintes medidas lineares:
 *  1 pé = 12 polegadas
 *  1 jarda = 3 pés
 *  1 milha = 1760 jardas
 *  Considerando que 1 polegada equivale a 25,3995 milímetros no sistema métrico, 
 *  faça o programa que converta um valor informado em centímetros para cada uma das unidades do sistema imperial citadas acima.
 */
import java.util.Scanner;

public class ImperialParaMetrico {
    public static void main(String[] args)
    {
        double cmToInches = 25.3995; //Pesquisando descobri que 1 polegada equivale na verdade a 2.54 cm, mas mantive assim pois pede-se para se considerar isso.
        long mile, yard, foot;
        mile = yard = foot = 0;
        Scanner scan= new Scanner(System.in);
        System.out.println("Escreva uma distancia em centimetros:");
        double cm = scan.nextDouble();
        double inches = cm / cmToInches;

        if(inches > 12)
        {
            foot = (long)((long)inches / 12);
            inches-= foot*12;

            if(foot > 3)
            {
                yard = (long)(foot / 3);
                foot -= yard*3;

                if(yard > 1760)
                {
                    mile = (long)(yard / 1760);
                    yard -= mile*1760;
                }
            }
        }

        System.out.println("Essa distância em sistema imperial seria:");
        System.out.println("Polegadas: " + inches);
        System.out.println("Pes: " + foot);
        System.out.println("Jardas: " + yard);
        System.out.println("Milhas: " + mile);

    }
}