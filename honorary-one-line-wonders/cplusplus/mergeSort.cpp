#include <bits/stdc++.h>
using namespace std;
void merge(int v[], int inicio, int curs, int fim){
    //descoberta dos limites do array
    int tam_antes, tam_depois;
    tam_antes = curs - inicio +1;
    tam_depois = fim - curs;

    //alocacao de subvetores
    int *parte_antes, *parte_depois;
    parte_antes = new int[tam_antes];
    parte_depois = new int[tam_depois];

    //copia para subvetores
    for(int i = 0; i < tam_antes; i++){
        parte_antes[i] = v[inicio +i];
    }
    for(int i = 0; i < tam_depois; i++){
        parte_depois[i] = v[curs +1 +i];
    }

    //merge
    int ind_p1 = 0, ind_p2 = 0, sub_parte = inicio;
    while((ind_p1 < tam_antes) && (ind_p2 < tam_depois)){
        if(parte_antes[ind_p1]<= parte_depois[ind_p2]){
            v[sub_parte] = parte_antes[ind_p1];
            ind_p1++;
        }else{
            v[sub_parte] = parte_depois[ind_p2];
            ind_p2++;
        }
        sub_parte++;
    }

    //união das sobras
    while(ind_p1<tam_antes){
        v[sub_parte] = parte_antes[ind_p1];
        ind_p1++;
        sub_parte++;
    }
    while(ind_p1 <tam_depois){
        v[sub_parte] = parte_depois[ind_p2];
        ind_p2++;
        sub_parte++;
    }

}

void merge_sort(int v[], int inicio, int fim){
    int curs = inicio +(fim - inicio)/2;
    if(inicio < fim){
        //chamando a funcao para cada parte
        merge_sort(v, inicio,curs);
        merge_sort(v, curs+1, fim);
        //misturando as partes, quando acabar as chamadas recursivas da propria funcao
        merge(v, inicio, curs, fim);
    }
}
int main(){
    int array[10];
    srand(time(0));
    for(int i = 0; i < 10; i++){
        array[i] = rand()%100;
    }

    printf("Array before sorting\n");
    for(int i = 0; i < 10; i++){
        printf("%d ",array[i]);
    }
    printf("\n");

    merge_sort(array,0,10);
    printf("Array after sorting\n");
    for(int i = 0; i < 10; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
