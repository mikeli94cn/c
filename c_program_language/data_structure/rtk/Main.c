/* ------------------------------------------------------------------------- *
*	Dynamic arrays + structures		                                         *
*   Written in C                                                             *
*          by Klâvs Ceicâns P2-4                                             *
*         	(Github - Kefirchiks | https://github.com/Kefirchiks )           *
* -------------------------------------------------------------------------- *
*	SHARING IS CARING                                                        *
* -------------------------------------------------------------------------- *
* 5. Patstâvîgais darbs                                                      *
*	DB: Izveidot dinamisko masîvu no struktûrâm.                             *
*		Katra struktûra sastâv no minimums 4 laukiem,                        *
*		daþi no tiem var bût doti. Uz nodoðanas brîdi jâbût 5 ierakstiem.    *
*			Jâbût iespçjai:                                                  *
*				1. Pievienot ierakstus                                       *
*				2. Meklçt pçc pamatvienîbas                                  *
*				3. Dzçst ierakstus                                           *
*				4. Apskatît DB saturu                                        *
*				5. Izpildît individuâlo uzdevumu                             *
*				6. Sakârtot ierakstus pçc pamatvienîbas                      *
* -------------------------------------------------------------------------- *
*	Individuâlais uzdevums (2.uzdevums)                                      *
*	DB "Bibliotçla". Lauki: adrese, nosaukums, id, esoðo grâmatu skaits.     *
*	Pamatvienîba: nosaukums.                                                 *
*	Atrast bibliotçkas, kuru grâmatu skaits < vai > par                      *
*		lietotâja ievadîto skaitu.                                           *
* -------------------------------------------------------------------------- */

#pragma hdrstop

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma argsused

struct biblioteka {
	char adrese[41]; // adrese - max 40 simboli.
	char nosaukums[21]; // nosaukums - max 20 simboli.
	short id;
	short skaits; // skaits - grâmatu skaits bibliotçkâ
};

struct biblioteka *bibl = NULL; // dinamiskais struktûru masîvs
int id = 1, izm = 5; // izm - sâkotnçjais masîva izmçrs
char izv; // izv - izvçles vçrtîba

void piev_ier(void); // f-ja ierakstu pievienoðanai
void meklet(void); // f-ja ierakstu meklçðanai
void dzest(void); // f-ja ierakstu dzçðanai
void izvade(void); // f-ja ierakstu izvadei
void ind_uzd(void); // f-ja individuâlajam uzdevumam
void sakartot(void); // f-ja ierakstu sakârtoðanai
void uzd(void); // f-ja izdevuma izvadei
char izvele(void); // f-ja izvçlei
void pieci_ieraksti(void); // f-ja piecu ierakstu ievadei

// galvena f-ja
void main() {
	// izveido bibl masivu no izm elemntiem
	bibl = (struct biblioteka*)realloc(bibl, izm*sizeof(struct biblioteka));
	// aizpilda masivu ar pieciem sakotnejiem lementiem
	pieci_ieraksti();
	do {
		clrscr();
		izv = izvele(); // nolasa izveli
		switch (izv) {
			// 1. izvele - pievienot ierakstus
		case '1': {
				clrscr();
				piev_ier();
				break;
			}
			// 2. izvele - meklet ierakstus
		case '2': {
				clrscr();
				meklet();
				break;
			}
			// 3. izvele - dzest ierakstus
		case '3': {
				clrscr();
				dzest();
				break;
			}
			// 4. izvele - izvadit ierakstus
		case '4': {
				clrscr();
				izvade();
				break;
			}
			// 5. izvele - individualais izdevums
		case '5': {
				clrscr();
				ind_uzd();
				break;
			}
			// 6. izvele - sakartot ierakstus
		case '6': {
				clrscr();
				sakartot();
				break;
			}
			// 7. izvele - izvadit darba uzdevumu
		case '7': {
				clrscr();
				uzd();
				break;
			}
		}
	}
	while (izv != '8'); // 8. izvele - iziet
}

// f-ja ierakstu pievienosanai
void piev_ier() {
	izm++;
	// palielina masiva izmeru par 1
	bibl = (struct biblioteka*)realloc(bibl, izm*sizeof(struct biblioteka));
	// pieprasijums ievadit bibl. adresi
	printf("Ievadiet bibliotekas adresi (max 40 simboli):\t");
	flushall();
	gets(bibl[izm - 1].adrese); // nolasa adresi
	// pieprasijums ievadit bibl. nosaukumu
	printf("Ievadiet bibliotekas nosaukumu (max 20 simboli):\t");
	flushall();
	gets(bibl[izm - 1].nosaukums); // nolasa nosaukumu
	// pieprasijums ievadit gramatu skaitu
	printf("Ievadiet gramatu skaitu biblioteka:\t");
	scanf("%d", &bibl[izm - 1].skaits); // nolasa gramatu skaitu
	// parbauda, vai gramatu skaits ir mazaks par 0
	while (bibl[izm - 1].skaits < 0) {
		printf("Gramtu skaits nevar but mazaks par 0, ievadiet gramatu skaitu:\t"
			);
		scanf("%d", &bibl[izm - 1].skaits); // nolasa gramatu skaitu
	}
	bibl[izm - 1].id = id++; // ievada id vertibu
}

