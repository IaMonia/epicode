#include <stdio.h>
#include <string.h>

void menu();
void domande ();
void saluti ();

int main()
{
 char scelta='\0';
 menu();
 scanf("%c", &scelta);
 switch (scelta)
    {
	case 'A':
	case 'a':
	domande();
	break;
	case 'B':
	case 'b':
	saluti();
	break;
	default:
	printf ("Honky-donkey, try again!\n");
    }
	return 0;
}
void menu ()
    {
	printf ("Ciao genio, che dici ti va di fare un gioco? Tranqui non sono Saw l'enigmista ;)\n");
	printf ("Iniziamo con una semplice domanda:\nVuoi giocare? \nA.Certo!\nB.Non voglio rischiare di perdere un piede\n");
    }
void domande ()
   {
	char nome [55];
	char r1;
	char r2;
	char r3;
	int punti=0;
	printf ("\nRompiamo il ghiaccio con una domanda facile facile! Come ti chiami?\n");
	scanf ("%s", nome);
	printf ("Welcome %s! Inizierai con un punteggio di %d Let's start!\n", nome, punti++);
//domanda 01
	printf ("\n Domanda 01:\nQuanti erano i porcellini della favola?\n");
	printf ("a.uno\nb.due\nc.tre\n");
	getchar();
	scanf ("%c", &r1);
	if (r1 == 'c' || r1 == 'C')
	{
	printf("\nLo sapevo che eri un genio!! Adesso il tuo punteggio è %d. Andiamo alla prossima domanda!\n", punti++);
	}
	else
	{
	printf("\nNoooooo io credevo in te!!!! Proviamo con la prossima domanda.\n");
	}
//domanda 02
        printf ("\nDomanda 02:\nChi era Napoleone Bonaparte?\n");
        printf ("a.un bel ragazzo alto e affascinante\nb.un piccolo e incattivito francese\nc.l'amico che mi offre sempre lo spriz\n");
        getchar();
	scanf ("%c", &r2);
        if (r2 == 'b' || r2 == 'B')
        {
        printf("\nLo sapevo che eri un genio!! Adesso il tuo punteggio è %d. Andiamo alla prossima domanda!\n", punti++);
        }
        else
        {
        printf("\nNoooooo io credevo in te!!!! Proviamo con la prossima domanda.\n");
        }
//domanda 03
        printf ("\nDomanda 03:\nSe ti dico Sandra Mondaini cosa ti viene in mente?\n");
        printf ("a.che noia che barba, che barba che noia\nb.Niente sono un millenial\nc.Ehi Saw mi sa che sei un po' vintage...\n");
        getchar();
	scanf ("%c", &r3);
	if (r3 == 'a' || r3 == 'A')
        {
        printf("\nLo sapevo che eri un genio!! Il gioco è finito e con questa domanda esatta il tuo punteggio è %d.\n", punti++);
        printf ("\nA presto %s, ti aspetto per un altro round!", nome);
	}
        else
        {
        printf("\nNoooooo io credevo in te!!!!\n");
	printf ("Il nostro gioco è finito, il tuo punteggio finale è di %d, avresti potuto fare di meglio? Non lo sapremo mai :P");
        }
  }
 void saluti()
	{
	printf ("\nAllora il nostro gioco finisce qui, sciao bello!");
	}
