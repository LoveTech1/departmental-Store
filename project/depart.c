// C projects that imitates how the departmental store system
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
void buy();
void clothing();
void products();
void cooking();
void cosmetics();
void foodItems();

int main()
{
    int choice;
    printf("________________________Welcome to Sasto Maal________________________\n\v");
    printf("+ \t\tEnter 1. To display Products \t\t\t\t+\n");
    printf("+ \t\tEnter 2. To buy the product\t\t\t\t+\n");
    printf("+ \t\tEnter 3. To generate the receipt\t\t\t+\n");
    printf("+ \t\tEnter 4. To exit the system\t\t\t\t+\n+");
    printf("_______________________________________________________________________+\n");

    printf("Enter your choice:\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        products();
        break;
    case 2:
        buy();
        break;
    case 3:
        break;
    case 4:
        exit(0);
    default:
        printf("Please enter the valid choice\n");
    }
    return 0;
}
// program that displays the products available in the store

void products()
{
    int ch, i;
    printf("\v\v\n");
// printf("Enter your choice:\n");
first:
    printf("\t\t\tThank you for checking us out!! what do you want to buy ? We have..\n");
    printf("\n");
    printf("\t\t\tEnter 1. Cooking utensils \t\t\t\t\t\t\n");
    printf("\t\t\tEnter 2. Clothing\n");
    printf("\t\t\tEnter 3. cosmetics\n");
    printf("\t\t\tEnter 4. food items\n");
    printf("\t\tPlease enter 5 to exit the system\n");
    printf("\n");
loop:
    printf("Enter your choice:\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        cooking();
        goto loop;
        break;

    case 2:
        clothing();
        goto loop;
        break;

    case 3:
        cosmetics();
        goto loop;
        break;

    case 4:
        foodItems();
        goto loop;
        break;

    case 5:
        exit(0);

    default:
        printf("Please enter the valid choice\n");
        goto first;
    }
    printf("\n");
}

void cooking()
{
    int i, len;
    printf("\t\tYou have selected cooking utensils\n");
    printf("\t\t\tProducts available\n");
    printf("\n");
    char utensils[][20] = {
        "spoon", "whisk", "spatula",
        "kitchen spears", "vegetable peeler",
        "can opener", "instant thermometer", "brush"};
    double price[] = {
        320.34, 545.33, 99.45, 1010.00, 456.64, 445.99, 343.99, 2010};
    len = sizeof(utensils) / sizeof(utensils[0]);
    printf("******************** Products details with price ******************\n");
    printf("\t\tProducts \t\t\tPrice(in Rs.)\n");
    printf("\n");
    for (i = 0; i < 2; i++)
    {
        printf("\t\t%s: \t\t\t| \tRs. %lf\n", utensils[i], price[i]);
        printf("\t\t\t\t\t|\n");
    }
    printf("\t\t%s: \t\t| \tRs. %lf\n", utensils[2], price[2]);
    printf("\t\t\t\t\t|\n");
    printf("\t\t%s: \t| \tRs. %lf\n", utensils[3], price[3]);
    printf("\t\t\t\t\t|\n");
    printf("\t\t%s: \t| \tRs. %lf\n", utensils[4], price[4]);
    printf("\t\t\t\t\t|\n");
    printf("\t\t%s: \t\t| \tRs. %lf\n", utensils[5], price[5]);
    printf("\t\t\t\t\t|\n");
    printf("\t\t%s: \t| \tRs. %lf\n", utensils[6], price[6]);
}
void clothing()
{
    int i, len;
    printf("\t\tYou have selected clothing materials\n");
    printf("\t\t\tProducts available\n");
    printf("\n");
    char clothes[][20] = {
        "bag", "shoes", "hook",
        "jacket", "pant",
        "trouser", "socks", "gloves"};
    double price[] = {
        500.34, 900.33, 989.45, 1010.00, 768.64, 1923.99, 4342.99, 2010.98};
    len = sizeof(price) / sizeof(price[0]);
    printf("****************************** clothing ***************************\n");
    printf("\n");
    printf("\t\tProducts \t\t\tPrice(in Rs.)\n");
    printf("\n");
    for (i = 0; i < 2; i++)
    {
        printf("\t\t%s: \t\t\t| \tRs. %lf\n", clothes[i], price[i]);
        printf("\t\t\t\t\t|\n");
    }
    printf("\t\t%s: \t\t\t| \tRs. %lf\n", clothes[2], price[2]);
    printf("\t\t\t\t\t|\n");
    printf("\t\t%s: \t\t| \tRs. %lf\n", clothes[3], price[3]);
    printf("\t\t\t\t\t|\n");
    printf("\t\t%s: \t\t\t| \tRs. %lf\n", clothes[4], price[4]);
    printf("\t\t\t\t\t|\n");
    printf("\t\t%s: \t\t| \tRs. %lf\n", clothes[5], price[5]);
    printf("\t\t\t\t\t|\n");
    printf("\t\t%s: \t\t\t| \tRs. %lf\n", clothes[6], price[6]);
}