// f-ja ierakstu meklesanai
void meklet() {
	int i, *sk = NULL, r = 0;
	// i - skaititajs; sk - atrasto ierakstu nr; r - atrasto ierakstu skaits
	char search[21]; // search - meklesanas atslegas vards
	// parbauda, vai biblioteka ir kads ieraksts
	if (bibl == NULL)
		printf("Datubaze ir tuksa!");
	else {
		// pieprasa ievadit bibl. nosaukumu
		printf("Ievadiet bibliotekas nosaukumu, pec kura meklet bibliotekas:\t"
			);
		flushall();
		gets(search); // nolasa bibl. nosaukumu
		// cikla atrod, vai ir kads bibl. nosaukums
		for (i = 0; i < izm; i++)
			if (strstr(bibl[i].nosaukums, search) != NULL) {
				r++; // palielina atrasto el. skaitu par 1
				sk = (int*)realloc(sk, r*sizeof(int));
				sk[r - 1] = i; // ievad elementa numuru sk masiva
			}
		// izvada pazinojumu, ja nekas netika atrasts
		if (r == 0)
			printf("Pec jusu ievadita atslegas varda '%s' nekas netika atrasts!"
			, search);
		// izvada atrastos elementus
		else {
			printf("Pec jusu ievadita atslegas varda '%s' tika atrast(s/i) %d ieraksti!"
				, search, r);
			for (i = 0; i < r; i++) {
				printf("\n\n%d. ieraksts:", i + 1);
				printf("\nAdrese: %s", bibl[sk[i]].adrese);
				printf("\nNosaukums: %s", bibl[sk[i]].nosaukums);
				printf("\nID: %d", bibl[sk[i]].id);
				printf("\nGramatu skaits: %d", bibl[sk[i]].skaits);
			}
		}
		printf("\n\nNospiediet jebkuru taustinu, lai turpinatu!");
		getch();
	}
}

// f-ja ierakstu dzesanai
void dzest() {
	int n, i, ir, k;
	// n,k - skaititaji; ir - ja ir atrasts id; i - lietotaja ievaditais id
	// parbauda, vai biblioteka ir kads ieraksts
	if (bibl == NULL)
		printf("Datubaze ir tuksa!");
	else {
		// izvada esosos ierakstus
		for (n = 0; n < izm; n++) {
			printf("\n\n");
			printf("\nAdrese: %s", bibl[n].adrese);
			printf("\nNosaukums: %s", bibl[n].nosaukums);
			printf("\nID: %d", bibl[n].id);
			printf("\nGramatu skaits: %d", bibl[n].skaits);
		}
		// pieprasijums ievadit raksta ID
		printf("\n\nIevadiet ieraksta ID, kuru velaties dzest:\t");
		scanf("%d", &i); // nolasa raksta ID
		ir = 1;
		// cikla atrod ierakstu, izdzes to
		for (n = 0; n < izm; n++)
			if (bibl[n].id == i) {
				ir = 0;
				for (k = n; k < izm - 1; k++)
					bibl[k] = bibl[k + 1];
				if (izm == 1)
					bibl = NULL;
				izm--;
				break;
			}
		// ja nav atrasts ieraksts pec lietotaja ievadita id, izvada pzinojumu
		if (ir == 1) {
			printf("Ierakst ar id=%d neeksiste!\n", i);
		}
	}
	// smazina bibl izmeru
	bibl = (struct biblioteka*)realloc(bibl, izm*sizeof(struct biblioteka));
	printf("\n\nNospiediet jebkuru taustinu, lai turpinatu!");
	getch();
}

// f-ja ierakstu izvadei
void izvade() {
	int i; // skaititajs
	// parbauda, vai biblioteka ir kads ieraksts
	if (bibl == NULL)
		printf("Datubaze ir tuksa!");
	else
		printf("Datubaze ir %d ierakst(s/i)", izm);
	// izvada datubazes saturu
	for (i = 0; i < izm; i++) {
		printf("\n\n%d. ieraksts:", i + 1);
		printf("\nAdrese: %s", bibl[i].adrese);
		printf("\nNosaukums: %s", bibl[i].nosaukums);
		printf("\nID: %d", bibl[i].id);
		printf("\nGramatu skaits: %d", bibl[i].skaits);
	}
	printf("\n\nNospiediet jebkuru taustinu, lai turpinatu!");
	getch();
}

