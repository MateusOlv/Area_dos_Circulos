#include <stdio.h>
#include <locale.h>

#define PI 3.1415
#define N 2

struct Circulo{
	float X; // X e Y são as coordenadas do centro do círculo
	float Y;
	float Raio;
};

float CalcArea(struct Circulo c){
	float area = PI * (c.Raio * c.Raio);
	return area;
}

int main(){
	setlocale (LC_ALL, "portuguese_brazil");
	
	struct Circulo circulos[N];
	int i; 
	float area[N]; 
	float maior = 0;
		
	for(i = 0; i < N; i++){
		printf("Digite o ponto X: ");
		scanf("%f", &circulos[i].X);

		printf("Digite o ponto Y: ");
		scanf("%f", &circulos[i].Y);
		
		printf("Digite o raio: ");
		scanf("%f", &circulos[i].Raio);
		
		system("cls");
	}
	
	for(i = 0; i < N; i++) area[i] = CalcArea(circulos[i]);

	for(i = 0; i < N; i++){
		if(area[i] > maior) maior = area[i];
	}
	
	system("cls");
	
	for(i = 0; i < N; i++) printf("Área do círculo %d = %.2f\n", i + 1, area[i]);
	
	printf("\nMaior área = %.2f", maior);
	
	return 0;
}
