package Main;

import java.util.HashMap;
import java.util.InputMismatchException;
import java.util.Scanner;

public class MainHashMap {
    public static void main(String[] args) {
        HashMap<String, String> mapaAlunos = new HashMap<>();
        Scanner ler = new Scanner (System.in);

        while (true) {
            System.out.println();
            System.out.println("1- Cadastrar aluno");
            System.out.println("2- Remover aluno");
            System.out.println("3- Buscar aluno");
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
                    System.out.print("Digite o número da matrícula: ");
                    String matricula = ler.nextLine();
                    System.out.print("Digite o nome do aluno: ");
                    String nomeAluno = ler.nextLine();

                    if (mapaAlunos.containsKey(matricula)) {
                        System.out.println("Erro: A matrícula " + matricula + " já está cadastrada para outro aluno!");
                    } else {
                        mapaAlunos.put(matricula, nomeAluno);
                        System.out.println("Aluno " + nomeAluno + " cadastrado com sucesso!");
                    }
                    break;

                case 2:
                    System.out.print("Digite a matrícula do aluno que deseja remover: ");
                    matricula = ler.nextLine();

                    String alunoRemovido = mapaAlunos.remove(matricula);

                    if (alunoRemovido != null) {
                        System.out.println("O aluno " + alunoRemovido + " (Matrícula: " + matricula + ") foi removido!");
                    } else {
                        System.out.println("Matrícula " + matricula + " não encontrada!");
                    }
                    break;

                case 3:
                    System.out.print("Digite a matrícula que deseja buscar: ");
                    matricula = ler.nextLine();

                    String alunoEncontrado = mapaAlunos.get(matricula);

                    if (alunoEncontrado != null) {
                        System.out.println("Aluno localizado: " + alunoEncontrado);
                    } else {
                        System.out.println("A matrícula " + matricula + " não está cadastrada.");
                    }
                    break;

                case 4:
                    System.out.println("Saindo do sistema...");
                    ler.close();
                    return;

                default:
                    System.out.println("Opção inválida. Tente novamente!");
            }
        }
    }
}