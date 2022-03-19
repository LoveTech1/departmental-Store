void cooking();

void cooking()
{
    int i,j,len;
    char *utensilsName[][20] = {
        {"chef knife","vegetable peeler", "rice cooker","grater","mixture", "fryingPan", "oven",
        "spatula", "pot holders"};
    len = sizeof(utensilsName) / sizeof(utensilsName[0]); // displays the length of the array
    printf("\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%s[^\n]",utensilsName[i]);
        }
        printf("\n");
    }
    // for(i=0;i<)
}