int multiple35(int n) {
    int sum = 0;
    int i;
    for (i = 1; i < n; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}

int sum_square_diff(int n) {
    int sum = 0;
    int sum_of_squares = 0;
    int i;
    for (i = 1; i <= n; i++) {
        sum += i;
        sum_of_squares += (i * i);
    }
    sum *= sum;
    return sum - sum_of_squares;
}

int even_fibb(int n) {
    if (n < 2) return 0;
    int sum = 2;
    int a = 1;
    int b = 2;
    int i = 3;
    while (i < n) {
        if (i % 2 == 0) {
            sum += i;
        }
        a = b;
        b = i;
        i = a + b;
    }
    return sum;
}