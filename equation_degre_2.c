#include <stdio.h>
#include <math.h>

typedef struct 
{
    float racine1;
    float racine2;
} racines;


void EquationSecondDegre(float a, float b, float c){
    float discriminant;
    racines solution;
    discriminant = (b * b) - (4*a*c);
    if(discriminant == 0){
        solution.racine1= -b/(2*a);
        printf("la solution est : %f\n", solution.racine1) ;
        
    }
    else if(discriminant > 0){
       solution.racine1 = (-b + sqrt(discriminant)) / (2*a);
       solution.racine2 = (-b - sqrt(discriminant)) / (2*a);
       printf("la solution1 est : %f\nla solution2 est : %f\n", solution.racine1, solution.racine2) ;
        
    }
    else if(discriminant < 0){
        printf("Cette equation n'a pas de solution en dans lR") ;
        
    }  
}

int main(){
    float nombre_1, nombre_2, nombre_3;
    
    printf("Entrer un nombre : ");
    scanf("%f", &nombre_1);

    printf("Entrer un nombre : ");
    scanf("%f", &nombre_2);

    printf("Entrer un nombre : ");
    scanf("%f", &nombre_3);

   EquationSecondDegre(nombre_1, nombre_2, nombre_3);
  return 0;
}