#include <stdio.h>

int main() {
    int temperature;
    printf("Enter the temperature in Celsius: ");
    scanf("%d", &temperature);
    
    if (temperature < 0) 
    {
        printf("Brrrr! It's freezing cold! Stay warm.\n");
    } 
    else if (temperature >= 0 && temperature <= 20) 
    {
        printf("It's a bit chilly.Grab your jacket!\n");
    }
     else if (temperature > 20 && temperature <= 30) 
     {
        printf("It's a pleasant weather. Enjoy your day!\n");
    } else
     {
        printf("It's quite warm! Stay hydrated\n");
    }

    return 0;
}