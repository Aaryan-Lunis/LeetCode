public class Plus_One {
    public int[] plusOne(int[] digits) {
        for (int i = digits.length - 1; i >= 0; i--) {
            if (digits[i] + 1 != 10) {
                digits[i] += 1;
                return digits;
            }
            digits[i] = 0;
        }
        int[] newDigits = new int[digits.length + 1];
        newDigits[0] = 1;
        return newDigits;
    }

    // Main method to run your test
    public static void main(String[] args) {
            Plus_One sol = new Plus_One();

        int[] input = {9, 9, 9};
        int[] output = sol.plusOne(input);

        // Print the output
        for (int digit : output) {
            System.out.print(digit + " ");
        }
    }
}
