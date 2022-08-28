import java.util.ArrayList;
import java.util.Scanner;

public class Main {


    public static int calPoints(String[] ops){
        int result = 0;
        ArrayList <Integer> x = new ArrayList<Integer>();
        for(int i = 0; i < ops.length; i++){
            
            try{
                int score = Integer.parseInt(ops[i]);
                System.out.println("Eklendi: " + score);
                x.add(score);
            }
            catch(NumberFormatException e){
                //TO DO ?
                System.out.println("Atlandı: " + ops[i]);
            }

            if(ops[i].equals("C")|| ops[i].equals("D") || ops[i].equals("+")){
                System.out.println("Girdi: " + ops[i]);
                switch (ops[i]) {
                    case "C":
                    System.out.println("girdimi??");
                        x.remove(x.size()-1);
                        break;
                    case "D":
                        int index = x.get(x.size()-1);
                        index = 2 * index;
                        x.add(index);
                        break;
                    case "+":
                    int num1,num2;
                    num1 = x.get(x.size()-1);
                    num2 = x.get(x.size()-2);
                    x.add(num1 + num2);
                    break;
                }
            }

        }
        for(int g : x){
            result += g;
        }


        return result;
    }

    public int binarySearch(int arr[], int begin, int end, int number) {

        if(begin <= end) {
            int mid = begin + (end - begin) / 2;

            if(arr[mid] == number)
                return mid;

            if(arr[mid] > number)
                return binarySearch(arr, begin, mid - 1, number);
            
            return binarySearch(arr, mid + 1, end, number);
        }

        return -1;
    }

    public static void main(String[] args) {
        
        // Main main = new Main();
        // int arr[] = {3,5,6,8,10};
        // int lenght = arr.length -1;
        // int result = main.binarySearch(arr, 0, lenght, 8);
        // if (result == -1)
        //     System.out.println("Element not present");
        // else
        //     System.out.println("Element found at index "
        //                        + result);

        Scanner sc = new Scanner(System.in);
        String[] ops = sc.nextLine().split(" ");
        sc.close();

        System.out.println(calPoints(ops));
        
    }
}