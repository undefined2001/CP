package Codes;

import java.util.Scanner;

public class ControlStatementIfElse {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int num1,num2;
        System.out.print("Enter First Number: ");
        num1 = input.nextInt();
        System.out.print("Enter Second Number: ");
        num2 = input.nextInt();
        if(num1>num2){
            System.out.printf("%d is greater",num1);
        } else if (num1<num2) {
            System.out.printf("%d is greater",num2);
        }
        else
            System.out.println("Both are Equal!");

    }
}
