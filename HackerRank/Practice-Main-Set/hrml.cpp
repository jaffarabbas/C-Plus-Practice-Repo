#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    <tag1 value = "value">
    <tag2 name = "name">
    <tag3 another="another" final="final">
    </tag3>
    </tag2>
    </tag1>

    Queries
    tag1~value
    tag1.tag2.tag3~name
    tag1.tag2~value
    return 0;
}
