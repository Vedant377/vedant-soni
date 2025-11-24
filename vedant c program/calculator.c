# include<stdio.h> 

int main(){
    int a,b,choice;
    printf("you have to choose\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&choice);

    if (choice > 4)
    {
        printf("you entered wrong choice\n");
    }
    else if(choice < 1)
    {
        printf("you entered wrong choice\n");
    }
    else 
    {
        printf("enter two integer numbers\n");
        scanf("%d %d",&a,&b);
    }


    if (choice == 1) 
    {
        printf("addition of two number %d and %d is %d\n",a,b,(a+b));
    }


    else if (choice == 2)
    {
     printf("substraction of two number %d and %d is %d\n",a,b,(a-b));
    }


    else if (choice == 3)
    {
        printf("multiplication of two number %d and %d is %d\n",a,b,(a*b));
    }
    else if (choice == 4)
    {
        if (b != 0)
        printf("division of two number %d and %d is %d\n",a,b,(a/b));
        else
        printf("number can not divided by 0\n");
    }
    else 
        printf("please enter any of these number 1,2,3,4\n");

    return 0;

}