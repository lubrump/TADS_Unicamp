package Main;

import Model.ClassElemento;
import java.util.Stack;
import java.util.EmptyStackException;

public class MainPilha {
    public static void main(String[] args) {
        Stack<ClassElemento> pilha = new Stack<>();

        System.out.println("Inserindo 5 elementos na pilha:");
        for (int i = 1; i <= 5; i++) {
            ClassElemento elem = new ClassElemento(i * 10);
            pilha.push(elem);
            System.out.println("Empilhado: " + elem);
        }

        System.out.println("Estado atual da pilha: " + pilha);

        try {
            System.out.println("Topo da pilha:");
            ClassElemento topo = pilha.peek();
            System.out.println("O elemento no topo é: " + topo);
        } catch (EmptyStackException e) {
            System.out.println("Erro: A pilha está vazia.");
        }

        System.out.println("Desempilhando elementos até esvaziar e estressar a estrutura:");

        for (int i = 1; i <= 7; i++) {
            try {
                ClassElemento removido = pilha.pop();
                System.out.println("Tentativa " + i + " Desempilhado com sucesso: " + removido);
            } catch (EmptyStackException e) {
                System.out.println("Tentativa " + i + " Erro: " + e + " (A pilha está vazia!)");
            }
        }
    }
}