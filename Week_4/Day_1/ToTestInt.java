interface test {
    int square(int n);
}

class arithmetic implements test {
    public int square(int n) {
        return n * n;
    }
}

public class ToTestInt {
    public static void main(String[] args) {
        arithmetic a = new arithmetic();
        System.out.println(a.square(5));
    }
}
