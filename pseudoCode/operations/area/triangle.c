#include <stdio.h>

float areaTriangle(float base, float height){
  float area;

  area = (base * height) / 2;

  return area;
}

int main(void){
  float base, height, area;
 
  printf("Digite o tamanho da base do triangulo em cm: ");
  scanf("%.2f\n", &base);

  printf("Digite a altura do triangulo em cm: ");
  scanf("%.2f\n", &height);
  
  areaTriangle(base, height);

  return 0;
}
