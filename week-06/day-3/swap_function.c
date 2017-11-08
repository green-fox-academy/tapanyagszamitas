#include <stdio.h>

int main(){
    //0 és 1 kivételével (mivel ezek nem prímek) az összes számot prímnek feltételezzük (1)
    int nemnegativ_egesz_szamok[10001];
    int i,j;
    nemnegativ_egesz_szamok[0]=0;
    nemnegativ_egesz_szamok[1]=0;
    for(i=2;i<=10000;i++){
        nemnegativ_egesz_szamok[i]=1;
    }
    //Végigmegy a számokon 2-tõl a felsõ korlátig és ha az prím, akkor a többszöröseit hamissá (0) teszi
    for(i=2;i*i<=10000;i++){
        if(nemnegativ_egesz_szamok[i]==1){
            for(j=i*i;j<=10000;j+=i){
                nemnegativ_egesz_szamok[j]=0;
            }
        }
    }
    //Kiírjuk a képernyõre a prímszámokat
    for(i=0;i<=10000;i++){
        if(nemnegativ_egesz_szamok[i]==1){
            printf("%d, ",i);
        }
    }
    return 0;
}
