/**************************************
* Trabalho 2 de Programacao de Computadores I - Retangulo 
* Curso de Sistemas da informacao 
* Aluno: Andrea Carlet Turella - matricula: 0050002409 
* Professor: Alex Salgado 
***************************************/


#include <stdio.h>

int main()
{
    
    char caractere;

    //Variaveis de controle de loop
    int i, j;
    
    //Criar variaveis de input
    int altura = 0;
    int lado = 0;
    char sn;
    
    //variavel de controle de saida do programa
    int saida = 0;

    
    
    while ( saida == 0 )
    {
        //input do usuario
        printf( "Tamanho do lado: " );
        scanf( "%d", &lado );
        
        printf( "Tamanho da altura: ");
        scanf( "%d", &altura );
        
        printf( "Caractere que deseja usar: ");
        scanf( " %c", &caractere );        
        
        printf( "Olá, meu nome é Andrea e o retângulo ficou assim:\n" );
        
        for ( i = 0; i < altura; i++ )
        {
            for( j = 0; j < lado; j++ )
            {
                if( i == 0 || i == altura - 1 || j == 0 || j == lado - 1)
                {
                    printf(" %c ", caractere);
                }
                else
                {
                    printf("   ");
                }   
            }
            printf( "\n" );
        }
        
        printf( "Deseja continuar (S/n)?" );
        scanf( " %c", &sn );
        if ( sn == 'n' )
        {
            saida = 1;
        }
    }
    
    return 0;
}