#include <stdio.h>

int main(){
    float total_belanja,diskon,harga;
    int jumlah_transaksi;   

    diskon = 0;

    printf("Masukkan Total Belanja:");
    scanf("%f", &total_belanja);

    if(total_belanja > 1000000){
        diskon = 0.30 * total_belanja;
    }else if(total_belanja >= 550000 && total_belanja <= 1000000){
        diskon = 0.20 * total_belanja;
    }else if(total_belanja >= 200000 && total_belanja <= 500000){
        diskon = 0.10 * total_belanja;
    }else if(total_belanja < 200000){
        diskon = 0;
    }

    printf("Masukkan Jumlah Transaksi:");
    scanf("%d", &jumlah_transaksi);
    if(jumlah_transaksi >= 4){
        diskon += 0.20 * total_belanja;
    }else{
        diskon += 0;
    }

    harga = total_belanja - diskon;
    printf("Total Yang Harus Anda Bayar Adalah : RP. %.2f\n",harga);

    return 0;
}