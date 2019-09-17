#include<iostream>
using namespace std;
 
bool isMD(char op){
    return (op == '/' || op == 'x' ? true : false);
}
 
int op(char op, int num1, int num2){
    switch (op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case 'x':
            return num1 * num2;
        case '/':
            return num1 / num2;
        default:
            return 0;
    }
}
 
int main(){
    int n, tot, num1, num2, num3, num4;
    char op1, op2, op3;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        num1 = s[0] - '0'; num2 = s[2] - '0'; num3 = s[4] - '0'; num4 = s[6] - '0';
        op1 = s[1]; op2 = s[3]; op3 = s[5];
        if(isMD(op2)){
            if(isMD(op1)){
                if(isMD(op3)) tot = op(op3, op(op2, op(op1, num1, num2), num3), num4);
                else tot = op(op3, op(op2, op(op1, num1, num2), num3), num4);
            }else{
                if(isMD(op3)) tot = op(op1, num1, op(op3, op(op2, num2, num3), num4));
                else tot = op(op3, op(op1, num1, op(op2, num2, num3)), num4);
            }
        }else{
            if(isMD(op1)){
                if(isMD(op3)) tot = op(op2, op(op1, num1, num2), op(op3, num3, num4));
                else tot = op(op3, op(op2, op(op1, num1, num2),num3),num4);
            }else{
                if(isMD(op3)) tot = op(op2, op(op1, num1, num2), op(op3, num3, num4));
                else tot = op(op3, op(op2, op(op1, num1, num2),num3),num4);
            }
        }
        cout << (tot == 24 ? "Yes" : "No") << endl;
    }
    return 0;
}
