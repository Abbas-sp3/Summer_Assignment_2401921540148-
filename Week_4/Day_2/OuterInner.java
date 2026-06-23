class Outer {
    void display() {
        System.out.println("Outer display");
    }
    class Inner {
        void display() {
            System.out.println("Inner display");
        }
    }
}

public class OuterInner {
    public static void main(String[] args) {
        Outer o = new Outer();
        o.display();
        Outer.Inner i = o.new Inner();
        i.display();
    }
}
