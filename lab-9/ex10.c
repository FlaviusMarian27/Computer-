/*10. Se citesc prin redirectare dintr-un fișier linii de forma:
produs,preț
unde produsul are maxim 15 caractere și poate conține spații, 
iar prețul e un număr real. Se cere să se afișeze produsul cu 
cel mai mare preț. */

#include <stdio.h>
#include <string.h>

#define MAX_PRODUCT_NAME 15

typedef struct {
    char product[MAX_PRODUCT_NAME + 1];
    int price;
} Product;

Product findMaxPriceProduct(const char *line) {
    Product maxPriceProduct = {"", -1};
    char productName[MAX_PRODUCT_NAME + 1];
    int price;

    if (sscanf(line, "%15[^,],%d", productName, &price) == 2 && price > maxPriceProduct.price) {
        strncpy(maxPriceProduct.product, productName, MAX_PRODUCT_NAME);
        maxPriceProduct.product[MAX_PRODUCT_NAME] = '\0';  // Asigură terminarea șirului
        maxPriceProduct.price = price;
    }

    return maxPriceProduct;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Mod de utilizare: %s nume_fisier\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        fprintf(stderr, "Nu se poate deschide fisierul.\n");
        return 1;
    }

    char line[100];
    Product maxPriceProduct = {"", -1};

    while (fgets(line, sizeof(line), file) != NULL) {
        Product currentProduct = findMaxPriceProduct(line);

        if (currentProduct.price > maxPriceProduct.price) {
            maxPriceProduct = currentProduct;
        }
    }

    fclose(file);

    printf("Produsul cu cel mai mare pret: %s, Pret: %d\n", maxPriceProduct.product, maxPriceProduct.price);

    return 0;
}