// f-ja individualajam uzdevumam
void ind_uzd() {
	int i, ir; // i - skaititajs; ir - ja ir atrasts kads ieraksts
	int gr_sk; // gr_sk - gramatu skaits
	char izvelne; // izvelne - izvelne
	// parbauda, vai biblioteka ir kads ieraksts
	if (bibl == NULL)
		printf("Datubaze ir tuksa!");
	else {
		do {
			clrscr();
			// izvada izvelni
			printf("\nNospiediet izvelnes ciparu:\n");
			printf("1 - Lai atrastu bibliotekas, kuras jusu ievaditais gramatu skaits ir mazaks par biblioteka esoso gramatu sk.\n"
				);
			printf("2 - Lai atrastu bibliotekas, kuras jusu ievaditais gramatu skaits ir lielaks par biblioteka esoso gramatu sk.\n"
				);
			printf("3 - Atpakal\n");
			printf("Jusu izvele:\t");
			flushall();
			scanf("%c", &izvelne); // nolasa izvelni
		}
		while (izvelne >= '3' && izvelne <= '1');
		switch (izvelne) {
		case '1': {
				clrscr();
				// izvada pieprasijumu ievadit meklejamo gramatu sk.
				printf("Ievadiet gramatu skaitu:\t");
				scanf("%d", &gr_sk); // nolasa gr. sk.
				ir = 0;
				// samekle bibliotekas, kuras atbilst nosacijumam
				for (i = 0; i < izm; i++)
					if (gr_sk < bibl[i].skaits) {
						ir = 1;
						break;
					}
				// ja nav atrasta biblioteka, izvada pzinojumu
				if (ir == 0)
					printf("Neviena biblioteka gramatu skaits nav mazaks par %d!"
					, gr_sk);
				else {
					printf("Saj(a/s) bibleotek(a/s) gramatu skaits ir mazaks par %d:\n"
						, gr_sk);
					for (i = 0; i < izm; i++)
						if (gr_sk < bibl[i].skaits)
							printf("%s\n", bibl[i].nosaukums);
				}

				printf("\nNospiediet jebkuru taustinu, lai turpinatu!");
				getch();
				break;
			}
		case '2': {
				clrscr();
				// izvada pieprasijumu ievadit meklejamo gramatu sk.
				printf("Ievadiet gramatu skaitu:\t");
				scanf("%d", &gr_sk); // nolasa gr. sk.
				// parbauda, vai gramatu sk. ir lielaks par 0
				while (gr_sk < 0) {
					printf("Gramatu skaits nedrikst but mazaks par 0, ievadiet gramatu skaitu:\t"
						);
				}
				scanf("%d", &gr_sk); // nolasa gr. sk.
				ir = 0;
				printf("Saj(a/s) bibleotek(a/s) gramatu skaits ir lielaks par %d:\n"
					, gr_sk);
				// samekle bibliotekas, kuras atbilst nosacijumam
				for (i = 0; i < izm; i++)
					if (gr_sk < bibl[i].skaits) {
						ir = 1;
						break;
					}
				// ja nav atrasta biblioteka, izvada pzinojumu
				if (ir == 0)
					printf("Neviena biblioteka gramatu skaits nav lielaks par %d!"
					, gr_sk);
				else {
					printf("Saj(a/s) bibleotek(a/s) gramatu skaits ir lielaks par %d:\n"
						, gr_sk);
					for (i = 0; i < izm; i++)
						if (gr_sk < bibl[i].skaits)
							printf("%s\n", bibl[i].nosaukums);
				}
				printf("\n\nNospiediet jebkuru taustinu, lai turpinatu!");
				getch();
				break;
			}
		}
	}
}

