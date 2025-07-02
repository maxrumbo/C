// 12S24037 - Maxwell Avinda Rumahorbo
// 12S24020 - Joice Anastasya Napitupulu

#include <stdio.h>
int main() {
  int u;
  int b;
  scanf("%d %d", &u, &b);
  int waktu_per_transaksi = 3;
  int max_per_transaksi = 3;
  int antrean_ucok = (u + max_per_transaksi - 1) / max_per_transaksi;
  int antrean_butet = (b + max_per_transaksi -1) / max_per_transaksi;
  int waktu_tunggu_ucok = 0, waktu_tunggu_butet = 0, total_waktu = 0;
  
  while (antrean_ucok > 0 || antrean_butet > 0) {
    if (antrean_ucok > 0) {
        total_waktu += waktu_per_transaksi;
        waktu_tunggu_ucok = total_waktu;
        antrean_ucok--;
    }
    if (antrean_butet > 0) {
        total_waktu += waktu_per_transaksi;
        waktu_tunggu_butet = total_waktu;
        antrean_butet--;
    }
}
printf("%d\n%d\n%d\n", waktu_tunggu_ucok, waktu_tunggu_butet, waktu_tunggu_ucok+waktu_tunggu_butet);
return 0;   
}