#include <bits/stdc++.h>
using namespace std;

mt19937 rng(chrono::steady_clock().now().time_since_epoch().count());

typedef struct testcase {
    int a, b, c;
} testcase;

int random_number(int a, int b) {
    return a + (rng() % b);
}

testcase generate_testcase() {
    testcase randomTest;
    randomTest.a = random_number(1, 10000);
    randomTest.b = random_number(1, 10000);
    randomTest.c = random_number(-10000, 10000);
    return randomTest
}

// ofc the below code is correct since it's a brute force
int brute_force(testcase T) {
    // code... 
    return correct_ans;
}

// Your optimized code but it's giving TLE or WA or RT or something >_<
int optimized_solution(testcase T) {
    // code...
    return optimized_ans;
}

void debugger() {
    testcase random = generate_testcase();
    int ans1 = brute_force(random);
    int ans2 = optimized_solution(random);
    if(ans1 != ans2) {
        cout << random.a; 
        // .....
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while(true) {
        debugger();
    }
    return 0;
}
