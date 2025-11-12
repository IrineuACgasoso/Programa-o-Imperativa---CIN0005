#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct Sinal {
    int amplitude;
    int frequencia;
    float energia;
    char periodico[10];
 } Sinal;


int main() {

    Sinal sinal_cremosa;
    int pontuacao_cremosa = 0;
    
    Sinal* sinal_inimigos;
    int pontuacao_inimigo = 0;

    
    scanf("%d %d %f", sinal_cremosa.amplitude, sinal_cremosa.frequencia, sinal_cremosa.energia);
    fgets(sinal_cremosa.periodico, 10, stdin);
    while (scanf != EOF)
    {
        scanf("%d %d %f", sinal_inimigos->amplitude, sinal_inimigos->frequencia, sinal_inimigos->energia);
        fgets(sinal_inimigos->periodico, 10, stdin);


        //BATALHA 
        //Amplitude  
        if (sinal_cremosa.amplitude > sinal_inimigos->amplitude)
        {
            pontuacao_cremosa++;
        }
        else if (sinal_cremosa.amplitude < sinal_inimigos->amplitude)
        {
            pontuacao_inimigo++;
        }

        //Frequencia
        if (sinal_cremosa.frequencia % sinal_inimigos->frequencia == 0)
        {
            pontuacao_cremosa++;
        }
        else if (sinal_inimigos->frequencia % sinal_cremosa.frequencia == 0)
        {
            pontuacao_inimigo++;
        }
        else if (sinal_cremosa.frequencia == sinal_inimigos->frequencia)
        {
            pontuacao_cremosa++;
            pontuacao_inimigo++;
        }
        
        //Energia 
        if (sinal_cremosa.energia > sinal_inimigos->energia)
        {
            pontuacao_cremosa++;
        }
        else if (sinal_cremosa.energia < sinal_inimigos->energia)
        {
            pontuacao_inimigo++;
        }

        //Periodico
        if (sinal_cremosa.periodico == "TRUE" && sinal_inimigos->periodico == "FALSE")
        {
            pontuacao_cremosa++;
        }
        else if (sinal_cremosa.periodico == "FALSE" && sinal_inimigos->periodico == "TRUE")
        {
            pontuacao_inimigo++;
        }
        
        
    }
    



    return 0;
}