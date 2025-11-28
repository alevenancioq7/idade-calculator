#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para calcular idade
int calcular_idade(int ano_nascimento, int ano_atual) 
{
    if(ano_nascimento > ano_atual) 
    {
        return -1;
    }
    return ano_atual - ano_nascimento;
}

// Função para classificar idade
void classificar_idade(int idade) 
{
    printf("Classificacao: ");
    
    if(idade < 0) 
    {
        printf("Idade invalida\n");
    } else if (idade < 13) {
        printf("Crianca\n");
    } else if (idade < 18) {
        printf("Adolescente\n");
    } else if (idade < 60) {
        printf("Adulto\n");
    } else {
        printf("Idoso\n");
    }
}

int main() 
{
    int ano_nascimento, ano_atual, idade;
    
    printf("=== CALCULADORA DE IDADE ===\n\n");
    
    // Pegar ano atual
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    ano_atual = tm.tm_year + 1900;
    
    // Pedir ano de nascimento
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano_nascimento);
    
    idade = calcular_idade(ano_nascimento, ano_atual);
    
    // Verificar se é válido
    if (idade < 0) 
    {
        printf("Erro: Ano de nascimento invalido!\n");
        return 1;
    }
  
    printf("\n--- Resultado ---\n");
    printf("Ano de nascimento: %d\n", ano_nascimento);
    printf("Ano atual: %d\n", ano_atual);
    printf("Sua idade e: %d anos\n", idade);
    
    classificar_idade(idade);
    
    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    
    return 0;
}