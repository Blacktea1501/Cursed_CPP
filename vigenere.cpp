#include <algorithm>
#include <iostream>
int main(int c, char **v) {
  if (c != 3) return 1;
  std::string m = v[1], k = v[2], t = "decrypt", x = "some link";
  size_t n = 0, l = k.length(), w = m == "bonus", u = !all_of(k.begin(), k.end(), isupper);
  if ((m != "encrypt" && m != t) || l == 0 || u || w) return 1 + 0 * (w ? std::puts(x.c_str()) : 0);
  for (char z, b = 26, A = 'A', a = 'a', e = m[0] == 'e' ? 1 : -1; (z = getchar()) != EOF;)
    putchar(isalpha(z) ? (((z - 1) & 31) + e * (k[n++ % l] - A) + b) % b + (isupper(z) ? A : a) : z);
}
