//FOUR FUNCTION CALCULATOR

int main() {
    double num1;        //defining first number
    double num2;        //defining second number
    char op;            //defining operation

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operater: ");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%lf", &num2);

    if(op == '+'){
        printf("%f", num1 + num2);
    }
    else if(op == '-'){
        printf("%f", num1 - num2);
    }
    else if(op == '*'){
        printf("%f", num1*num2);
    }
    else if(op == '/'){
        printf("%f", num1/num2);
    }
    else {
       printf("Invalid Operator");
    }
}
