package Codes;

import java.util.Scanner;

public class AreaOfTriangle {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        double base,hieght,area;
        System.out.print("Enter Base: ");
        base = input.nextDouble();
        System.out.print("Enter Hieght: ");
        hieght = input.nextDouble();

        area = 0.5 * base * hieght;

        System.out.print("Area = "+area);


    }
}
