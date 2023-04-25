package com.juanvf;

import java.util.ArrayList;
import java.util.List;

public class Lists {
    public static void main(String[] args) {
        /*List<String> colorsUnmodifiable = List.of(
                "blue",
                "yellow"
        );*/

        List<String> colors = new ArrayList<>();
        colors.add("blue");
        colors.add("purple");
        colors.add("red");

        System.out.println(colors.size());
        System.out.println(colors.contains("blue"));
        System.out.println(colors.contains("green"));
        System.out.println(colors);

        /*for (String color : colors) {
            System.out.println(color);
        }*/

        colors.forEach(System.out::println);
    }
}
