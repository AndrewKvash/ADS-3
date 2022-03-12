// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
int l = 0;
int r = size - 1;
int res = 0;
while (l < r) {
int ser = (l + r) / 2;
if (arr[ser] < value) {
l = ser + 1;
} else {
r = ser;
}
}
while (arr[l] == value) {
l++;
res++;
}
if (res == 0) {
return 0; // если ничего не найдено
} else {
return res;
}
}
