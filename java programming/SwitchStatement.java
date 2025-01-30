import java.util.Scanner;
public class SwitchStatement {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an Operator :-> ");
        char op = sc.next().charAt(0);
        int a,b;
        System.out.print("Enter a number :-> ");
        a = sc.nextInt();
        System.out.print("Enter a number :-> ");
        b = sc.nextInt();

     switch(op){
            case '+':
            System.out.println(a+b);
            break;
            case '-':
            System.out.println(a-b);
            break;
            case '*':
            System.out.println(a*b);
            break;
            case '/':
            System.out.println(a/b);
            break;
            default :
            System.out.println("Invalid operator");

        }
        sc.close();




    }
    
}
