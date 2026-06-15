import java.util.Random;

abstract class Compartment {
    public abstract String notice();
}

class FirstClass extends Compartment {
    public String notice() {
        return "First Class: Premium seating with extra comfort.";
    }
}

class Ladies extends Compartment {
    public String notice() {
        return "Ladies: Reserved for female passengers only.";
    }
}

class General extends Compartment {
    public String notice() {
        return "General: Standard seating for all passengers.";
    }
}

class Luggage extends Compartment {
    public String notice() {
        return "Luggage: For baggage storage only.";
    }
}

public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] arr = new Compartment[10];
        Random r = new Random();
        for (int i = 0; i < 10; i++) {
            int x = r.nextInt(4) + 1;
            if (x == 1) arr[i] = new FirstClass();
            else if (x == 2) arr[i] = new Ladies();
            else if (x == 3) arr[i] = new General();
            else arr[i] = new Luggage();
            System.out.println(arr[i].notice());
        }
    }
}
