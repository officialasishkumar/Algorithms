vector<int> spf(1e6+1, 0);
for (int i = 0; i <= 1e6; i++)
        spf[i] = i;
for (int i = 2; i <= 1e6; i++)
    if (spf[i] == i)
        for (int j = i; j <= 1e6; j += i)
           if (spf[j] == j)
              spf[j] = i;
