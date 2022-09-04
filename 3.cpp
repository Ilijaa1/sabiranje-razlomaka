/* 3. Definisati strukturu kojom se opisuje razlomak. Napisati funkcije koje izracunavaju zbir i proizvod dva razlomka.
Napisati program koji za uneti ceo broj n i unetih n razlomaka ispisuje njihov ukupan zbir i proizvod. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

typedef struct Razlomak {
	int brojilac;
	int imenilac;
}Razlomak;

int main(int argc, char*argv[]) {
	Razlomak a, b, s, p;
	int sad, max, nzd, nzd1;
	printf("Unesi prvi razlomak: ");
	scanf("%d/%d", &a.brojilac, &a.imenilac);
	printf("Unesi drugi razlomak: ");
	scanf("%d/%d", &b.brojilac, &b.imenilac);
	max = a.imenilac;
	if(max<b.imenilac) {
		max = b.imenilac;
	}
	while(1) {
		if(max%a.imenilac==0 && max%b.imenilac==0) {
			sad = max;
			break;
		}
		++max;
	}
	s.brojilac = 0;
	s.brojilac = ((sad/a.imenilac)*a.brojilac) + ((sad/b.imenilac)*b.brojilac);
	s.imenilac = sad;
	for(int i = 1; i<=s.brojilac && i<=s.imenilac; i++) {
		if(s.brojilac%i==0 && s.imenilac%i==0) {
			nzd = i;
		}
	}
	s.brojilac /= nzd;
	s.imenilac /= nzd;
	printf("Rezultat sabiranja je: %d/%d\n", s.brojilac, s.imenilac);
	p.brojilac= 1;
	p.brojilac = a.brojilac*b.brojilac;
	p.imenilac = a.imenilac*b.imenilac;
	for(int i = 1; i<=p.brojilac && i<=p.imenilac; i++) {
		if(p.brojilac%i==0 && p.imenilac%i==0) {
			nzd1 = i;
		}
	}
	p.brojilac /= nzd1;
	p.imenilac /= nzd1; 
	printf("Rezultat mnozenja je: %d/%d\n", p.brojilac, p.imenilac);
	return 0;
}
