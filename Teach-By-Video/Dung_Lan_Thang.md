# Tính lãi

## Các thông số

- **t**: lãi suất
- **n**: Số tiền ban đầu
- **k**: Số tháng
- **m**: Số tiền nhận được sau k tháng

## Công thức

- **m = n * (1 + t)^k**

## Khi biết t, n, k, tính m

- **m = n * (1 + t)^k**

```cpp
cin >> t >> n >> k;

m = n;
for (int i = 1; i <= k; i++)  {
    m = m * (1 + t/100.0);
}
// làm tròn đến 2 chữ số thập phân
cout << fixed << setprecision(2) << m << endl;

```

## Khi biết t, n, m, tính k

**m = n * (1 + t)^k**

Giờ ta cần tìm k sao cho  n * (1 + t)^k >= m

```cpp
cin >> t >> n >> m;

k = 0;
while (n < m) {
    n = n * (1 + t/100.0);
    k++;
}
cout << (int)k << endl;
```

## Khi biết t, m, k, tính n

**m = n * (1 + t)^k**

n = m / (1 + t)^k

Ý tưởng: Tính s = (1 + t)^k, sau đó n = m / s

```cpp
cin >> t >> m >> k;

double s = 1;
for (int i = 1; i <= k; i++) {
    s = s * (1 + t/100.0);
}
n = m / s;
cout << fixed << setprecision(2) << n << endl;
```

## Code tổng hợp
    
```cpp
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double t, n, k, m;
    // t: lai suat
    // n: von
    // k: so thang
    // m: so tien can co

    //--------------------------------
    cin >> t >> n >> k;

    m = n;
    for (int i = 1; i <= k; i++)  {
        m = m * (1 + t/100.0);
    }
    // làm tròn đến 2 chữ số thập phân
    cout << fixed << setprecision(2) << m << endl;

    //--------------------------------

    cin >> t >> n >> m;

    k = 0;
    while (n < m)
    {
        n = n * (1 + t / 100.0);
        k++;
    }
    cout << (int)k << endl;

    //--------------------------------

    cin >> t >> m >> k;

    double s = 1;
    for (int i = 1; i <= k; i++)
    {
        s = s * (1 + t / 100.0);
    }
    n = m / s;
    cout << fixed << setprecision(2) << n << endl;
}
```

