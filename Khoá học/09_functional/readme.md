# Các bài tập về lập trình hàm

## Bài 1: Số cuối cùng

Viết hàm `lastDigit(n)` để trả về chữ số cuối cùng của số nguyên dương `n`.

- Kiểu dữ liệu đầu vào: một số nguyên dương `n` (1 ≤ n ≤ 10^6)

- Kiểu dữ liệu đầu ra: một số nguyên là chữ số cuối cùng của `n`

```C++
int lastDigit(int n) {
    // code
}
```

*Gợi ý:* Sử dụng phép chia lấy dư `%` cho 10 để lấy chữ số cuối cùng của số nguyên dương `n`.

### Áp dụng hàm cho ví dụ sau:

Nhập vào 3 số nguyên `a`, `b`, `c` (1 ≤ a, b, c ≤ 10^6). 

- Tìm chữ số cuối cùng của `a`
- Tìm chữ số cuối cùng của `b`
- Tìm chữ số cuối cùng của `c`
- Tìm chữ số cuối cùng của `a + b`
- Tìm chữ số cuối cùng của `a + c`
- Tìm chữ số cuối cùng của `b + c`
- Tìm chữ số cuối cùng của `a + b + c`

**Đầu vào**

- Một dòng chứa 3 số nguyên `a`, `b`, `c` (1 ≤ a, b, c ≤ 10^6)

**Đầu ra**

- Dòng đầu tiên: chữ số cuối cùng của `a`
- Dòng thứ hai: chữ số cuối cùng của `b`
- Dòng thứ ba: chữ số cuối cùng của `c`
- Dòng thứ tư: chữ số cuối cùng của `a + b`
- Dòng thứ năm: chữ số cuối cùng của `a + c`
- Dòng thứ sáu: chữ số cuối cùng của `b + c`
- Dòng cuối cùng: chữ số cuối cùng của `a + b + c`

### Ví dụ:

#### Ví dụ 1:

| Input | Output |
|-------|--------|
| 123 456 789 | 3 <br> 6 <br> 9 <br> 9 <br> 2 <br> 5 <br> 8 |

**Giải thích**

- Chữ số cuối cùng của 123 là 3
- Chữ số cuối cùng của 456 là 6
- Chữ số cuối cùng của 789 là 9
- Chữ số cuối cùng của 123 + 456 là 9
- Chữ số cuối cùng của 123 + 789 là 2
- Chữ số cuối cùng của 456 + 789 là 5
- Chữ số cuối cùng của 123 + 456 + 789 là 8

#### Ví dụ 2:

| Input | Output |
|-------|--------|
| 111 222 333 | 1 <br> 2 <br> 3 <br> 3 <br> 4 <br> 5 <br> 6 |

**Giải thích**

- Chữ số cuối cùng của 111 là 1
- Chữ số cuối cùng của 222 là 2
- Chữ số cuối cùng của 333 là 3
- Chữ số cuối cùng của 111 + 222 là 3
- Chữ số cuối cùng của 111 + 333 là 4
- Chữ số cuối cùng của 222 + 333 là 5
- Chữ số cuối cùng của 111 + 222 + 333 là 6

## Bài 2: Số lớn nhất trong 2 số

Viết hàm `maxTwoNumber(a, b)` để tìm số lớn nhất trong hai số nguyên `a` và `b`.

- Kiểu dữ liệu đầu vào: hai số nguyên `a`, `b` (1 ≤ a, b ≤ 10^6)

- Kiểu dữ liệu đầu ra: một số nguyên là số lớn nhất trong `a` và `b`

```C++

int maxTwoNumber(int a, int b) {
    // code
}
```

### Áp dụng hàm cho ví dụ sau:

Nhập vào 4 số nguyên `a`, `b`, `c`, `d` (1 ≤ a, b, c, d ≤ 10^6). Tìm số lớn nhất trong các cặp sau:

- Số lớn nhất trong `a` và `b`
- Số lớn nhất trong `b` và `c`
- Số lớn nhất trong `a`, `b`, `c` và `d`

**Đầu vào**

- Một dòng chứa 4 số nguyên `a`, `b`, `c`, `d` (1 ≤ a, b, c, d ≤ 10^6)