// f-ja ierakstu sakartosanai
void sakartot() {
	int i, j; // i,j - skaititaji
	struct biblioteka temp; // temp - mainigais ieraksta ateceresanai
	char izvelne; // izvelne - mainigais izvelnes nolasisanai
	// parbauda, vai biblioteka ir kads ieraksts
	if (bibl == NULL)
		printf("Datubaze ir tuksa!");
	else {
		do {
			clrscr();
			// izvada izvelni
			printf("\nNospiediet izvelnes ciparu:\n");
			printf("1 - Lai kartotu ierakstus pec alfabeta augosa seciba(sakot ar a)\n"
				);
			printf("2 - kartotu ierakstus pec alfabeta dilstosa seciba(sakot ar z)\n"
				);
			printf("3 - Atpakal\n");
			printf("Jusu izvele:\t");
			flushall();
			scanf("%c", &izvelne); // nolasa izvelni
		}
		while (izvelne >= '3' && izvelne <= '1');
		switch (izvelne) {
		case '1': {
				// sakarto augosa seciba ar burbula metodi
				for (i = 0; i < izm; i++)
					for (j = (izm - 1); j > 0; j--)
						if (strcmp(bibl[j - 1].nosaukums,
						bibl[j].nosaukums) > 0) {
							temp = bibl[j];
							bibl[j] = bibl[j - 1];
							bibl[j - 1] = temp;
						}
				printf("Ieraksti sakartoti augosa seciba(sakot ar a)");
				printf("\n\nNospiediet jebkuru taustinu, lai turpinatu!");
				getch();
				break;
			}
		case '2': {
				// sakarto dilstosa seciba ar burbula metodi
				for (i = 0; i < izm; i++)
					for (j = (izm - 1); j > 0; j--)
						if (strcmp(bibl[j - 1].nosaukums,
						bibl[j].nosaukums) < 0) {
							temp = bibl[j];
							bibl[j] = bibl[j - 1];
							bibl[j - 1] = temp;
						}
				printf("Ieraksti sakartoti dilstosa seciba(sakot ar z)");
				printf("\n\nNospiediet jebkuru taustinu, lai turpinatu!");
				getch();
			}
		}
	}

}

// f-ja izvelei
char izvele() {
	char izvelne;
	printf("Sveicinati datubaze bilblioteka!\n");
	// parbauda, vai biblioteka ir kads ieraksts
	if (bibl == NULL)
		printf("\nStatuss: datubaze ir tuksa!\n");
	else {
		// izvada statusu
		printf("\nStatuss: Ir atrasti %d ieraksti\n", izm);
	}
	// izvada visu izvelnu pazinojumus
	printf("\nNospiediet izvelnes ciparu:\n");
	printf("1 - Pievienot ierakstus\n");
	printf("2 - Meklet pec nosaukuma\n");
	printf("3 - Dzest ierakstus\n");
	printf("4 - Apskatit datubazes saturu\n");
	printf("5 - Izpildit individualo uzdevumu\n");
	printf("6 - Sakartot ierakstus pec nosaukuma\n");
	printf("7 - Darba uzdevums\n");
	printf("8 - Iziet\n");
	printf("\nJusu izvele:\t");
	scanf("%c", &izvelne); // nolasa izvelni
	return izvelne; // atgriez izvelnes vertibu
}

// f-ja uzdevuma izvadei
void uzd() {
	// izvada darba uzdevumu
	printf("5. patstavigais darbs\n");
	printf("DB: Izveidot dinamisko masivu no strukturam. Katra struktura sastav no,\n"
		);
	printf("minimum 4 laukiem, dazi no tiem var but doti. Uz nodosanas bridi\n"
		);
	printf("jabut 5 ierakstiem. Jabut iespejai:\n");
	printf("\t1. Pievienot ierakstus\n");
	printf("\t2. Meklet pec pamatvienibas\n");
	printf("\t3. Dzest ierakstus\n");
	printf("\t4. Apskatit datubazes saturu\n");
	printf("\t5. Izpildit individualo uzdevumu\n");
	printf("\t6. Sakartot ierakstus pec pamatvienibas\n");
	printf("\nIndividualais uzdevums:\n");
	printf("2. Uzdevums. Datubaze 'Biblioteka'. Lauki: adrese,nosaukums, id\n"
		);
	printf("esoso gramatu skaits. Pamatvieniba: nosaukums. Atrast bibliotekas,\n"
		);
	printf("kuru gramatu skaits < vai > par lietotaja ievadito skaitu.");
	printf("\n\nNospiediet jebkuru taustinu, lai turpinatu:");
	getch();
}

// f-ja piecu ierakstu ievadei
void pieci_ieraksti() {
	// ieraksta 5 dazadus ierakstus
	strcpy(bibl[0].adrese, "Riga");
	strcpy(bibl[0].nosaukums, "Rasa");
	bibl[0].id = id++;
	bibl[0].skaits = 10;

	strcpy(bibl[1].adrese, "Liepaja");
	strcpy(bibl[1].nosaukums, "Daugava");
	bibl[1].id = id++;
	bibl[1].skaits = 10;

	strcpy(bibl[2].adrese, "Daugavpils");
	strcpy(bibl[2].nosaukums, "Lasitava");
	bibl[2].id = id++;
	bibl[2].skaits = 10;

	strcpy(bibl[3].adrese, "Valmiera");
	strcpy(bibl[3].nosaukums, "Malta");
	bibl[3].id = id++;
	bibl[3].skaits = 10;

	strcpy(bibl[4].adrese, "Cesis");
	strcpy(bibl[4].nosaukums, "Pagrabs");
	bibl[4].id = id++;
	bibl[4].skaits = 10;
}
