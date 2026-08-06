// [1+2*{3+4*(5+6)+(3+2)}]

#include <stdio.h>

int valStack[100];
int valueTop = -1;
char opStack[100];
int opTop = -1;

void pushValue(int x){
    valStack[++valueTop] = x;
}

int popValue(){
    return valStack[valueTop--];
}

void pushOp(char ch){
    opStack[++opTop] = ch;
}

char popOp(){
    return opStack[opTop--];
}

int priority(char ch){
    if(ch == '+' || ch == '-')
        return 1;
    if(ch == '*' || ch == '/')
        return 2;
    return 0;
}


// Calculation
int calculate(int a, int b, char op){
    if(op == '+')
        return a + b;

    if(op == '-')
        return a - b;

    if(op == '*')
        return a * b;

    if(op == '/')
        return a / b;
    return 0;
}

int main()
{
    char exp[] = "[1+2*{3+4*(5+6)+(3+2)}]";
    int i = 0;

    while(exp[i] != '\0'){
        char ch = exp[i];

        if(ch >= '0' && ch <= '9'){
            pushValue(ch - '0');
        }

        else if(ch == '(' || ch == '{' || ch == '['){
            pushOp(ch);
        }

        else if(ch == ')' || ch == '}' || ch == ']'){
            while(opStack[opTop] != '(' && opStack[opTop] != '{' && opStack[opTop] != '['){
                int b = popValue();
                int a = popValue();
                char op = popOp();
                pushValue(calculate(a, b, op));
            }
            popOp(); 
        }

        else
        {
            while(opTop != -1 && priority(opStack[opTop]) >= priority(ch)){
                int b = popValue();
                int a = popValue();
                char op = popOp();
                pushValue(calculate(a, b, op));
            }
            pushOp(ch);
        }
        i++;
    }
    while(opTop != -1){
        int b = popValue();
        int a = popValue();
        char op = popOp();
        pushValue(calculate(a, b, op));
    }
    printf("Answer = %d", valStack[valueTop]);
    return 0;
}