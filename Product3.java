package Codes;

import java.util.Scanner;

public class Product3 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int id;
        String title,price,description,category;
        System.out.print("Id : ");
        id = input.nextInt();
        input.nextLine();
        System.out.print("Title: ");
        title = input.nextLine();
        System.out.print("Price: ");
        price = input.nextLine();
        System.out.print("Description : ");
        description = input.nextLine();
        System.out.print("Category: ");
        category = input.nextLine();

        System.out.println("ID : "+id);
        System.out.println("Title : "+title);
        System.out.println("Price: "+price);
        System.out.println("Description : "+description);
        System.out.println("Category: "+category);
    }
}
