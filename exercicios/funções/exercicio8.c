#include <stdio.h>

// 8. **Conversão entre temperaturas
// Celsius e Fahrenheit:**
// Crie um aplicativo que permita ao
// usuário escolher entre entrar com a
// temperatura em Celsius ou Fahrenheit. A
// conversão é realizada através de um
// comando `switch`.

float convertFahrenheitToCelcius(float temperature) {
  return (temperature - 32) / 1.8;
}

float convertCelciusToFahrenheit(float temperature) {
  return 1.8 * temperature + 32;
}

int main() {
  int option;
  float temperature;

  puts("Digite 1 para converter de Fahrenheit para Celcius e 2 para converter de Celcius para Fahrenheit");
  scanf("%d", &option);
  puts("Digite a temperatura");
  scanf("%f", &temperature);

  switch (option) {
  case 1:
    printf("%.2f vale %.2f em Celcius", temperature, convertFahrenheitToCelcius(temperature));
    break;
  case 2:
    printf("%.2f vale %.2f em Fahrenheit", temperature, convertCelciusToFahrenheit(temperature));
    break;
  
  default:
    puts("Digite uma opção válida");
    break;
  }


  return 0;
}