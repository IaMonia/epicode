import math
def calcola_operazioni():
	print("Inserire l'operazione che si vuole eseguire tra:\n1.calcolare perimetro del quadrato\n2.calcolare la circonferenza di un cerchio\n3.calcolare il perimetro di un rettangolo\n")
	x=int(input("La tua scelta: "))
	while True:
		if x==1:
			print ("Hai scelto l'operazione <<Calcola perimentro del quadrato>> ")
			l=float(input("Inserisci il lato del quadrato: "))
			P=l*4
			print ("Il perimetro del quadrato è: ", P)
			break
		elif x==2:
			print ("Hai scelto l'operazione <<Calcola la circonferenza di un cerchio>>")
			r=float(input("Inserisci il raggio del cerchio: "))
			C=2*r*math.pi
			print ("La circonferenza del cerchio è: ", C)
			break
		elif x==3:
			print ("Hai scelto l'operazione <<Calcola il perimentro di un rettangolo>>")
			b=float(input("Inserisci la base del rettangolo: "))
			h=float(input("Inserisci l'altezza del rettangolo: "))
			P=b*2+h*2
			print ("Il perimetro del rettangolo è: ",P)
			break
		else:
			print ("Non hai scelto nessuna opzione possibile")
			break
			continue
calcola_operazioni()