void cosmetics()
{
    int i, len;
    printf("\t\tCosmetics are expensive Please be careful!!!!!!!!!!\n");
    printf("\n");
    printf("\t\t\tProducts available\n");
    printf("\n");
    char cosmetic[][20] = {
        "health care", "skin care", "beauty",
        "color sosmetics", "otc",
        "creams", "powders", "creams"};
    double price[] = {
        5000.34, 9100.33, 9891.45, 1010.00, 1768.64, 9923.99, 10000.99, 9010.98};
    len = sizeof(price) / sizeof(price[0]);
    printf("****************************** clothing ***************************\n");
    printf("\n");
    printf("\t\tProducts \t\t\tPrice(in Rs.)\n");
    printf("\n");
    for (i = 0; i < 2; i++)
    {
        printf("\t\t%s: \t\t| \tRs. %lf\n", cosmetic[i], price[i]);
        printf("\t\t\t\t\t|\n");
    }
    printf("\t\t%s: \t\t| \tRs. %lf\n", cosmetic[2], price[2]);
    printf("\t\t\t\t\t|\n");
    printf("\t\t%s: \t| \tRs. %lf\n", cosmetic[3], price[3]);
    printf("\t\t\t\t\t|\n");
    printf("\t\t%s: \t\t\t| \tRs. %lf\n", cosmetic[4], price[4]);
    printf("\t\t\t\t\t|\n");
    printf("\t\t%s: \t\t| \tRs. %lf\n", cosmetic[5], price[5]);
    printf("\t\t\t\t\t|\n");
    printf("\t\t%s: \t\t| \tRs. %lf\n", cosmetic[6], price[6]);
}

void foodItems()
{
    int i, len;
    printf("\t\tIts better if you cook it on your own!!!!!!!!!!\n");
    printf("\n");
    // printf("\t\t\tProducts available\n");
    printf("\n");
    char food[][20] = {
        "momo", "pizza", "biryani",
        "pasta", "kabab",
        "chowmein", "thukpa", "fried rice"};
    double price[] = {
        500.34, 100.33, 981.45, 100.00, 768.64, 923.99, 112.99, 566.98};
    len = sizeof(price) / sizeof(price[0]);
    printf("****************************** Food items(Note it is frozen) ***************************\n");
    printf("\n");
    printf("\t\tProducts \t\t\tPrice(in Rs.)\n");
    printf("\n");
    for (i = 0; i < 2; i++)
    {
        printf("\t\t%s: \t\t\t| \tRs. %lf\n", food[i], price[i]);
        printf("\t\t\t\t\t|\n");
    }
    printf("\t\t%s: \t\t| \tRs. %lf\n", food[2], price[2]);
    printf("\t\t\t\t\t|\n");
    printf("\t\t%s: \t\t\t| \tRs. %lf\n", food[3], price[3]);
    printf("\t\t\t\t\t|\n");
    printf("\t\t%s: \t\t\t| \tRs. %lf\n", food[4], price[4]);
    printf("\t\t\t\t\t|\n");
    printf("\t\t%s: \t\t| \tRs. %lf\n", food[5], price[5]);
    printf("\t\t\t\t\t|\n");
    printf("\t\t%s: \t\t| \tRs. %lf\n", food[6], price[6]);
}

// this section is to buy the product
void buy()
{
    char prod[20], utensil[20];
    int length, i,len;
    char *utensils[][20] = {
        "spoon", "whisk", "spatula",
        "kitchen spears", "vegetable peeler",
        "can opener", "instant thermometer", "brush"};
    double price[] = {
        320.34, 545.33, 99.45, 1010.00, 456.64, 445.99, 343.99, 2010};
    printf("Glad you decided to buy form sasto maal\n");
    printf("What do you want to buy form our store\n");
    scanf("%s", prod);
    printf("%s", prod);
    printf("\n");
    // fgets(prod,sizeof(prod),stdin);
    len = sizeof(prod) / sizeof(prod[0]);
    double totalAmount = 0;
    for (i = 0; i < len; i++)
    {
        if (strcmp(utensils[i], prod)==0)
        {
            // cooking();
            printf("Please enter the product name\n");
            scanf("%s", utensil);
            printf("\n");
            totalAmount = price[0];
            printf("You purchased %s and amount is %lf\n", utensil, totalAmount);
        }
    }
}