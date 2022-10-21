#include <stdio.h>

int main()
{
    //Skapr en array som är döpt data och vissar vilka tal den innehåller    
    double data[] = { 7, 0.5, 2, 0.3, 0.1, 0.0, -10, 528.2, 8.0, 7.2, 2.3, 1100, 222 };
    double number = 0;

    //Kollar efter hur stor arrayen behöver vara  
    int length = sizeof(data) / sizeof(data[0]);

    //Hur array ser ut från början   
    printf("Hur arrayn ser ut\n");
    for (int i = 0; i < length; i++) 
    {
        printf("%lg ", data[i]);
    }

    //Sorterar arrayn så att det minsta talet är först
    for (int i = 0; i < length; i++) 
    {
        for (int j = i + 1; j < length; j++)
        {
            if (data[i] > data[j]) 
            {
                number = data[i];
                data[i] = data[j];
                data[j] = number;
            }
        }
    }


    //Hur array ser ut sorterad       
    printf("\nData är nu sorterad\n");
    for (int i = 0; i < length; i++) 
    {
        printf("%lg ", data[i]);
    }
    return 0;
}


	

