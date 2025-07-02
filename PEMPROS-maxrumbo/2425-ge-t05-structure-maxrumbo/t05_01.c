// 12S24037 - Maxwell Rumahorbo
// 12S24020 - Joice Anastasya Napitupulu

#include <stdio.h>
#include <string.h>

// Gender enumeration
enum gender {MALE,FEMALE};

// Register Struct
struct mahasiswa {
  char nama[100], nim[20];
  char tahun_masuk[5];
  enum gender gender;
};

int main(int _argv, char **_argc) {
  // Deklarasi Variabel
  char teks[100], sex[10], masukan[100];
  int lakilaki = 0, perempuan = 0;
  int i = 0;

  struct mahasiswa mhs[100];

  scanf("%s", teks);
  if (strcmp(teks, "register") == 0) {
     // Input
    while(1) {
      char *token;
      scanf("%s", masukan);
      if (strcmp(masukan, "---") == 0) {
        break;
      } else {
        strcpy(mhs[i].nama, strtok(masukan, "|"));
        strcpy(mhs[i].nim, strtok(NULL, "|"));
        strcpy(mhs[i].tahun_masuk, strtok(NULL, "|"));
      
        token = strtok(NULL, "|");
        if (strcmp(token, "MALE") == 0) {
          mhs[i].gender = MALE;
          lakilaki++;
        } else if (strcmp(token, "FEMALE") == 0) {
          mhs[i].gender = FEMALE;
          perempuan++;
        }
      i++;
      }
    }
  } else {

  }
  
  // Output 
  printf("%d|%d", lakilaki, perempuan);
  return 0;
}


// Kode Sebelumnya
/*
#include <stdio.h>
#include <string.h>

// Gender enumeration
enum gender {MALE,FEMALE};

// Register Struct
struct mahasiswa {
  char nama[100], nim[20];
  char tahun_masuk[5];
  enum gender sex;
};

int main(int _argv, char **_argc) {
  // Deklarasi Variabel
  char teks[100], sex[10], masukan[100];
  int lakilaki, perempuan;
  scanf("%s", teks);
  int i = 0;

  struct mahasiswa mhs[100];

  // Input
  do {
    char *token= strtok(masukan, "|");
    scanf("%s", masukan);
    if (strcmp(masukan, "---") == 0) {
      break;
    } else {
      strcpy(mhs[i].nama, strtok(masukan, "|"));

      strcpy(mhs[i].nim, strtok(masukan, "|"));
    
      strcpy(mhs[i].tahun_masuk, strtok(masukan, "|"));
    
      mhs[i].gender = strcmp(strtok(masukan, "|"), "MALE") == 0 ? MALE : FEMALE;
    i++;
    }
  } while (strcmp(masukan, "---") != 0);

  // Menghitung 
  lakilaki = 0;
  perempuan = 0;
  for (int j = 0; j < i; j++) {
    if (strcmp(mhs[j].gender, "MALE") == 0) {
      lakilaki++;
    } else {
      perempuan++;
    }
  }
  

  // Output 
  printf("%d|%d", lakilaki, perempuan);
  return 0;

} */