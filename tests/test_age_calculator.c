#include <stdio.h>
#include <assert.h>

int calcular_idade(int ano_nascimento, int ano_atual) 
{
    if(ano_nascimento > ano_atual) 
    {
        return -1;
    }
    return ano_atual - ano_nascimento;
}

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

// Testes
void test_calcular_idade() 
{
    printf("Testando calculo de idade...\n");
    assert(calcular_idade(2000, 2024) == 24);
    assert(calcular_idade(1990, 2024) == 34);
    assert(calcular_idade(2024, 2024) == 0);
    assert(calcular_idade(2025, 2024) == -1);
    printf("Calculo de idade OK!\n");
}

void test_classificar_idade() 
{
    printf("Testando classificacao...\n");
    classificar_idade(10);
    classificar_idade(15);
    classificar_idade(30);
    classificar_idade(70);
    printf("Classificacao OK!\n");
}

int main() 
{
    printf("=== EXECUTANDO TESTES ===\n\n");
    
    test_calcular_idade();
    test_classificar_idade();
    
    printf("\nTODOS OS TESTES PASSARAM!\n");
    printf("Pressione ENTER para sair...");
    getchar();
    return 0;
}