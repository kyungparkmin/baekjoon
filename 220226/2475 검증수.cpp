#include <iostream>

using namespace std;

int main()
{
    long long sum = 0;
    long long num;
    for(int i = 1; i <= 5; i++){
        scanf("%lld", &num);
        sum = sum + num * num;
    }
    printf("%lld", sum%10);
}