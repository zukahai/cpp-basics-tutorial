# Ôn tập mảng

## Bài 1: Tổng số chẵn

Cho một mảng số nguyên `a` gồm `n` phần tử. Hãy tính tổng các số chẵn trong mảng.

**Input**

```
5
1 2 3 4 5
```

**Output**

```
6
```

Bài là của Quyết

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    int tong = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            tong += a[i];
        }
    }
    cout << tong;
}
```

## Bài 2: Số lượng số 10

Cho một mảng số nguyên `a` gồm `n` phần tử. Hãy đếm số lượng số 10 trong mảng.

**Input**

```
5
1 10 3 10 5
```

**Output**

```
2
```

Bài là của Quyết

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    int dem = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        if (a[i] == 10)
        {
            dem += 1;
        }
    cout << dem;
}
```

## Bài 3: Số lớn nhất và số lượng số lớn nhất

Cho một mảng số nguyên `a` gồm `n` phần tử. Hãy tìm số lớn nhất trong mảng và đếm số lượng số lớn nhất.

**Input**

```
5
1 10 3 10 5
```

**Output**

Kết quả lần lượt là số lớn nhất và số lượng số lớn nhất.

```
10 2
```

Bài là của Quyết

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    int dem = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    cout << max << " ";
    for (int i = 0; i < n; i++)
        if (a[i] == max)
        {
            dem += 1;
        }
    cout << dem;
}
```

## Bài 4: Số nhỏ nhất và số lượng số nhỏ nhất

Cho một mảng số nguyên `a` gồm `n` phần tử. Hãy tìm số nhỏ nhất trong mảng và đếm số lượng số nhỏ nhất.

**Input**

```
5
1 10 3 10 5
```

**Output**

Kết quả lần lượt là số nhỏ nhất và số lượng số nhỏ nhất.

```
1 1
```

Bài là của Quyết

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    int dem = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    cout << min << " ";
    for (int i = 0; i < n; i++)
        if (a[i] == min)
        {
            dem += 1;
        }
    cout << dem;
}
```

## Bài 5: Số cặp số lẻ

Cho một mảng số nguyên `a` gồm `n` phần tử. Hãy đếm xem có bao nhiều cách chọn 2 số `a[i]`, `a[j]` (i < j) trong mảng sao cho 2 số đó đều là số lẻ.

**Input**

```
5
1 2 3 4 5
```

**Output**

```
3
```

Bài là của Quyết

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    int dem = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        if (a[i] % 2 != 0)
        {
            dem += 1;
        }
    cout << dem * (dem - 1)/2;
}
```

Giải thích: Có 3 cách chọn 2 số lẻ trong mảng trên là (1, 3), (1, 5), (3, 5).

## Bài 6: Số cặp số chẵn

Cho một mảng số nguyên `a` gồm `n` phần tử. Hãy đếm xem có bao nhiêu cách chọn 2 số `a[i]`, `a[j]` (i < j) trong mảng sao cho 2 số đó đều là số chẵn.

**Input**

```
6
1 2 3 4 5 6
```

**Output**

```
3
```

Bài là của Quyết

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    int dem = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0)
        {
            dem += 1;
        }
    cout << dem * (dem - 1)/2;
}
```

Giải thích: Có 3 cách chọn 2 số chẵn trong mảng trên là (2, 4), (2, 6), (4, 6).

## Bài 7: Số cặp số chia hết cho 2

Cho một mảng số nguyên `a` gồm `n` phần tử. Hãy đếm xem có bao nhiêu cách chọn 2 số `a[i]`, `a[j]` (i < j) trong mảng sao cho tổng của 2 số đó chia hết cho 2.

**Input**

```
6
1 2 3 4 5 6
```

**Output**

```
6
```

Giải thích: Có 6 cách chọn 2 số trong mảng trên là (1, 3), (1, 5), (3, 5), (2, 4), (2, 6), (4, 6).

Bài là của Quyết

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    int dem = 0;
    int dem2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0)
        {
            dem += 1;
        }
    for (int i = 0; i < n; i++)
        if (a[i] % 2 != 0)
        {
            dem2 += 1;
        }
    cout << dem2 * (dem2 - 1)/2 + dem * (dem - 1)/2;
    
}
```

## Bài 8: Cặp số bằng nhau

Cho một mảng số nguyên `a` gồm `n` phần tử. Hãy đếm xem có bao nhiêu cách chọn 2 số liền kề nhau trong mảng sao cho 2 số đó bằng nhau.

**Input**

```
6
1 2 2 3 4 4
```

**Output**

```
2
```

Bài là của Quyết

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    int dem = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
        if (a[i] == a[i + 1])
        {
            dem += 1;
        }
    cout << dem;
}
```

Giải thích: Có 2 cách chọn 2 số liền kề bằng nhau trong mảng trên là (2, 2), (4, 4).

## Bài 9: Giá trị lớn thứ 2

Cho một mảng số nguyên `a` gồm `n` phần tử. Hãy tìm số có giá trị lớn thứ 2 trong mảng.

**Input**

```
6
1 2 3 4 5 6
```

**Output**

```
5
```

Bài là của Quyết

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max = -100000000;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            if (max < a[i])
                max = a[i];
    }
        if (max == -100000000)
        {
            cout << "-1";
        }
    else
    {
        cout << max;
    }
        
}
```

## Bài 10: Số chẵn lớn nhất

Cho một mảng số nguyên `a` gồm `n` phần tử. Hãy tìm số chẵn lớn nhất trong mảng. (Nếu không có số chẵn nào thì trả về -1).

**Input 1**

```
6
1 2 3 10 5 6
```

**Output 1**

```
10
```

**Input 2**

```
6
1 3 5 7 9 11
```

**Output 2**

```
-1
```

Bài là của Quyết

```cpp

#include <iostream>

using namespace std;

int main() {
    int n;
    int a[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max = -1000000;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    int max2 = -1000000;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < max)
            if (max2 < a[i])
                max2 = a[i];
    }
     if (max2 == -1000000)
     {
         cout << "-1";
     }
    else
    {
        cout << max2;
    }
    
}

```

