
# strlen_utf8 - Contador de Caracteres UTF-8

Uma função em C para contar caracteres em strings UTF-8, desenvolvida como parte de um projeto acadêmico, que consiste em um Sistema de vendas em Linguagem C.

## 📋 Descrição

Esta função implementa uma versão especializada do `strlen()` para strings UTF-8, com a particularidade de ignorar espaços em branco durante a contagem.

## 🚀 Funcionalidades

- Contagem de caracteres em encoding UTF-8
- Ignora espaços em branco (caractere ASCII 0x20)
- Implementação eficiente com ponteiros
- Compatível com strings C padrão

## 📝 Como Usar

### Parâmetros

-   `str`: Ponteiro para a string UTF-8 a ser analisada
    

### Valor de Retorno

-   Retorna o número de caracteres UTF-8 na string, excluindo espaços
    

### Exemplo de Uso

### Protótipo da Função

   ```c
   int strlen_utf8(char *str) ;


###### Parâmetros

    str: Ponteiro para a string UTF-8 a ser analisada

Valor de Retorno

    Retorna o número de caracteres UTF-8 na string, excluindo espaços

Exemplo de Uso
   
