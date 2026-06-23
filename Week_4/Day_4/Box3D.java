class Box {
    protected int l, b;
    public Box() {}
    public Box(int l, int b) {
        this.l = l;
        this.b = b;
    }
    public void setDim(int l, int b) {
        this.l = l;
        this.b = b;
    }
    public int area() {
        return l * b;
    }
}

class Box3D extends Box {
    private int h;
    public Box3D() {}
    public Box3D(int l, int b, int h) {
        super(l, b);
        this.h = h;
    }
    public void setDim(int l, int b, int h) {
        super.setDim(l, b);
        this.h = h;
    }
    public int volume() {
        return l * b * h;
    }
}

public class BoxDemo {
    public static void main(String[] args) {
        Box b = new Box(4, 5);
        System.out.println(b.area());
        Box3D b3 = new Box3D(4, 5, 6);
        System.out.println(b3.area());
        System.out.println(b3.volume());
    }
}
