//Faça um programa Java SE que apresente em tela uma contagem regressivaa de 50 a 0,
//utilizando-se a estrutura de repetição de sua preferência. No entanto, crie um metodo para fazer a saída de tela,
//de modo que o controle do laço esteja no metodo main(), mas a interface de saída esteja no seu metodo (ex: printNumber()).
//O objetivo é a divisão de tarefa entre métodos e o reforço do conceito de que código estático só pode chamar código estático.
public class CodEstatico {
    public void print(int i) {
        System.out.println(i);
    }
    public static void main(String[] args){
        CodEstatico obj = new CodEstatico();
        for (int i = 50; i > -1; i--){
            obj.print(i);
        }
    }
}
