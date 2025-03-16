Mảng: 
    Chỉ số: i
    Giá trị: dem[i]

int dem[10000001];
dem[a[i]]++;

HashMap:
    Chỉ số: x
    Giá trị: dem[x]

map<long long, int> dem;
dem[1000000000000000000] = 0;



Nhập vào 1 chuỗi ký tự. In ra ký tự xuất hiện nhiều nhất trong chuỗi đó. Nếu có nhiều ký tự xuất hiện cùng số lần thì in ra ký tự nhỏ hơn theo thứ tự từ điển.

Kết quả in ra ký tự xuất hiện nhiều nhất và số lần xuất hiện của nó.

Ví dụ:

S = "cbacabaa"

Kết quả: a 4


-----------------------------------------
Nhập vào 1 chuỗi ký tự.
Các từ trong chuỗi được phân biệt bởi dấu cách.
In ra từ xuất hiện nhiều nhất trong chuỗi đó. Nếu có nhiều từ xuất hiện cùng số lần thì in ra từ nhỏ hơn theo thứ tự từ điển.

Ví dụ:

S = "nguyen vu hieu hieu vu vu"

Kết quả: vu 3



------------------------------------
Nhập vào số nguyên n và mảng gồm n chuỗi ký tự.
Các chuỗi ký tự được phân biệt bởi dấu cách.
In ra chuỗi xuất hiện nhiều nhất trong mảng đó. Nếu có nhiều chuỗi xuất hiện cùng số lần thì in ra chuỗi nhỏ hơn theo thứ tự từ điển.

Ví dụ:

6
nguyen vu hieu hieu vu vu

Kết quả: vu 3