**Đầu ra**

- Dòng đầu tiên: số lớn nhất trong `a` và `b`
- Dòng thứ hai: số lớn nhất trong `b` và `c`
- Dòng thứ ba: số lớn nhất trong `a`, `b`, `c` và `d`

### Ví dụ:

#### Ví dụ 1:

| Input | Output |
|-------|--------|
| 6 15 20 10 | 15 <br> 20 <br> 20 |

**Giải thích**

- Số lớn nhất trong 6 và 15 là 15
- Số lớn nhất trong 15 và 20 là 20
- Số lớn nhất trong 6, 15, 20 và 10 là 20

#### Ví dụ 2:

| Input | Output |
|-------|--------|
| 10 25 22 20 | 25 <br> 22 <br> 25 |

**Giải thích**

- Số lớn nhất trong 10 và 25 là 25
- Số lớn nhất trong 25 và 22 là 22
- Số lớn nhất trong 10, 25, 22 và 20 là 25

#### Ví dụ 3:

| Input | Output |
|-------|--------|
| 100 200 300 400 | 200 <br> 400 <br> 400 |

**Giải thích**

- Số lớn nhất trong 100 và 200 là 200
- Số lớn nhất trong 200 và 300 là 400
- Số lớn nhất trong 100, 200, 300 và 400 là 400



## Bài 3: Viết hàm tính ước chung lớn nhất

Viết hàm `gcd(a, b)` để tính ước chung lớn nhất của hai số `a` và `b`.
- Kiểu dữ liệu đầu vào: hai số nguyên dương `a`, `b` (1 ≤ a, b ≤ 10^6)
- Kiểu dữ liệu đầu ra: một số nguyên là ước chung lớn nhất của `a` và `b`

```C++
int gcd(int a, int b) {
    // code
}
```

### Áp dụng hàm cho ví dụ sau:

Nhập và 3 số nguyên `a`, `b`, `c` (1 ≤ a, b, c ≤ 10^6). Tính ước chung lớn nhất của các cặp sau:
- ước chung lớn nhất của `a` và `b`
- ước chung lớn nhất của `a` và `c`
- ước chung lớn nhất của `b` và `c`
- ước chung lớn nhất của `a + b` và `a + c`

**Đầu vào**

- Một dòng chứa 3 số nguyên `a`, `b`, `c` (1 ≤ a, b, c ≤ 10^6)

**Đầu ra**

- Dòng đầu tiên: ước chung lớn nhất của `a` và `b`
- Dòng thứ hai: ước chung lớn nhất của `a` và `c`
- Dòng thứ ba: ước chung lớn nhất của `b` và `c`
- Dòng cuối cùng: ước chung lớn nhất của `a + b` và `a + c`

### Ví dụ:

#### Ví dụ 1:

| Input | Output |
|-------|--------|
| 6 15 20 | 3 <br> 2 <br> 5 <br> 1 |

**Giải thích**

- Ước chung lớn nhất của 6 và 15 là 3
- Ước chung lớn nhất của 6 và 20 là 2
- Ước chung lớn nhất của 15 và 20 là 5
- Ước chung lớn nhất của 6 + 15 và 6 + 20 là 1

#### Ví dụ 2:

| Input | Output |
|-------|--------|
| 10 25 22 | 5 <br> 2 <br> 1 <br> 1 |

**Giải thích**

- Ước chung lớn nhất của 10 và 25 là 5
- Ước chung lớn nhất của 10 và 22 là 2
- Ước chung lớn nhất của 25 và 22 là 1
- Ước chung lớn nhất của 10 + 25 và 10 + 22 là 1

#### Ví dụ 3:

| Input | Output |
|-------|--------|
| 100 200 300 | 100 <br> 100 <br> 100 <br> 100 |

**Giải thích**

- Ước chung lớn nhất của 100 và 200 là 100
- Ước chung lớn nhất của 100 và 300 là 100
- Ước chung lớn nhất của 200 và 300 là 100
- Ước chung lớn nhất của 100 + 200 và 100 + 300 là 100

## Bài 4: Viết hàm đếm số lượng ước số

Viết hàm `countDivisors(n)` để đếm số lượng ước số của số nguyên dương `n`.

