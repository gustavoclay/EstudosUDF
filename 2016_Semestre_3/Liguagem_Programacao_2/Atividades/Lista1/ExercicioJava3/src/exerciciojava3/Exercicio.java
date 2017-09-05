/*
3.	Imprima todos os múltiplos de 3, entre 1 e 100
 */
package exerciciojava3;
public class Exercicio {
    public static void main(String[] args) {
        for(int i=1; i<=100; i++){
            if(!((i % 3) == 0)){
            } else {
                System.out.println(i);
            }
        }
    }
}
