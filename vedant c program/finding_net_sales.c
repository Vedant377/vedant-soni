# include <stdio.h>
int main() {
    float net_sales, gross_sales, discount;
   printf("Enter the gross sales: ");
    scanf("%f", &gross_sales);
    if (gross_sales > 20000) {
        discount = gross_sales * 0.15; // 15% discount
        net_sales = gross_sales - discount;
        printf("Net Sales: %f\n", net_sales);
    } else if (gross_sales >= 10000 && gross_sales <= 20000) {
        discount = gross_sales * 0.1; // 10% discount
        net_sales = gross_sales - discount;
        printf("Net Sales: %f\n", net_sales);
    } else 
    discount = gross_sales * 0.05; // 5% discount
    net_sales = gross_sales - discount;
    printf("Net Sales: %f\n", net_sales);
        return 0;
}