- Kiểu dữ liệu đầu vào: một số nguyên dương `n` (1 ≤ n ≤ 10^6)
- Kiểu dữ liệu đầu ra: một số nguyên là số lượng ước số của `n`

```C++
int countDivisors(int n) {
    // code
}
```

### Áp dụng hàm cho ví dụ sau:

Nhập vào 3 số nguyên `a`, `b`, `c` (1 ≤ a, b, c ≤ 10^6). Đếm số lượng ước số của các số a, b, c.

**Đầu vào**

- Một dòng chứa 3 số nguyên `a`, `b`, `c` (1 ≤ a, b, c ≤ 10^6)

**Đầu ra**

- Dòng đầu tiên: số lượng ước số của `a`
- Dòng thứ hai: số lượng ước số của `b`
- Dòng thứ ba: số lượng ước số của `c`

### Ví dụ:

#### Ví dụ 1:

| Input | Output |
|-------|--------|
| 6 15 20 | 4 <br> 4 <br> 6 |

**Giải thích**

- Số lượng ước số của 6 là 4 (1, 2, 3, 6)
- Số lượng ước số của 15 là 4 (1, 3, 5, 15)
- Số lượng ước số của 20 là 6 (1, 2, 4, 5, 10, 20)

#### Ví dụ 2:

| Input | Output |
|-------|--------|
| 10 25 22 | 4 <br> 3 <br> 4 |

**Giải thích**

- Số lượng ước số của 10 là 4 (1, 2, 5, 10)
- Số lượng ước số của 25 là 3 (1, 5, 25)
- Số lượng ước số của 22 là 4 (1, 2, 11, 22)

#### Ví dụ 3:

| Input | Output |
|-------|--------|
|2 3 5 | 2 <br> 2 <br> 2 |

**Giải thích**

- Số lượng ước số của 2 là 2 (1, 2)
- Số lượng ước số của 3 là 2 (1, 3)
- Số lượng ước số của 5 là 2 (1, 5)

## Bài 5: Viết hàm kiểm tra số nguyên tố

Số nguyên tố nguyên dương là số chỉ có hai ước số dương phân biệt là 1 và chính nó. Viết hàm `isPrime(n)` để kiểm tra số nguyên dương `n` có phải là số nguyên tố hay không.

- Kiểu dữ liệu đầu vào: một số nguyên dương `n` (1 ≤ n ≤ 10^6)
- Kiểu dữ liệu đầu ra: bool, trả về `true` nếu `n` là số nguyên tố, ngược lại trả về `false`

```C++
bool isPrime(int n) {
    // code
}
```

### Áp dụng hàm cho ví dụ sau:

Nhập vào 3 số nguyên `a`, `b`, `c` (1 ≤ a, b, c ≤ 10^6). Kiểm tra xem các số a, b, c có phải là số nguyên tố hay không.

**Đầu vào**

- Một dòng chứa 3 số nguyên `a`, `b`, `c` (1 ≤ a, b, c ≤ 10^6)

**Đầu ra**

- Dòng đầu tiên: `YES` nếu `a` là số nguyên tố, ngược lại `NO`
- Dòng thứ hai: `YES` nếu `b` là số nguyên tố, ngược lại `NO`
- Dòng thứ ba: `YES` nếu `c` là số nguyên tố, ngược lại `NO`

### Ví dụ:

#### Ví dụ 1:

| Input | Output |
|-------|--------|
| 6 15 20 | NO <br> NO <br> NO |

**Giải thích**

- 6, 15, 20 không phải là số nguyên tố vì có nhiều hơn 2 ước số dương

#### Ví dụ 2:

| Input | Output |
|-------|--------|
| 5 10 11 | YES <br> NO <br> YES |

**Giải thích**

- 5, 11 là số nguyên tố vì chỉ có 2 ước số dương là 1 và chính nó
- 10 không phải là số nguyên tố vì có nhiều hơn 2 ước số dương

#### Ví dụ 3:

| Input | Output |
|-------|--------|
| 2 3 5 | YES <br> YES <br> YES |

**Giải thích**

- 2, 3, 5 là số nguyên tố vì chỉ có 2 ước số dương là 1 và chính nó

