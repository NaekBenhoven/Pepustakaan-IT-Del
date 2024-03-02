#ifndef BOOK_HEADER
#define BOOK_HEADER
#define MAX_LEN 100
typedef struct SBuku perpus;

struct SBuku
{
    char ISBN[MAX_LEN];
    char JudulBuku[MAX_LEN];
    char JenisBuku[MAX_LEN];
    char Author[MAX_LEN];
    char NIDN[MAX_LEN];
    char Nama[MAX_LEN];
    char NoTelp[MAX_LEN];
    perpus *ptrNextBuku;
};

void setcolor(unsigned short color);
void cariBuku(perpus *isi, char *donat);
void CetakBuku(perpus *isi);
void SearchBook(perpus *isi, char *cari);
void tambahBook(perpus **buku, char ISBN[MAX_LEN], char JudulBuku[MAX_LEN], char JenisBuku[MAX_LEN], char Author[MAX_LEN], char NIDN[MAX_LEN], char Nama[MAX_LEN], char NoTelp[MAX_LEN]);

#endif
