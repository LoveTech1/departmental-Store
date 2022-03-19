// program that displays the products available in the store

void products();
void cooking();

void products()
{
    int ch,i;
    printf("Enter your choice:\n");
    scanf("%d",&ch);
    printf("\v\v\n");
    printf("Enter your choice:\n");
    printf("what do you want to buy:\n");
    printf("Enter 1. Cooking utensils \t\t\t\t\t\t*\n");
    printf("Enter 2. Clothing\n");
    printf("Enter 3. cosmetics\n");
    printf("Enter 4. foot items\n+");
    
}

void cooking()
{
    int i,j,len;
    char utensilsName[2][6] = {
        {"chef knife", "vegetable peeler", "rice cooker", "grater","mixture", "fryingPan", "oven",
        "spatula", "pot holders"};
    len = sizeof(utensilsName) / sizeof(utensilsName[0]); // displays the length of the array
    printf("\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%s[^\n]",utensilsName[i][j]);
        }
        printf("\n");
    }
    // for(i=0;i<)
}
