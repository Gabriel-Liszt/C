#include <stdio.h>

int main(){

    char classe;
    float kwh, valor_consumo, valor_a_pagar, tarifa;

    printf("Digite qual a classe consumidora e seu consumo em" "quilowatts/hora: ");
    scanf("%c %f", &classe, &kwh);

    if(classe != 'a' && classe != 'b' && classe != 'c'){
        printf("Digite somente uma das classes: a, b ou c");
    }else if(classe == 'a'){
        tarifa = 0.5;
        valor_consumo = kwh * tarifa;
        valor_a_pagar = valor_consumo + (0.3 * valor_consumo);
        printf("O valor que voce tera que pagar eh %fR$", valor_a_pagar);
    }else if(classe == 'b'){
        tarifa = 0.8;   
        valor_consumo = kwh * tarifa; 
        valor_a_pagar = valor_consumo + (0.3 * valor_consumo); 
        printf("O valor que voce tera que pagar eh %fR$", valor_a_pagar);      
    }else{
        tarifa = 1.0;
        valor_consumo = kwh * tarifa;
        valor_a_pagar = valor_consumo + (0.3 * valor_consumo);
        printf("O valor que voce tera que pagar eh %fR$", valor_a_pagar);
    }

    return 0;
}
