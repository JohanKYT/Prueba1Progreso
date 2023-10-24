#include <stdio.h>
//Kevin Johan Maquis Calle

int main(){

    int numingresa,cont2,numbinario;

    printf("\nIngrese el numero qe quiere convertir en binario: ");
    scanf("%d",&numingresa);

    if (numingresa<0)
    {
        numingresa=-numingresa;
    }
    printf("El numero binario es");
    int cont1=numingresa/2;
    while (cont1!=0)
    {
        cont2=numingresa%2;
        numingresa/=2;

        if (cont2==0)
        {
            numbinario=1;
            printf("%d",numbinario);
        }
        else
        {
            numbinario=0;
            printf("%d",numbinario);
        }
        
        cont1--;
    }
    





}