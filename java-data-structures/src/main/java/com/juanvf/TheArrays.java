package com.juanvf;

import java.util.Arrays;
public class TheArrays {
    public static void main(String[] args) {
        String[] colors = new String[5];
        colors[0] = "blue";
        colors[1] = "purple";
        colors[2] = "yellow";

        /* System.out.println(Arrays.toString(colors));
        System.out.println(colors[0]);
        System.out.println(colors[1]);
        System.out.println(colors[2]);
        System.out.println(colors[3]);
        System.out.println(colors[4]); */

        int[] numbers = {100, 200};

        for (int index = 0; index < colors.length; index++) {
            System.out.println(colors[index]);
        }

        for (int index = colors.length - 1; index >= 0; index--) {
            System.out.println(colors[index]);
        }

        Arrays.stream(colors).forEach(System.out::println);
    }
}
