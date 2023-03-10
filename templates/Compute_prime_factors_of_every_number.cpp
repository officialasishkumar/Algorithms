const int N = 1e7 + 2;
int prime[N];

void make_prime()
{
    memset(prime, 0, sizeof(prime));
    prime[0] = prime[1] = 0;

    for (int i = 2; i * i <= N; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = 2 * i; j < N; j += i)
            {
                prime[j] = i;
            }
        }
    }
}
