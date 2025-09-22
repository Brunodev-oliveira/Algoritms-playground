
# strlen_utf8 - Contador de Caracteres UTF-8

Uma função em C para tranformar string para um formato capitalizado(primeira letra Maíuscula), com suporte ao Português. Desenvolvida como parte de um projeto acadêmico, que consistia em um Sistema de vendas em Linguagem C.

## 📋 Descrição

Esta função implementa uma código C de baixo nìvel que garante que qualquer string passado como parâmetro seja tranformada em um formato capitalizado. A função `capitalized_case()`, percorre byte a byte de uma string conferindo e tranformando a string, de modo que independende da forma que ela foi escrita no fim ela estarã em seu formato capitalizado.az a contagem corretamente em caso de caracteres UTF-8 e retorna os caracteres vazio como parte da contagem, algo indesejável em caso de tratamento de nomes compostos por exemplo. 


## 🚀 Funcionalidades

- Contagem de caracteres em encoding UTF-8
- Ignora espaços em branco (caractere ASCII 0x20)
- Implementação eficiente com ponteiros
- Compatível com strings C padrão

## 📝 Como Usar

### Protótipo da Função

 
  ```c 
  int strlen_utf8(char *str);
  ```

### Parâmetros

-   `str`: Ponteiro para a string UTF-8 a ser analisada
    

### Valor de Retorno

-   Retorna o número de caracteres UTF-8 na string, excluindo espaços
    

### Exemplo de Uso

```c
#include <stdio.h>
	int main() {
	    char texto = "Hello world";
	    int count = strlen_utf8(&texto);
	    printf("Caracteres (sem espaços): %d\n", count);
	    return 0;
	}
   ```

## 📊 Lógica de Contagem

A função utiliza a seguinte lógica:

-   Percorre a string byte a byte
    
-   Considera apenas bytes ≤ 0xBF (parte de caracteres UTF-8)
    
-   Ignora especificamente o byte 0x20 (espaço em branco)
    
-   Incrementa o contador para bytes válidos
    

## 🎯 Aplicações

-   Processamento de texto multilíngue
    
-   Análise de strings UTF-8
    
-   Projetos acadêmicos sobre encoding de caracteres
    
-   Sistemas que necessitam de contagem precisa de caracteres
    

## 📚 Disciplina

Desenvolvido como parte do projeto de Programação de computadores 2 na Faculdade UniLasalle-RJ, Niterói.

## 👨‍💻 Autor

**Bruno Pereira de Oliveira**

-   GitHub: https://github.com/Brunodev-oliveira
    
-   LinkedIn: https://www.linkedin.com/in/brunodev-oliveira/
    

## 📄 Licença

Este projeto está sob a licença MIT. Veja o arquivo LICENSE para mais detalhes.





