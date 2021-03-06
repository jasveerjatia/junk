// Реализуйте метод, проверяющий, является ли заданная строка палиндромом. Палиндромом называется строка, которая читается одинаково слева направо и справа налево. При определении "палиндромности" строки должны учитываться только буквы и цифры. А пробелы, знаки препинания, а также регистр символов должны игнорироваться.
// Если в вашем решении требуются циклы и условные операторы, можете вернуться к этой задаче после просмотра соответствующего урока. Но решить можно и без них.
// Воспользуйтесь предоставленным шаблоном. Декларацию класса, метод main и обработку ввода-вывода добавит проверяющая система.
// Sample Input:
// Madam, I'm Adam!
// Sample Output:
// true

/**
 * Checks if given <code>text</code> is a palindrome.
 *
 * @param text any string
 * @return <code>true</code> when <code>text</code> is a palindrome, <code>false</code> otherwise
 */
public static boolean isPalindrome(String text) {
    String cleantext = text.toLowerCase().replaceAll("[^\\p{L}]","");
    StringBuilder rev = new StringBuilder(cleantext).reverse();
    return rev.toString().equals(cleantext);
}