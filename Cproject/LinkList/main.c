#include <stdio.h>
#include <string.h>
struct n{
    int a;
}a;
void CharacterLength();
int main() {
  a.a = 3;
  printf("%d",a.a);
    CharacterLength();
}
void CharacterLength(){
    int len[] = {1,2};
    int length = strlen(len);
    printf("%d",length);
}