## Bài 6: Viết in thường và in hoa chuỗi

Viết hàm `toLowerCase(s)` để chuyển chuỗi `s` thành chuỗi in thường.

- Kiểu dữ liệu đầu vào: một chuỗi `s` (1 ≤ |s| ≤ 10^6)
- Kiểu dữ liệu đầu ra: chuỗi in thường của chuỗi `s`

```C++
string toLowerCase(string s) {
    // code
}
```

Viết hàm `toUpperCase(s)` để chuyển chuỗi `s` thành chuỗi in hoa.

- Kiểu dữ liệu đầu vào: một chuỗi `s` (1 ≤ |s| ≤ 10^6)

- Kiểu dữ liệu đầu ra: chuỗi in hoa của chuỗi `s`

```C++
string toUpperCase(string s) {
    // code
}
```

### Áp dụng hàm cho ví dụ sau:

Nhập vào chuỗi `s` và chuỗi `p`

- In ra chuỗi in thường của chuỗi `s`
- In ra chuỗi in hoa của chuỗi `s`
- In ra chuỗi in thường của chuỗi `p`
- In ra chuỗi in hoa của chuỗi `p`

**Đầu vào**

- Dòng đầu tiên: chuỗi `s`, độ dài của chuỗi `s` không vượt quá 10^6
- Dòng thứ hai: chuỗi `p`, độ dài của chuỗi `p` không vượt quá 10^6

**Đầu ra**

- Dòng đầu tiên: chuỗi in thường của chuỗi `s`
- Dòng thứ hai: chuỗi in hoa của chuỗi `s`
- Dòng thứ ba: chuỗi in thường của chuỗi `p`
- Dòng thứ tư: chuỗi in hoa của chuỗi `p`

### Ví dụ:

#### Ví dụ 1:

| Input | Output |
|-------|--------|
| Hello World <br> Goodbye World | hello world <br> HELLO WORLD <br> goodbye world <br> GOODBYE WORLD |

#### Ví dụ 2:

| Input | Output |
|-------|--------|
| Hello <br> World | hello <br> HELLO <br> world <br> WORLD |

#### Ví dụ 3:

| Input | Output |
|-------|--------|
| Lap trinh <br> C++ can ban | lap trinh <br> LAP TRINH <br> c++ can ban <br> C++ CAN BAN |


## Bài 7: Tổng từ 1 đến n

Viết hàm `sum(n)` để tính tổng các số nguyên dương từ 1 đến `n`.

- Kiểu dữ liệu đầu vào: một số nguyên dương `n` (1 ≤ n ≤ 10^6)

- Kiểu dữ liệu đầu ra: một số nguyên là tổng các số nguyên dương từ 1 đến `n`

```C++

long long sum(int n) {
    // code
}
```

### Áp dụng hàm cho ví dụ sau:

Nhập vào 2 số nguyên `a`, `b` (1 ≤ a, b ≤ 10^6). Tính tổng các số nguyên dương từ `a` đến `b`.

*Gợi ý:* Tổng từ a đến b có thể được tính bằng công thức sau: sum(1, b) - sum(1, a - 1)

**Đầu vào**

- Một dòng chứa 2 số nguyên `a`, `b` (1 ≤ a ≤ b ≤ 10^6)

**Đầu ra**

- Dòng đầu tiên: tổng các số nguyên dương từ 1 đến `a`
- Dòng thứ hai: tổng các số nguyên dương từ 1 đến `b`
- Dòng thứ ba: tổng các số nguyên dương từ `a` đến `b`

### Ví dụ:

#### Ví dụ 1:

| Input | Output |
|-------|--------|
| 3 5 | 6 <br> 15 <br> 12 |

**Giải thích**

- Tổng các số nguyên dương từ 1 đến 3 là 6
- Tổng các số nguyên dương từ 1 đến 5 là 15
- Tổng các số nguyên dương từ 3 đến 5 là 12

#### Ví dụ 2:

| Input | Output |
|-------|--------|
| 1 10 | 1 <br> 55 <br> 55 |


#### Ví dụ 3:

| Input | Output |
|-------|--------|
| 10 10 | 55 <br> 55 <br> 10 |







