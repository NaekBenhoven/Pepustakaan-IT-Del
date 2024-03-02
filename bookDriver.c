#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Perpus_Header.h"

int main()
{
	perpus *b1 = (perpus *)calloc(1, sizeof(perpus));
	perpus *b2 = (perpus *)calloc(1, sizeof(perpus));
	perpus *b3 = (perpus *)calloc(1, sizeof(perpus));
	perpus *b4 = (perpus *)calloc(1, sizeof(perpus));
	perpus *b5 = (perpus *)calloc(1, sizeof(perpus));
	perpus *b6 = (perpus *)calloc(1, sizeof(perpus));
	perpus *b7 = (perpus *)calloc(1, sizeof(perpus));
	perpus *b8 = (perpus *)calloc(1, sizeof(perpus));

	strcpy(b1->ISBN, "100");
	strcpy(b1->JudulBuku, "Laskar Pelangi");
	strcpy(b1->JenisBuku, "Novel");
	strcpy(b1->Author, "Andrea Hirata");
	strcpy(b1->NIDN, "13321007");
	strcpy(b1->Nama, "Albert Jr");
	strcpy(b1->NoTelp, "082292328819");
	b1->ptrNextBuku = b2;

	strcpy(b2->ISBN, "101");
	strcpy(b2->JudulBuku, "Perancangan Perangkat Lunak");
	strcpy(b2->JenisBuku, "Buku Perkuliahan");
	strcpy(b2->Author, "Andi");
	strcpy(b2->NIDN, "13321011");
	strcpy(b2->Nama, "Yero");
	strcpy(b2->NoTelp, "08229232789");
	b2->ptrNextBuku = b3;

	strcpy(b3->ISBN, "102");
	strcpy(b3->JudulBuku, "Kisah kita");
	strcpy(b3->JenisBuku, "Cerita Pendek");
	strcpy(b3->Author, "yerobeam");
	strcpy(b3->NIDN, "13321021");
	strcpy(b3->Nama, "Rico");
	strcpy(b3->NoTelp, "082292328819");
	b3->ptrNextBuku = b4;

	strcpy(b4->ISBN, "103");
	strcpy(b4->JudulBuku, "Zelova");
	strcpy(b4->JenisBuku, "Majalah");
	strcpy(b4->Author, "NextFlix");
	strcpy(b4->NIDN, "13321029");
	strcpy(b4->Nama, "Naek");
	strcpy(b4->NoTelp, "12886777567");
	b4->ptrNextBuku = b5;

	strcpy(b5->ISBN, "104");
	strcpy(b5->JudulBuku, "Mengenal Struct");
	strcpy(b5->JenisBuku, "Buku Perkuliahan");
	strcpy(b5->Author, "Nivily A.S");
	strcpy(b5->NIDN, "13321023");
	strcpy(b5->Nama, "Christian");
	strcpy(b5->NoTelp, "08229232789");
	b5->ptrNextBuku = b6;

	strcpy(b6->ISBN, "105");
	strcpy(b6->JudulBuku, "Basis Data");
	strcpy(b6->JenisBuku, "Buku Perkuliahan");
	strcpy(b6->Author, "Rini M.V");
	strcpy(b6->NIDN, "132007");
	strcpy(b6->Nama, "Mario");
	strcpy(b6->NoTelp, "082291128819");
	b6->ptrNextBuku = b7;

	strcpy(b7->ISBN, "106");
	strcpy(b7->JudulBuku, "Pemrograman C");
	strcpy(b7->JenisBuku, "Buku Perkuliahan");
	strcpy(b7->Author, "Andi");
	strcpy(b7->NIDN, "13564002");
	strcpy(b7->Nama, "Albert");
	strcpy(b7->NoTelp, "08229232789");
	b7->ptrNextBuku = b8;

	strcpy(b8->ISBN, "107");
	strcpy(b8->JudulBuku, "Pemrograman C++");
	strcpy(b8->JenisBuku, "Buku Perkuliahan");
	strcpy(b8->Author, "Rico");
	strcpy(b8->NIDN, "5623123");
	strcpy(b8->Nama, "Naek");
	strcpy(b8->NoTelp, "08229232789");
	b8->ptrNextBuku = NULL;

menu:
	system("Color F3");
	printf("\n\t\t  Mini  Proyek   ");
	printf("\n\t\t  KELOMPOK 12 \n");
	printf("\t\tTEKNOLOGI KOMPUTER\n");
	printf("\n=====Menu Pencarian Buku=====\n");
	printf("1. Tambahkan Buku\n");
	printf("2. Tampilkan Semua Buku\n");
	printf("3. Cari Buku Berdasarkan ISBN\n");
	printf("4. Cari Buku Berdasarkan Donatur\n");
	printf("5. Keluar\n\n");

	int pilihan;
	printf("Masukkan Pilihan Menu : ");
	scanf("%d", &pilihan);

	if (pilihan == 1)
	{
		char ISBN[MAX_LEN];
		char JudulBuku[MAX_LEN];
		char JenisBuku[MAX_LEN];
		char Author[MAX_LEN];
		char NIDN[MAX_LEN];
		char Nama[MAX_LEN];
		char NoTelp[MAX_LEN];
		printf("\nMasukkan Data Buku\n");
		printf("ISBN\t: ");
		scanf("%s", &ISBN);
		printf("Judul Buku\t: ");
		scanf(" %[^\n]s", &JudulBuku);
		printf("Jenis Buku\t: ");
		scanf(" %[^\n]s", &JenisBuku);
		printf("Author\t: ");
		scanf("%s", &Author);
		printf("\nMasukkan Data Donatur\n");
		printf("NIDN\t: ");
		scanf("%s", &NIDN);
		printf("Nama\t: ");
		scanf("%s", &Nama);
		printf("Nomor telepon\t: ");
		scanf("%s", &NoTelp);
		tambahBook(&b1, ISBN, JudulBuku, JenisBuku, Author, NIDN, Nama, NoTelp);
		goto menu;
	}
	else if (pilihan == 2)
	{
		CetakBuku(b1);
		goto menu;
	}
	else if (pilihan == 3)
	{
		char cari[100];
		printf("Cari berdasarkan ISBN buku : ");
		scanf(" %[^\t\n]s", &cari);
		SearchBook(b1, cari);
		goto menu;
	}
	else if (pilihan == 4)
	{
		char donat[100];
		printf("Masukkan NIDN Donatur : ");
		scanf(" %[^\t\n]s", &donat);
		cariBuku(b1, donat);
		goto menu;
	}
	else if (pilihan == 5)
	{
		printf("\nTerimakasih Telah  Berkunjung di Perpustakan Kami!!\n");
		printf("\nTetap Mengikuti Prokes Kami Untuk Mendapatkan Buku Terbaik!!\n");
	}
	else
	{
		exit(0);
	}

	return 0;
}
