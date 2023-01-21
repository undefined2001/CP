package Codes;

import java.io.PrintStream;

public class FormateSpecifier {
    public static void main(String[] args){
        boolean b = true;
        int i = 5;
        float f = 12.3F;
        double d = 12.3435D;
        char c = 'a';
        String str = "Shakib";

        System.out.printf("Boolean b = %b\n",b);
        System.out.printf("Int i = %d\n",i);
        System.out.printf("Float f = %.1f\n",f);
        System.out.printf("Double d = %.2f\n",d);
        System.out.printf("Chaaracter c = %c\n",c);
        System.out.printf("String str = %s",str);


    }
}
