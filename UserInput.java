package Codes;

import java.util.Scanner;

public class UserInput {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int number ;
        String name;

        System.out.print("Enter Number: ");
        number = input.nextInt();
        System.out.print("Enter Name: ");
        name = input.nextLine();
        System.out.println("Your Number = "+number);
        System.out.println("Your Name = "+name);

    }
}
