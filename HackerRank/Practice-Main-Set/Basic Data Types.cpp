#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int i;
	long long ll = 12345678912345;
	char c;
	float f;
	double d;
	scanf("%d %lld %c %f %lf",&i , &ll , &c , &f ,&d);
	printf("%d\n%lld\n%c\n%.3f\n%.9lf",i,ll,c,f,d);
	// scanf("%ld", &ll);
	// printf("%lld",ll);
	return 0;
	// cin >> i >> ll >> c >> f >> d;
	// cout << i << "\n" << ll << "\n" << c << "\n" << f << "\n" << f << "\n" << d << "\n";
}