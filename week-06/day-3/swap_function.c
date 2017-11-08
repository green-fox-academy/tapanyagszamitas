#include <stdio.h>

int main(){
    //0 �s 1 kiv�tel�vel (mivel ezek nem pr�mek) az �sszes sz�mot pr�mnek felt�telezz�k (1)
    int nemnegativ_egesz_szamok[10001];
    int i,j;
    nemnegativ_egesz_szamok[0]=0;
    nemnegativ_egesz_szamok[1]=0;
    for(i=2;i<=10000;i++){
        nemnegativ_egesz_szamok[i]=1;
    }
    //V�gigmegy a sz�mokon 2-t�l a fels� korl�tig �s ha az pr�m, akkor a t�bbsz�r�seit hamiss� (0) teszi
    for(i=2;i*i<=10000;i++){
        if(nemnegativ_egesz_szamok[i]==1){
            for(j=i*i;j<=10000;j+=i){
                nemnegativ_egesz_szamok[j]=0;
            }
        }
    }
    //Ki�rjuk a k�perny�re a pr�msz�mokat
    for(i=0;i<=10000;i++){
        if(nemnegativ_egesz_szamok[i]==1){
            printf("%d, ",i);
        }
    }
    return 0;
}
