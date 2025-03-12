

i = 0: *
i = 1: **
i = 2: * *
i = 3: *  *
i = 4: *****

Nếu i = 0, i = 1, i = n - 1:
	In ra i + 1 dấu *
Ngược lại những dòng khác:
	In ra 1 dấu *
	In ra i - 1 dấu cách
	In ra 1 dấu *


i = 0:     *
i = 1:    **
i = 2:   * *
i = 3:  *  *
i = 4: *****

i = 0, 4 dấu cách
i + số dấu cách = n - 1
số dấu cách = n - 1 - i

In ra n - 1 - i dấu cách:

Nếu i = 0, i = 1, i = n - 1:
	In ra i + 1 dấu *
Ngược lại những dòng khác:
	In ra 1 dấu *
	In ra i - 1 dấu cách
	In ra 1 dấu *

for (i...) {
	for (int j = 0; j < n - 1 - i; j++)
		cout << " ";
	if (

}
