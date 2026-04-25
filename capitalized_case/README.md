
# capitalized_case - Formatador de strings

Uma função em C para tranformar strings para um formato capitalizado(primeira letra Maíuscula), com suporte ao Português. Desenvolvida como parte de um projeto acadêmico, que consistia em um Sistema de vendas em Linguagem C.

## 📋 Descrição

Esta função implementa um código C de baixo nìvel que garante que qualquer string passada como parâmetro seja tranformada em um formato capitalizado. A função `capitalized_case()`, percorre byte a byte de uma string conferindo e tranformando a string, de modo que independentemente da forma que ela foi escrita, no fim ela estará em seu formato capitalizado. Faz a contagem corretamente em caso de caracteres UTF-8 e ignora os caracteres vazio(espaço em branco) na contagem, algo indesejável em caso de tratamento de nomes compostos por exemplo. 


## 🚀 Funcionalidades

- Contagem de caracteres em encoding UTF-8
- Ignora espaços em branco (caractere ASCII 0x20)
- Implementação eficiente com ponteiros
- Compatível com strings C padrão

## 📝 Como Usar

### Protótipo da Função

 
  ```c 
  int capitalize_case(char *str);
  ```

### Parâmetros

-   `str`: Ponteiro para a string que será formatada
    

### Valor de Retorno
-   sem retorno de função
-   modifica diretamente a string para formato capitalizado
    

### Exemplo de Uso

```c
#include <stdio.h>
	int main() {
	    char texto = "hello world";
	    capitalized_case(&texto);
	    printf("String em formato capitalizado: %s\n", texto);
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

-   Processamento de texto em Português
    
-   Padronização de dados
    
-   Projetos acadêmicos sobre encoding de caracteres
    
  
    

## 📚 Disciplina

Desenvolvido como parte do projeto de Programação de computadores 2 na Faculdade UniLasalle-RJ, Niterói.

## 👨‍💻 Autor

**Bruno Pereira de Oliveira**

-   GitHub: https://github.com/Brunodev-oliveira
    
-   LinkedIn: https://www.linkedin.com/in/brunodev-oliveira/
    

## 📄 Licença

Este projeto está sob a licença MIT. Veja o arquivo LICENSE para mais detalhes.





