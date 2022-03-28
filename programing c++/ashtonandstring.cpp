#define __STDC_FORMAT_MACROS
#include <inttypes.h>
#include <algorithm>
#include <stdint.h>
#include <stdio.h>

using namespace std;

#define FOR(i, a, b) for (i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)
#define ROF(i, a, b) for (int i = (b); --i >= (a);)
typedef int64_t i64;

int ri()
{
  int x
      scanf("%d", &x);
  return x;
}

i64 ri64()
{
  i64 x;
  scanf("%" SCNd64, &x);
  return x;
}

namespace KoAluru
{
  bool *t;
  int *b

      template <typename T>
      void bucket(T a[], int n, int k, bool end)
  {
    fill_n(b, k, 0);
    REP(i, n)
    b[a[i]]++;
    if (end)
      FOR(i, 1, k)
    b[i] += b[i - 1];
    else
    {
      int s = 0;
      REP(i, k)
      s += b[i], b[i] = s - b[i];
    }
  }

  template <typename T>
  void plus_to_minus(T a[], int sa[], int n, int k)
  {
    bucket(a, n, k, false);
    sa[b[a[n - 1]]++] = n - 1;
    REP(i, n - 1)
    {
      int j = sa[i] - 1;
      if (j >= 0 && !t[j])
        sa[b[a[j]]++] = j;
    }
  }

  template <typename T>
  void minus_to_plus(T a[], int sa[], int n, int k)
  {
    bucket(a, n, k, true);
    ROF(i, 0, n)
    {
      int j = sa[i] - 1;
      if (j >= 0 && t[j])
        sa[--b[a[j]]] = j;
    }
  }

  template <typename T>
  void ka(T a[], int sa[], int n, int k)
  {
    t[n - 1] = false;
    ROF(i, 0, n - 1)
    t[i] = a[i] < a[i + 1] || a[i] == a[i + 1] && t[i + 1];
    bool minor = 2 * count(t, t + n, false) > n;

    bucket(a, n, k, minor);
    fill_n(sa, n, -1);
    if (minor)
    {
      REP(i, n)
      if (t[i])
        sa[--b[a[i]]] = i;
      plus_to_minus(a, sa, n, k);
      minus_to_plus(a, sa, n, k);
    }
    else
    {
      sa[b[a[n - 1]]++] = n - 1;
      REP(i, n - 1)
      if (!t[i])
        sa[b[a[i]]++] = i;
      minus_to_plus(a, sa, n, k);
      plus_to_minus(a, sa, n, k);
    }

    int last = -1, name = 0, nn = count(t, t + n, minor);
    int *sa2, *pi;
    if (minor)
      sa2 = sa, pi = sa + n - nn;
    else
      sa2 = sa + n - nn, pi = sa;
    fill_n(b, n, -1);
    REP(i, n)
    if (sa[i] >= 0 && minor == t[sa[i]])
    {
      bool diff = last == -1;
      int p = sa[i];
      if (!diff)
        REP(j, n)
        {
          if (last + j >= n || p + j >= n || a[last + j] != a[p + j] || t[last + j] != t[p + j])
          {
            diff = true;
            break;
          }
          else if (j > 0 && (minor == t[last + j] || minor == t[p + j]))
            break;
        }
      if (diff)
      {
        name++;
        last = p;
      }
      b[p] = name - 1;
    }
    nn = 0;
    REP(i, n)
    if (b[i] >= 0)
      pi[nn++] = b[i];

    if (name < nn)
      ka(pi, sa2, nn, name);
    else
      REP(i, nn)
    sa2[pi[i]] = i;

    ROF(i, 0, nn)
    t[i] = a[i] < a[i + 1] || a[i] == a[i + 1] && t[i + 1];

    nn = 0;
    bucket(a, n, k, minor);
    if (minor)
    {
      REP(i, n)
      if (minor == t[i])
        pi[nn++] = i;
      REP(i, nn)
      sa[i] = pi[sa2[i]];
      ROF(i, 0, nn)
      {
        int j = sa[i];
        sa[i] = -1;
        sa[--b[a[j]]] = j;
      }
    }
    else
    {
      REP(i, n)
      if (minor == t[i])
        pi[nn++] = i;
      ROF(i, 0, nn)
      sa[n - nn + i] = pi[sa2[i]];
      REP(i, nn)
      {
        int j = sa[n - nn + i];
        sa[n - nn + i] = -1;
        sa[b[a[j]]++] = j;
      }
    }

    if (minor)

      plus_to_minus(a, sa, n, k);
    else

      minus_to_plus(a, sa, n, k);
  }

  template <typename T>

  void main(T a[], int sa[], int b[], int n, int k)
  {
    if (n > 0)

    {
      KoAluru::b = b;
      t = new bool[n];
      ka(a, sa, n, k);

      delete[] t;
    }
  }

  template <typename T>

  void calc_rank_lcp(T a[], int sa[], int n, int rank[], int lcp[])

  {
    REP(i, n)

    rank[sa[i]] = i;
    int k = 0;

    lcp[0] = 0;

    FOR(i, 0, n)

    if (rank[i])
    {

      for (int j = sa[rank[i] - 1]; i + k < n && j + k < n && a[i + k] == a[j + k]; k++)
        ;

      lcp[rank[i]] = k;

      k &&k--;
    }
  }

}; // namespace KoAluru

const int N = 100000;

char a[N + 1];

int sa[N], rnk[N], lcp[N];

int main()
{

  for (int cc = ri(); cc--;)

  {

    scanf("%s", a);

    i64 k = ri64() - 1;

    int n = strlen(a);

    KoAluru::main(a, sa, rnk, n, 127);

    KoAluru::calc_rank_lcp(a, sa, n, rnk, lcp);

    REP(i, n)
    {

      i64 t = (i64(n - sa[i]) * (n - sa[i] + 1) - i64(lcp[i]) * (lcp[i] + 1)) / 2;

      if (k < t)

      {

        for (int j = lcp[i] + 1; j <= k; j++)
          k -= j;

        printf("%c\n", a[sa[i] + k]);

        break;
      }

      k -= t;
    }
  }
}
