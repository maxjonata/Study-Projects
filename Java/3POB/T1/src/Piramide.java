/*  2. [PIRAMIDE] Escreva um programa que mostre no console uma pirâmide de números,
 *  com um número de linhas entre 1 e 9, fornecido pelo usuário. Caso o número esteja fora do limite,
 *  mostrar mensagem de erro e solicitar novamente o número. Por exemplo, se o número de linhas for 4,
 *  o resultado será:
 *     1
 *    121
 *   12321
 *  1234321
 */

import java.util.Scanner;

public class Piramide
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        byte qtdLinhas;

        do
        {
            System.out.println("Escolha a quantidade de linhas da piramide entre 1 e 9:");
            qtdLinhas = scan.nextByte();
            if(qtdLinhas < 1 || qtdLinhas > 9) System.out.println("ERRO: numero invalido");;
        } while(qtdLinhas < 1 || qtdLinhas > 9);

        for(byte x = 1; x <= qtdLinhas ; x++)
        {
            System.out.printf("%n");
            for(byte y = (byte)((byte)(x - qtdLinhas) + 1); y <= x ; y++)
            {
                System.out.print(((y > 0)?y:" "));
            }
            for(byte y = (byte)(x-1); y > 0 ; y--)
            {
                System.out.print(y);
            }
        }
    }
}