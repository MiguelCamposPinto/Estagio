#include <stdio.h>
#include <string.h>

int main() {
    char msg[100]= "Oi, tudo bem?";
    printf("Digite uma string: ");

    int inicio = 0;
    int fim = strlen(msg) - 1;
    char temp;
    while (inicio < fim) {
        temp = msg[inicio];
        msg[inicio] = msg[fim];
        msg[fim] = temp;
        inicio++;
        fim--;
    };
    printf("%s\n", msg);
    return 0;
}
