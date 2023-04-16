int dist_of_nearest_perfect_sqr(int x){
    int n = sqrt(x);
    if (x - (n * n) < (n + 1) * (n + 1) - x)
        return n * n;
    else
        return (n + 1) * (n + 1);
}
