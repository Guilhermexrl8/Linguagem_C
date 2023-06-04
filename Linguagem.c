#include <stdio.h>

int main() {
    int mes, ano, ano_nascimento;
    char nome[50], sexo[10];
    
    // Lista de meses
    char meses[12][20] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    
    // Pede ao usuário para selecionar um mês e ano
    printf("Selecione um mes (1-12): ");
    scanf("%d", &mes);
    
    printf("Digite um ano: ");
    scanf("%d", &ano);
    
    // Imprime o mês e ano selecionados
    printf("Voce selecionou: %s %d\n", meses[mes - 1], ano);
    
    // Pede ao usuário para inserir suas informações pessoais
    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    printf("Digite seu sexo: ");
    scanf("%s", sexo);
    
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &ano_nascimento);
    
    // Exibe as informações pessoais na tela
    printf("\n\n");
    printf("Nome: %s\n", nome);
    printf("Sexo: %s\n", sexo);
    printf("Ano de nascimento: %d\n", ano_nascimento);
    printf("Mes e ano selecionados: %s %d\n", meses[mes - 1], ano);
    
    return 0;
}
