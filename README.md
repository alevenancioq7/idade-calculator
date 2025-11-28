# 🎯 Calculadora de Idade - Projeto DevOps

[![CI Pipeline](https://github.com/alevenancioq7/idade-calculator/actions/workflows/ci.yml/badge.svg)](https://github.com/alevenancioq7/idade-calculator/actions/workflows/ci.yml)

Este projeto é uma **Calculadora de Idade** simples, desenvolvida em **linguagem C**, que se destaca pela implementação de um *pipeline* de **DevOps** completo. O objetivo é demonstrar a aplicação de práticas de Integração Contínua (CI), Testes Automatizados e Contêinerização (Docker) em um projeto de software.

## 💻 Tecnologias Utilizadas

O projeto é construído com base nas seguintes tecnologias:

| Categoria | Tecnologia | Descrição |
| :--- | :--- | :--- |
| **Linguagem** | C | Linguagem de programação principal para a lógica da calculadora. |
| **Contêiner** | Docker | Utilizado para empacotar a aplicação e garantir um ambiente de execução consistente. |
| **CI/CD** | GitHub Actions | Implementação do *pipeline* de Integração Contínua para automação de *build* e testes. |
| **Testes** | `assert.h` | Biblioteca padrão de C para a criação de testes unitários simples. |

## ✨ Funcionalidades

A aplicação oferece as seguintes funcionalidades:

1.  **Cálculo de Idade:** Calcula a idade exata com base no ano de nascimento fornecido pelo usuário e o ano atual.
2.  **Classificação Etária:** Classifica a idade calculada nas seguintes categorias:
    *   **Criança:** 0 a 12 anos
    *   **Adolescente:** 13 a 17 anos
    *   **Adulto:** 18 a 59 anos
    *   **Idoso:** 60 anos ou mais
3.  **Validação de Entrada:** Verifica se o ano de nascimento é válido (não pode ser um ano futuro).

## 🚀 Como Usar

Existem duas formas principais de executar a calculadora: diretamente após a compilação ou utilizando o contêiner Docker.

### 1. Execução Direta (Compilação)

Para compilar e executar o projeto localmente, você precisará de um compilador C (como o GCC) instalado.

```bash
# 1. Compilar o código-fonte
gcc -o idade-calculator src/main.c

# 2. Executar a aplicação
./idade-calculator
```

### 2. Execução via Docker

Para executar a aplicação dentro de um contêiner Docker, siga os passos abaixo:

```bash
# 1. Construir a imagem Docker
docker build -t idade-calculator .

# 2. Executar o contêiner
# O contêiner será executado e o programa solicitará o ano de nascimento.
docker run -it idade-calculator
```

## ⚙️ Estrutura do Projeto

A estrutura de diretórios do projeto é organizada da seguinte forma:

```
.
├── .github/
│   └── workflows/
│       └── ci.yml             # Pipeline de Integração Contínua (CI)
├── src/
│   └── main.c                 # Código-fonte principal da calculadora
├── tests/
│   └── test_age_calculator.c  # Arquivo com os testes unitários
├── Dockerfile                 # Definição para a construção da imagem Docker
└── README.md                  # Este arquivo
```

## ✅ Pipeline de CI/CD

O projeto utiliza o **GitHub Actions** para automatizar o processo de Integração Contínua (CI) a cada *push* para o repositório. O *pipeline* (`.github/workflows/ci.yml`) executa as seguintes etapas:

1.  **Compilação e Teste:**
    *   Compila o código-fonte (`src/main.c`) para criar o executável da aplicação.
    *   Compila o arquivo de testes (`tests/test_age_calculator.c`) para criar o executável de testes.
    *   Executa os testes unitários para garantir que a lógica de cálculo e classificação da idade esteja correta.
2.  **Build da Imagem Docker:**
    *   Constrói a imagem Docker da aplicação, conforme definido no `Dockerfile`.

Este processo garante que qualquer alteração no código seja automaticamente validada e empacotada, mantendo a qualidade e a integridade do projeto.

## 📝 Testes Automatizados

Os testes unitários são implementados em `tests/test_age_calculator.c` e utilizam a função `assert()` da biblioteca padrão de C para verificar a correção das funções principais:

*   `test_calcular_idade()`: Verifica o cálculo da idade para diferentes anos de nascimento, incluindo casos de borda (idade 0 e ano de nascimento futuro).
*   `test_classificar_idade()`: Verifica a classificação correta da idade em todas as categorias etárias definidas.

A execução dos testes é automatizada no *pipeline* de CI, mas também pode ser feita localmente:

```bash
# 1. Compilar o arquivo de testes
gcc -o run_tests tests/test_age_calculator.c src/main.c

# 2. Executar os testes
./run_tests
```
