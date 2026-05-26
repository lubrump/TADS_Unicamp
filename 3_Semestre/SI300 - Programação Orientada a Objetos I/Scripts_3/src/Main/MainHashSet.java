package Main;

import java.util.HashSet;
import java.util.InputMismatchException;
import java.util.Scanner;

public class MainHashSet {
    public static void main(String[] args) {
        HashSet<String> listaConvidados = new HashSet<>();
        Scanner ler = new Scanner (System.in);

        while (true) {
            System.out.println();
            System.out.println("1- Confirmar presença de convidado");
            System.out.println("2- Remover convidado da lista");
            System.out.println("3- Verificar se convidado está na lista");
            System.out.println("4- Sair");
            System.out.print("Selecione a opção desejada: ");

            int opcao;
            try {
                opcao = ler.nextInt();
                ler.nextLine();
            } catch (InputMismatchException e) {
                System.out.println("Erro: Por favor, digite apenas números inteiros.");
                ler.nextLine();
                continue;
            }

            switch (opcao) {
                case 1:
                    System.out.print("Digite o nome do convidado para confirmar: ");
                    String convidado = ler.nextLine();

                    if (listaConvidados.add(convidado)) {
                        System.out.println("Presença de " + convidado + " confirmada com sucesso!");
                    } else {
                        System.out.println(convidado + " já está confirmado neste evento.");
                    }
                    break;

                case 2:
                    System.out.print("Digite o nome do convidado que deseja remover: ");
                    convidado = ler.nextLine();

                    if (listaConvidados.contains(convidado)) {
                        listaConvidados.remove(convidado);
                        System.out.println("O convidado " + convidado + " foi removido da lista!");
                    } else {
                        System.out.println("O convidado " + convidado + " não foi encontrado na lista!");
                    }
                    break;

                case 3:
                    System.out.print("Digite o nome para buscar na portaria: ");
                    convidado = ler.nextLine();

                    if (listaConvidados.contains(convidado)) {
                        System.out.println("Acesso Autorizado! " + convidado + " está na lista de convidados.");
                    } else {
                        System.out.println("Acesso Negado! " + convidado + " não está na lista.");
                    }
                    break;

                case 4:
                    System.out.println("Encerrando programa...");
                    ler.close();
                    return;

                default:
                    System.out.println("Opção inválida. Tente novamente!");
            }
        }
    }
}