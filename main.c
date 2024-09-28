#include <stdio.h>
int main() {
    int quantita;
    float prezzo_unitario, importo_totale_non_scontato, sconto, importo_totale;
    printf("Inserisci il numero di prodotti acquistati: ");
    scanf("%d", &quantita);
    printf("Inserisci il prezzo unitario del prodotto: ");
    scanf("%f", &prezzo_unitario);
    importo_totale_non_scontato = quantita * prezzo_unitario;
    if (importo_totale_non_scontato > 50) {
        sconto = importo_totale_non_scontato * 0.20;
    } else if (importo_totale_non_scontato > 10) {
        sconto = importo_totale_non_scontato * 0.10;
    } else {
        sconto = 0;
    }
    importo_totale = importo_totale_non_scontato - sconto;
    printf("Importo totale non scontato: %.2f euro\n", importo_totale_non_scontato);
    printf("Sconto applicato: %.2f euro\n", sconto);
    printf("Importo totale da pagare: %.2f euro\n", importo_totale);
}
